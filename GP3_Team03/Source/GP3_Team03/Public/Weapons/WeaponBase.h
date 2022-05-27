// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Engine/DataTable.h"
#include "WeaponBase.generated.h"

USTRUCT(BlueprintType)
struct FWeaponData : public FTableRowBase
{
	GENERATED_BODY()

	UPROPERTY(EditAnywhere)
	class USkeletalMesh* WeaponMesh; 

	UPROPERTY(EditAnywhere)
	FString WeaponName;

	UPROPERTY(EditAnywhere)
	float WeaponDamage;

	UPROPERTY(EditAnywhere)
	float WeaponRange;

	UPROPERTY(EditAnywhere)
	float WeaponShootCooldown;

	UPROPERTY(EditAnywhere)
	float WeaponReloadTime;

	UPROPERTY(EditAnywhere)
	float WeaponAmmo;

	//UPROPERTY(EditAnywhere)
	//class UAnimationAsset* FireAnimation;
};
UCLASS()
class GP3_TEAM03_API AWeaponBase : public AActor
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnReloadedEvent);
	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnAmmoChangedEvent);
	
public:	
	
	AWeaponBase();

protected:
	
	UPROPERTY()
	class USkeletalMeshComponent* MeshComp;

	UPROPERTY(EditAnywhere)
	class UDataTable* WeaponDataTable;

	FWeaponData* WeaponData;

	UPROPERTY(EditAnywhere)
	FName DefaultWeaponName;

	
	virtual void Tick(float DeltaSeconds) override;
	virtual void BeginPlay() override;

public:	
	void SelectWeapon(FName SpellName);
	FHitResult Use();
	float GetDamageFromGun();
	float StartAmmo;
	float CurrentAmmo;
	float ShootCoolDownTimer;
	float ReLoadTimer;
	float ReLoadTime;
	bool IsReLoading;
	
	bool HasAmmo();
	
	UFUNCTION(BlueprintCallable) // ta bort blueprint
	void ReLoadGun();

	UFUNCTION(BlueprintCallable)
	void InstantReload();

	UPROPERTY()
	FOnReloadedEvent OnReloadFinished;

	UPROPERTY()
	FOnAmmoChangedEvent OnAmmoChanged;
};
