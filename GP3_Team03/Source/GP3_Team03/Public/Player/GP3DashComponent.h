// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GP3DashComponent.generated.h"

class AGP3PlayerPawn;
class AGP3PlayerDashTrail;

UCLASS()
class GP3_TEAM03_API UGP3DashComponent : public UActorComponent
{
	GENERATED_BODY()

	DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnDashEvent);
public:
	UGP3DashComponent();

	void BeginPlay() override;
	
	void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	
	UFUNCTION(BlueprintCallable)
	void Dash(float ForwardInput, float RightInput);

	UFUNCTION()
	FVector SetDirection(float Forward, float Right);

	UFUNCTION()
	FVector ReturnInstantVelocity(float DeltaTime);

	UFUNCTION()
	FVector CalculateMovement(FVector Step);

	UFUNCTION()
	void ResetDash();

	UFUNCTION()
	void HandleDashStates(float DeltaTime);

	UFUNCTION()
	FVector ApplySlopeAxis(FVector TargetDestination);
	
	void ApplyWallSliding(FHitResult* HitResult, FVector InstantVelocity);

	UFUNCTION()
	void DecreaseDashCooldown();

	UFUNCTION()
	void ExtendDashTrail();

	UFUNCTION()
	void InterruptDash();
	
	// bool IsUpSlopeWalkable(FVector TargetDestination, FHitResult* Hit);
	
	FVector ApplySlopeSliding(FVector TargetDestination, FHitResult* Hit);
	
	FVector ApplyDepenetration(FVector Step, FHitResult* HitResult);

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	TSubclassOf<AGP3PlayerDashTrail> DashTrail;
	
	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int MaxDashSpeed = 1500.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float InputBufferSeconds = 0.3f;
	
	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int DashLength = 200.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float InvincibilityGraceTime = 2.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float MovementCooldown = 0.5f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	int DashCooldown = 5.0f;

	UPROPERTY(Category="Dash - Config", EditAnywhere)
	float CooldownBonusOnWeakpointHit = 0.5f;

	UPROPERTY(Category = "Dash - Config", EditAnywhere,BlueprintReadOnly)
	float DashDamage = 0.5f;

	UPROPERTY(Category="Dash - Curve", EditDefaultsOnly)
	UCurveFloat* DashCurve = NULL;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	FVector DashInstantVelocity;
	
	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	float DashTime;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	float DashCurveValue;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	float DistanceTravelled;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	FVector StartPosition;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	FVector Direction;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	FVector DashMagnitude;
	
	UPROPERTY()
	AGP3PlayerPawn* Owner = nullptr;

	bool ReadyToDash = true;

	bool ObstacleMet = false;

	UPROPERTY(BlueprintReadOnly)
	bool IsDashing = false;

	bool IsInGracePeriod = false;

	bool IsInMoveCooldown = false;

	int SplinePointIndex = 0;

	int ObstacleCounter = 0;

	float InternalMoveCooldownTimer = 0.0f;

	float InternalGracePeriodTimer = 0.0f;

	float DashBufferTimestamp = 0.0f;

	UPROPERTY(Category="Dash - Debug Info", VisibleAnywhere)
	float InternalDashCooldownTimer = 0.0f;

	FVector DashBufferInput = {0.0f, 0.0f, 0.0f};

	FRotator DashRotation;

	FOnDashEvent OnDash;

	AGP3PlayerDashTrail* CurrentDashTrail;
	FActorSpawnParameters SpawnParams;
};