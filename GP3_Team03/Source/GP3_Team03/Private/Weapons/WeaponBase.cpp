#include "Weapons/WeaponBase.h"
#include "DrawDebugHelpers.h"
#include "Components/SkeletalMeshComponent.h"
#include "Components/SplineComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Weapons/GunProjectile.h"

AWeaponBase::AWeaponBase()
{
	PrimaryActorTick.bCanEverTick = true;
	
	MeshComp = CreateDefaultSubobject<USkeletalMeshComponent>("SkeletalMeshComponent");
	RootComponent = MeshComp;
	DefaultWeaponName = FName("");
}

void AWeaponBase::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	
	if (IsReLoading)
	{
		ReLoadTimer-=DeltaSeconds;
		if (ReLoadTimer<=0)
		{
			IsReLoading = false;
			CurrentAmmo = StartAmmo;
			OnAmmoChanged.Broadcast();
			OnReloadFinished.Broadcast(); // calling event that its done reloading
		}
	}
}

void AWeaponBase::BeginPlay()
{
	Super::BeginPlay();
	if (DefaultWeaponName != "") //Set a default weapon
		{
			SelectWeapon(DefaultWeaponName);
		}
	StartAmmo = WeaponData->WeaponAmmo;
	CurrentAmmo = StartAmmo;
}

void AWeaponBase::SelectWeapon(FName WeaponName)
{
	if (WeaponDataTable)
	{
		static const FString PString = FString("Weapon1DT");
		WeaponData = WeaponDataTable->FindRow<FWeaponData>(WeaponName,PString,true); //Find the right WeaponName that is called and store the data
		
		
		if (WeaponData)
		{
			StartAmmo = WeaponData->WeaponAmmo;
			CurrentAmmo = StartAmmo;
			ReLoadTime = WeaponData->WeaponReloadTime;
			ShootCoolDownTimer = WeaponData->WeaponShootCooldown;
			MeshComp->SetSkeletalMesh(WeaponData->WeaponMesh);//Set the mesh to the right mesh depending on what "WeaponName/key" is called
			Projectile = WeaponData->Projectile; //TODO did i do this right?
			
		}
	}
}

FHitResult AWeaponBase::Use() 
{
	///Can be used to play different animation for different guns
	//if (WeaponData && WeaponData->FireAnimation)
	//{
	//	UE_LOG(LogTemp,Warning, TEXT("Using ability"))
	//	MeshComp->PlayAnimation(WeaponData->FireAnimation,false);
	//}
	FHitResult OutHit;
		if (WeaponData)
		{
			
			//FVector LineTraceStart = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
			//FVector LineTraceEnd = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetActorForwardVector() * WeaponData->WeaponRange + LineTraceStart;
			//
			//if (GetWorld()->LineTraceSingleByChannel(OutHit,LineTraceStart,LineTraceEnd,ECC_Visibility))
			//{
			//	FVector Start = MeshComp->GetSocketLocation(FName("GunOrigin"));
			//	FVector End = OutHit.Location;
			//	DrawDebugLine(GetWorld(), Start, End, FColor::Red, false, 5.0f);
			//	
				CurrentAmmo -= 1; //Remove one shot from the ammo amount when using the gun
				OnAmmoChanged.Broadcast();
			
			//	if (OutHit.GetActor()->ActorHasTag("Enemy")) // TODO can be removed?
			//		{
			//			FDamageEvent DamageEvent;
			//			OutHit.GetActor()->TakeDamage(WeaponData->WeaponDamage, DamageEvent, GetWorld()->GetFirstPlayerController(), this);
			//			GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Red, TEXT("ow :/"));
			//			return OutHit;
			//		}
			//}
			//
			//SplinePath->SetHiddenInGame(true,true);
			//bCalculateProjectilePath = false;
			
			
		}
	return OutHit;
}

float AWeaponBase::GetDamageFromGun()
{
	if (WeaponData)
	{
		float WeaponDamage = WeaponData->WeaponDamage;
		return WeaponDamage;
	}
	return 0;
}

float AWeaponBase::GetCriticalDamageFromGun()
{
	if (WeaponData)
	{
		float WeaponDamage = WeaponData->WeaponCriticalDamage;
		return WeaponDamage;
	}
	return 0;
}

bool AWeaponBase::HasAmmo()
{
	if (WeaponData)
	{
		if (CurrentAmmo<1)
		{
			return false;
		}
	}
	return true;
}

void AWeaponBase::ReLoadGun()
{
	if (WeaponData)
	{
		ReLoadTimer = WeaponData->WeaponReloadTime;
		IsReLoading = true;
	}
}
void AWeaponBase::InstantReload()
{
	if (WeaponData)
	{
		ReLoadTimer = WeaponData->WeaponReloadTime;
		IsReLoading = false;
		CurrentAmmo = StartAmmo;
		OnAmmoChanged.Broadcast();
		OnReloadFinished.Broadcast();
	}
}

void AWeaponBase::SetProjectileVelocity(float Delta)
{
	LaunchVelocity += LaunchVelocity * Delta;
	LaunchVelocity = FMath::Clamp(LaunchVelocity,500.f,3000.f);
}




