// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3PlayerPawn.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"
#include "Weapons/WeaponBase.h"
#include "Player/GP3ShootComponent.h"
#include "Player/GP3WASDMovementComponent.h"

AGP3PlayerPawn::AGP3PlayerPawn()
{
	MeshComp = CreateDefaultSubobject<UStaticMeshComponent>("MeshComp");
	RootComponent = MeshComp;
	
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>("SpringArmComp");
	SpringArmComp->SetupAttachment(MeshComp);
	SpringArmComp->bUsePawnControlRotation = true;
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>("CameraComp");
	CameraComp->SetupAttachment(SpringArmComp);
	CameraComp->bUsePawnControlRotation = false;

	WASDMovementComp = CreateDefaultSubobject<UGP3WASDMovementComponent>("WASDMovementComp");
	ShootComp = CreateDefaultSubobject<UGP3ShootComponent>("ShootComp");
}

void AGP3PlayerPawn::BeginPlay()
{
	Super::BeginPlay();

	FActorSpawnParameters SpawnParames;
	SpawnParames.bNoFail = true;
	SpawnParames.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn;

	if (WeaponClass)
	{
		//TODO Fix so the gun spawn at the right place
		FTransform SpellTransform;
		SpellTransform.SetLocation(FVector::ZeroVector);
		SpellTransform.SetRotation(FQuat(FRotator::ZeroRotator));
		
		Gun = GetWorld()->SpawnActor<AWeaponBase>(WeaponClass,SpellTransform,SpawnParames);
		
		if (Gun)
		{
			Gun->SelectWeapon("Gun"); //Select what gun to use
			//Gun->AttachToComponent(MeshComp,FAttachmentTransformRules::Sock); //Attach the gun to the player 
			///Can use if we have a skelletonmesh for the character sp we can fix a socket s_hand_r
			///Getmesh() in this context is the players UskelletonMesh
			Gun->AttachToComponent(MeshComp,FAttachmentTransformRules::SnapToTargetIncludingScale,FName("Arm"));
			OnWeaponEquipped.Broadcast();
		}
	}
}

void AGP3PlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	PlayerInputComponent->BindAxis(TEXT("MoveForward"), this, &AGP3PlayerPawn::HandleMoveForwardInput);
	PlayerInputComponent->BindAxis(TEXT("MoveRight"), this, &AGP3PlayerPawn::HandleMoveRightInput);

	PlayerInputComponent->BindAxis(TEXT("LookHorizontal"), this, &AGP3PlayerPawn::HandleLookYawInput);
	PlayerInputComponent->BindAxis(TEXT("LookVertical"), this, &AGP3PlayerPawn::HandleLookPitchInput);
}

void AGP3PlayerPawn::HandleMoveForwardInput(float ForwardInput)
{
	ForwardInputValue = ForwardInput;
	OnForwardInput();
}

void AGP3PlayerPawn::HandleMoveRightInput(float RightInput)
{
	RightInputValue = RightInput;
	OnRightInput();
}

void AGP3PlayerPawn::HandleLookYawInput(float YawInput)
{
	AddControllerYawInput(YawInput * HorizontalMouseSensitivity);
}

void AGP3PlayerPawn::HandleLookPitchInput(float PitchInput)
{
	AddControllerPitchInput(PitchInput * VerticalMouseSensitivity);
}
