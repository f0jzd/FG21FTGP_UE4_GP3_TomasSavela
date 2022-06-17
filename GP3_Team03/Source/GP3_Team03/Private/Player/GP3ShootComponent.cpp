// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3ShootComponent.h"

#include "DrawDebugHelpers.h"
#include "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h"
#include "Components/SplineComponent.h"
#include "Kismet/GameplayStatics.h"
#include "Player/GP3PlayerPawn.h"
#include "Weapons/GunProjectile.h"
#include "Widgets/GP3ReloadWidget.h"

UGP3ShootComponent::UGP3ShootComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
	Owner = Cast<AGP3PlayerPawn, AActor>(GetOwner());
}

void UGP3ShootComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);
		if (!ReadyToShoot)
		{
			InternalCooldownTimer -= DeltaTime;
			
			// If cooldown has run down to 0, player is ready to shoot.
			if (InternalCooldownTimer <= 0.0f)
			{
				InternalCooldownTimer = Gun->ShootCoolDownTimer;
				ReadyToShoot = true;
			}
		}
}

void UGP3ShootComponent::Shoot()
{
	if (Gun->HasAmmo() && !Gun->IsReLoading && ReadyToShoot)
	{
		InternalCooldownTimer = Gun->ShootCoolDownTimer;
		ReadyToShoot = false;
		bCalculateProjectilePath = true;
		Gun->Use();
		
		//GEngine->AddOnScreenDebugMessage(-1, 2.0f, FColor::Green, TEXT("fire gunprojectile"));
		//FVector Start = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation();
		FVector Start = Owner->MeshComp->GetSocketLocation(FName("RightHand_ProjectileSocket"));
		//FRotator Rotator = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraRotation();
		FRotator Rotator = Owner->GetControlRotation();
		//FVector Rotator = FVector(400.f,GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation().Y,GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetCameraLocation().Z);
		//FVector target = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetViewTarget();
		//FVector direction = -(target - Start);
		
		//FRotator targetRot = FRotationMatrix::MakeFromX(Rotator).Rotator();
		//FRotator targetRot = GetWorld()->GetFirstPlayerController()->PlayerCameraManager->GetViewTarget()->GetActorRotation();

		FActorSpawnParameters SpawnParams;
		SpawnParams.SpawnCollisionHandlingOverride = ESpawnActorCollisionHandlingMethod::AlwaysSpawn; // make sure the projectile always spawn
		
		//ASunShaftProjectile* ProjectileInstance = GetWorld()->SpawnActor<ASunShaftProjectile>(Projectile, Start,Rotator,SpawnParams);
		
		FTransform SpawnTransform;
		SpawnTransform.SetComponents(FQuat::MakeFromEuler(Rotator.Euler()),Start, FVector(1,1,1));
		
		AGunProjectile* ProjectileInstance = GetWorld()->SpawnActorDeferred<AGunProjectile>(Gun->Projectile,SpawnTransform);
		ProjectileInstance->OnWeakPointHit.AddDynamic(Owner->DashComp, &UGP3DashComponent::DecreaseDashCooldown);
		ProjectileInstance->InitialSpeed = FMath::Clamp(Gun->LaunchVelocity,500.f,3000.f);
		UGameplayStatics::FinishSpawningActor(ProjectileInstance,SpawnTransform);

		//GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("Pang pang"));

		ProjectileInstance->Damage = Gun->GetDamageFromGun();
		ProjectileInstance->CriticalDamage = Gun->GetCriticalDamageFromGun();



	//if (Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor()))
	//{

	//	//DealDamage to AI
	//	AGP3_ChargeEnemyCharacter* Enemy = Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor());

	//	if(Hit.GetComponent()->ComponentHasTag("WeakSpot"))//Added a check for the component tag on the Hit.GetComponent
	//	{

	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hit weakspot"));
	//		//DealDamage to AI
	//		if (Enemy->IsDebuffed)//Check if the enemy is charging bool
	//		{
	//			Enemy->TakeGunDamage(Gun->GetCriticalDamageFromGun());
	//			return;
	//		}				
	//	}

	//	Enemy->TakeGunDamage(Gun->GetDamageFromGun());
	//	return;
	//	
	//}

	//if (Cast<AGP3_RangedEnemyCharacter>(Hit.GetActor()))//Shooting the ranged enemy
	//{

	//	AGP3_RangedEnemyCharacter* Enemy = Cast<AGP3_RangedEnemyCharacter>(Hit.GetActor());


	//	if(Hit.GetComponent()->ComponentHasTag("WeakSpot"))//Added a check for the component tag on the Hit.GetComponent
	//	{

	//		GEngine->AddOnScreenDebugMessage(-1, 3.0f, FColor::Red, TEXT("Hit weakspot"));
	//		//DealDamage to AI
	//		if (Enemy->IsDebuffed || Enemy->IsCharging)//Check if the enemy is charging bool
	//		{
	//			Enemy->TakeGunDamage(Gun->GetCriticalDamageFromGun());
	//			return;
	//		}
	//		
	//	}
	//	Enemy->TakeGunDamage(Gun->GetDamageFromGun());
	//	return;
	//}
	}
	if (!Gun->HasAmmo())
	{
		if (!Gun->IsReLoading)
		{
			ReloadWidget->StartReload();
			Gun->ReLoadGun();

			// TODO: Move to BeginPlay when possible/subscribe when Gun is set on Owner
			Gun->OnReloadFinished.AddUniqueDynamic(this, &UGP3ShootComponent::OnReloaded);
		}
		else if (ReloadWidget->DoQuickReload())
		{
			Gun->InstantReload();
		}
	}
}

void UGP3ShootComponent::Reload()
{
	//GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("ReLoadar"));
	Gun->ReLoadGun();
}

void UGP3ShootComponent::SetProjectileVelocity(float Delta)
{
	Gun->LaunchVelocity += Gun->LaunchVelocity * Delta;
	Gun->LaunchVelocity = FMath::Clamp(Gun->LaunchVelocity,500.f,3000.f);
}

void UGP3ShootComponent::OnReloaded()
{
	ReloadWidget->EndReload();
}

void UGP3ShootComponent::BeginPlay()
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
			///
			Gun->AttachToComponent(Owner->MeshComp,FAttachmentTransformRules::SnapToTargetIncludingScale,FName("Arm"));
			OnWeaponEquipped.Broadcast();
		}
	}

	ReloadWidget = Cast<UGP3ReloadWidget>(CreateWidget(GetWorld(), ReloadWidgetClass));
	ReloadWidget->AddToViewport();
}
