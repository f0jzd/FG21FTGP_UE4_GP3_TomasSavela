// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3WASDMovementComponent.h"
#include "DrawDebugHelpers.h"
#include "Kismet/KismetMathLibrary.h"

UGP3WASDMovementComponent::UGP3WASDMovementComponent()
{
	Owner = GetOwner();
}

void UGP3WASDMovementComponent::Move(float ForwardInput, float RightInput, float DeltaTime)
{
	CheckInputs(ForwardInput, RightInput, DeltaTime);
	AccelerationCurveValue = AccelerationCurve->GetFloatValue(AcceleratingTime);
	DecelerationCurveValue = DecelerationCurve->GetFloatValue(DeceleratingTime);
	
	FVector Input = {ForwardInput, RightInput, 0.0f};

	if (!IsMoving)
	{
		Input.X = LastRegisteredInput.X;
	}

	else
	{
		LastRegisteredInput.X = GetMaxDirNormal(Input.X);
	}

	if (!IsMoving)
	{
		Input.Y = LastRegisteredInput.Y;
	}

	else
	{
		LastRegisteredInput.Y = GetMaxDirNormal(Input.Y);
	}
	
	if (IsMoving)
	{
		AccelerationCurveValue = FMath::Clamp(AccelerationCurveValue, DecelerationCurveValue, 1.0f);
		
		Velocity.X = MaxForwardSpeed * AccelerationCurveValue;
		Velocity.Y = MaxRightSpeed * AccelerationCurveValue;
		
		if (Input.X != 0.0f && Input.Y != 0.0f || Input.X * Input.Y != 0.0f)
		{
			Velocity /= DiagonalMovementDivider;
		}
		
		FVector DistanceToMove = Input * Velocity;
		
		if (!IsUsingDepenetration)
		{
			Owner->AddActorLocalOffset(DistanceToMove * DeltaTime);
		}
		
		else
		{
			DepenetrateMovement(DistanceToMove, DeltaTime);
		}
	}

	else
	{
		DecelerationCurveValue = FMath::Clamp(DecelerationCurveValue, 0.0f, AccelerationCurveValue);
		FVector DistanceToStop = Input * Velocity * DecelerationCurveValue;
		if (!IsUsingDepenetration)
		{
			Owner->AddActorLocalOffset(DistanceToStop * DeltaTime);
		}
		
		else
		{
			DepenetrateMovement(DistanceToStop, DeltaTime);
		}
	}

	float NewYawRotation = (GetWorld()->GetFirstPlayerController()->GetControlRotation().Yaw);
	Owner->SetActorRotation(FRotator(Owner->GetActorRotation().Pitch, NewYawRotation, Owner->GetActorRotation().Roll));
}

void UGP3WASDMovementComponent::CheckInputs(float InForwardInput, float InRightInput, float DeltaTime)
{
	// If player is moving, add deltatime to timestamps. If forward input has decreased to 0, then reset timestamps..
	// .. and set moving to false.
	if (IsMoving)
	{
		AcceleratingTime += DeltaTime;

		if (InForwardInput == 0.0f && InRightInput == 0.0f)
		{
			DeceleratingTime = 0.0f;

			IsMoving = false;
		}
	}

	// If player is not moving, add deltatime to timestamps. If forward input has increased from 0, then reset timestamps..
	// .. and set moving to true.
	else if (!IsMoving)
	{
		DeceleratingTime += DeltaTime;

		if (InForwardInput > 0.01f || InForwardInput < -0.01f || InRightInput > 0.01f || InRightInput < -0.01f)
		{
			AcceleratingTime = 0.0f;
			IsMoving = true;
		}
	}
}

float UGP3WASDMovementComponent::GetMaxDirNormal(float InValue)
{
	if (InValue > 0.01f)
	{
		return 1.0f;
	}

	if (InValue < -0.0f)
	{
		return -1.0f;
	}
	return 0.0f;
}

void UGP3WASDMovementComponent::DepenetrateMovement(FVector InMovement, float DeltaTime)
{
	FHitResult Hit;
	
	RotatedMovement = Owner->GetActorRotation().RotateVector(InMovement);
	ApplySlopeAxis((RotatedMovement * DeltaTime) + Owner->GetActorLocation());
	Owner->SetActorLocation((RotatedMovement * DeltaTime) + Owner->GetActorLocation(), true, &Hit);

	if (Hit.bBlockingHit)
	{
		if (Hit.bStartPenetrating)
		{
			ApplyDepenetration(&Hit);
			return;
		}

		ApplyWallSliding(&Hit);
	}

	// if (!IsGrounded())
	// {
	// 	Owner->AddActorWorldOffset(-GravityForce * DeltaTime);
	// }
}

void UGP3WASDMovementComponent::ApplyDepenetration(FHitResult* HitResult)
{
	Owner->SetActorLocation((HitResult->Normal * FMath::Max(HitResult->PenetrationDepth, KINDA_SMALL_NUMBER) + Owner->GetActorLocation()));
}

void UGP3WASDMovementComponent::ApplyWallSliding(FHitResult* HitResult)
{
	RotatedMovement = FVector::VectorPlaneProject (RotatedMovement, HitResult->Normal);
	Owner->SetActorLocation((RotatedMovement * GetWorld()->GetDeltaSeconds()) + Owner->GetActorLocation());
}

void UGP3WASDMovementComponent::ApplySlopeAxis(FVector ActorLocation)
{
	FVector ForwardRayCastOrigin = ActorLocation;
	FVector ForwardRayCastEnd = ForwardRayCastOrigin + FVector(0.0f, 0.0f, -400.0f);
	
	FHitResult SlopeHitResult;
	if (GetWorld()->LineTraceSingleByChannel(
		SlopeHitResult,
		ForwardRayCastOrigin,
		ForwardRayCastEnd,
		ECC_WorldStatic))
	{
		if (SlopeHitResult.bBlockingHit)
		{
			float SlopeAngle = AngleBetweenTwoVectors(RotatedMovement.GetSafeNormal(0.0f), SlopeHitResult.Normal);
			
			if (SlopeAngle < (MaxSlopeAngle * 0.01f) && SlopeAngle >  (-MaxSlopeAngle * 0.01f))
			{
				RotatedMovement = FVector::VectorPlaneProject (RotatedMovement, SlopeHitResult.Normal);
			}
		}
	}
}

float UGP3WASDMovementComponent::AngleBetweenTwoVectors(FVector NormalA, FVector NormalB)
{
	float Dot = FVector::DotProduct(NormalA, NormalB);
	float Angle = Dot / NormalA.Size();
	Angle /= NormalB.Size();
	return Angle;
}

bool UGP3WASDMovementComponent::IsGrounded()
{
	FVector RayCastOrigin = Owner->GetActorLocation() - OffsetToActorFeet;
	FVector RayCastEnd = RayCastOrigin - CharacterOffsetToGround;
	FHitResult GroundHit;
	
	if (GetWorld()->LineTraceSingleByChannel(
		GroundHit,
		RayCastOrigin,
		RayCastEnd,
		ECC_WorldStatic))
	{
		if (GroundHit.bBlockingHit)
		{
			if (DrawHitresultLine)
			{
				DrawDebugLine(GetWorld(), RayCastOrigin,
				   GroundHit.ImpactPoint + FVector(0.0f, 0.0f, 10.0f),
				   FColor::Red, false, 5.0f);
			}
			IsOnGround = true;
			return true;
		}
	}
	IsOnGround = false;
	return false;
}
