// Fill out your copyright notice in the Description page of Project Settings.

#include "Player/GP3ShootComponent.h"
#include "AI/EnemyBaseCharacter/GP3_ChargeEnemyCharacter.h"
#include "Player/GP3PlayerPawn.h"
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
				
				InternalCooldownTimer = Owner->Gun->ShootCoolDownTimer;
				ReadyToShoot = true;
				
				// If player has pressed shoot during the past 1-something second, shoot again instantly.
				//if (GetWorld()->GetTimeSeconds() - ShootTimeStamp < ShootBuffer)
				//{
				//	Shoot();
				//}
			}
		}
}

void UGP3ShootComponent::Shoot()
{
	//if (!ReadyToShoot)
	//{
	//	ShootTimeStamp = GetWorld()->GetTimeSeconds();
	//}
	
	if (Owner->Gun->HasAmmo() && !Owner->Gun->IsReLoading && ReadyToShoot)
	{
		InternalCooldownTimer = Owner->Gun->ShootCoolDownTimer;
		ReadyToShoot = false;
		FHitResult Hit = Owner->Gun->Use();
	 	

		GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("Pang pang"));

		if (Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor()))
		{
			if(Hit.GetComponent()->ComponentHasTag("WeakSpot"))//Added a check for the component tag on the Hit.GetComponent
			{
				//DealDamage to AI
				auto Enemy = Cast<AGP3_ChargeEnemyCharacter>(Hit.GetActor());

				if (Enemy->IsCharging)//Check if the enemy is charging bool
				{
					Enemy->TakeGunDamage(Owner->Gun->GetDamageFromGun());
				}				
			}
			
		}
	}
	if (!Owner->Gun->HasAmmo())
	{
		if (!Owner->Gun->IsReLoading)
		{
			ReloadWidget->StartReload();
			Owner->Gun->ReLoadGun();

			// TODO: Move to BeginPlay when possible/subscribe when Gun is set on Owner
			Owner->Gun->OnReloadFinished.AddUniqueDynamic(this, &UGP3ShootComponent::OnReloaded);
		}
		else if (ReloadWidget->DoQuickReload())
		{
			Owner->Gun->InstantReload();
		}
	}
}

void UGP3ShootComponent::Reload()
{
	GEngine->AddOnScreenDebugMessage(0, 5.0f, FColor::Cyan, TEXT("ReLoadar"));
	Owner->Gun->ReLoadGun();
	
}

void UGP3ShootComponent::OnReloaded()
{
	ReloadWidget->EndReload();
}

void UGP3ShootComponent::BeginPlay()
{
	Super::BeginPlay();
	ReloadWidget = Cast<UGP3ReloadWidget>(CreateWidget(GetWorld(), ReloadWidgetClass));
	ReloadWidget->AddToViewport();
}
