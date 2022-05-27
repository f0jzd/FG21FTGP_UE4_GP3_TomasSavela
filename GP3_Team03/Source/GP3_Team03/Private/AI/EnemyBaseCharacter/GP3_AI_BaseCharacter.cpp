#include "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"

#include <string>

#include "DrawDebugHelpers.h"




void AGP3_AI_BaseCharacter::OnOverlapBegin(UPrimitiveComponent* OverlappedComp, AActor* OtherActor,
	UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{

}

AGP3_AI_BaseCharacter::AGP3_AI_BaseCharacter()
{
	HitboxCheck = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("HitBoxCheck"));

	HitboxCheck->SetupAttachment(RootComponent);

	HitboxCheck->OnComponentBeginOverlap.AddDynamic(this, &AGP3_AI_BaseCharacter::OnOverlapBegin);




	

	PrimaryActorTick.bCanEverTick = true;
	

}

void AGP3_AI_BaseCharacter::Tick(float DeltaSeconds)
{
	Super::Tick(DeltaSeconds);
	

	/*FHitResult HitRes;
	FVector Start = GetActorLocation();
	FVector End = GetActorLocation() + (GetActorForwardVector() * CollisionCheckDistance);

	GetWorld()->LineTraceSingleByChannel(HitRes, Start, End, ECC_Visibility);
	DrawDebugLine(GetWorld(), Start, End, FColor::White);


	if (HitRes.bBlockingHit)
	{
		HitObjectDelegate.Broadcast(HitRes);
	}*/



}

void AGP3_AI_BaseCharacter::TakeGunDamage_Implementation(float GunDamage)
{



	GEngine->AddOnScreenDebugMessage(INDEX_NONE, 5.0f,FColor::Red, TEXT("TAKE DAMAGE OOF"));


	Health -= GunDamage;

	OnTookGunDamage.Broadcast();


	if (Health <= 0)
	{
		Destroy();
	}




}



