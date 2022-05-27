// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3WASDMovementComponent.generated.h"

UCLASS()
class GP3_TEAM03_API UGP3WASDMovementComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGP3WASDMovementComponent();

	UFUNCTION(BlueprintCallable)
	void Move(float ForwardInput, float RightInput, float DeltaTime);
	
	UFUNCTION()
	void CheckInputs(float InForwardInput, float InRightInput, float DeltaTime);
	
	UFUNCTION()
	float GetMaxDirNormal(float InValue);
	
	void DepenetrateMovement(FVector InMovement, float DeltaTime);
	
	void ApplyDepenetration(FHitResult* HitResult);
	
	void ApplyWallSliding(FHitResult* HitResult);

	bool IsGrounded();
	
	void ApplySlopeAxis(FVector ActorLocation);
	
	float AngleBetweenTwoVectors(FVector NormalA, FVector NormalB);

	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxForwardSpeed = 500.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxRightSpeed = 400.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float DiagonalMovementDivider = 1.414f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	float MaxSlopeAngle = 70.0f;
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector OffsetToActorFeet = {0.0f, 0.0f, 48.0f};
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector GravityForce = {0.0f, 0.0f, 500.f};
	
	UPROPERTY(Category="Character Movement - Editable", EditAnywhere)
	FVector CharacterOffsetToGround = {0.0f, 0.0f, 10.0f};
	
	UPROPERTY(Category="Character Movement - Curves", EditDefaultsOnly)
	UCurveFloat* AccelerationCurve = NULL;
	
	UPROPERTY(Category="Character Movement - Curves", EditDefaultsOnly)
	UCurveFloat* DecelerationCurve = NULL;
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	bool IsMoving = false;
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	bool IsOnGround = false;
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	FVector Velocity = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	FVector LastRegisteredInput = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	FVector RotatedMovement = {0.0f, 0.0f, 0.0f};
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	float AccelerationCurveValue = 0.0f;
	
	UPROPERTY(Category="Character Movement - Debugging Info", VisibleAnywhere)
	float DecelerationCurveValue = 0.0f;
	
	UPROPERTY(Category="Character Movement - Debugging Info", EditAnywhere)
	bool IsUsingDepenetration = false;

	UPROPERTY(Category="Character Movement - Debugging Info", EditAnywhere)
	bool DrawHitresultLine = false;
	
	UPROPERTY()
	float AcceleratingTime = 0.0f;
	
	UPROPERTY()
	float DeceleratingTime = 0.0f;
	
	UPROPERTY()
	int DepenetrationIterationCount = 0.0f;

	AActor* Owner = NULL;
};
