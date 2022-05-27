// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Weapons/WeaponBase.h"
#include "GP3ShootComponent.generated.h"

class UGP3ReloadWidget;
class AGP3PlayerPawn;

UCLASS()
class GP3_TEAM03_API UGP3ShootComponent : public UActorComponent
{
	GENERATED_BODY()
public:
	UGP3ShootComponent();

	UFUNCTION(BlueprintCallable)
	void Shoot();
	UFUNCTION(BlueprintCallable)
	void Reload();
	

protected:
	virtual void BeginPlay() override;
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

public:
	AGP3PlayerPawn* Owner = NULL;

	UPROPERTY(Category="Shoot buffertime", EditAnywhere)
	float ShootBuffer = 0.5f;

	bool ReadyToShoot = true;
	float ShootTimeStamp = 0.0f;
	float InternalCooldownTimer = 0.0f;

	UPROPERTY(EditDefaultsOnly)
	TSubclassOf<UGP3ReloadWidget> ReloadWidgetClass;

	UPROPERTY()
	UGP3ReloadWidget* ReloadWidget;

private:
	UFUNCTION()
	void OnReloaded();
};
