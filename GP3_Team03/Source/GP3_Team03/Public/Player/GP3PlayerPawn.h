// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "GP3PlayerPawn.generated.h"

class UPlayerPawnMovementComponent;
class UGP3WASDMovementComponent;
class UGP3ShootComponent;
class UCameraComponent;
class USpringArmComponent;

UCLASS()
class GP3_TEAM03_API AGP3PlayerPawn : public APawn
{
	GENERATED_BODY()
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnWeaponEquippedEvent);

public:
	AGP3PlayerPawn();

	void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

	void HandleMoveForwardInput(float ForwardInput);
	void HandleMoveRightInput(float RightInput);
	void HandleLookYawInput(float YawInput);
	void HandleLookPitchInput(float PitchInput);
	
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnForwardInput();
	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable)
	void OnRightInput();
	
	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3WASDMovementComponent* WASDMovementComp;
	UPROPERTY(Category="Custom Components", EditAnywhere, BlueprintReadWrite)
	UGP3ShootComponent* ShootComp;
	UPROPERTY(Category="Built in components", EditDefaultsOnly, BlueprintReadWrite)
	UStaticMeshComponent* MeshComp;
	UPROPERTY(Category="Built in components", EditDefaultsOnly)
	UCameraComponent* CameraComp;
	UPROPERTY(Category="Built in components", EditDefaultsOnly)
	USpringArmComponent* SpringArmComp;

	UPROPERTY(BlueprintReadWrite)
	float RightInputValue = 0.0f;
	UPROPERTY(BlueprintReadWrite)
	float ForwardInputValue = 0.0f;
	UPROPERTY(BlueprintReadWrite)
	float HorizontalMouseSensitivity = 0.5f;
	UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
	float VerticalMouseSensitivity = 0.5f;

	UPROPERTY(EditAnywhere)
	TSubclassOf<class AWeaponBase> WeaponClass;
	UPROPERTY(BlueprintReadOnly)
	AWeaponBase* Gun;
	
	virtual void BeginPlay() override;

	UPROPERTY()
	FOnWeaponEquippedEvent OnWeaponEquipped;
};
