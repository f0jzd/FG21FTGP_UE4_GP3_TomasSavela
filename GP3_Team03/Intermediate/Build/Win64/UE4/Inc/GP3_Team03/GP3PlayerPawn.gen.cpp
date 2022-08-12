// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3PlayerPawn.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerPawn() {}
// Cross Module References
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ShootComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DodgeComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3GameInstance_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASunShaftProjectile_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_ChargeTrail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UAnimSequence_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "TookDamageEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execTakeExplosiveDamage)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeExplosiveDamage(Z_Param_Damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execOnTakeDamage)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlappedComp);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComp);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_bFromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnTakeDamage(Z_Param_OverlappedComp,Z_Param_OtherActor,Z_Param_OtherComp,Z_Param_OtherBodyIndex,Z_Param_bFromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execResetDeathCounter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDeathCounter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execPlayerDie)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayerDie();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execAddPlayerHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddPlayerHealth(Z_Param_Amount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AGP3PlayerPawn::execRemovePlayerHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Amount);
		P_GET_UBOOL(Z_Param_bBroadcast);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemovePlayerHealth(Z_Param_Amount,Z_Param_bBroadcast);
		P_NATIVE_END;
	}
	static FName NAME_AGP3PlayerPawn_OnDashFinish = FName(TEXT("OnDashFinish"));
	void AGP3PlayerPawn::OnDashFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnDashFinish),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnDashStart = FName(TEXT("OnDashStart"));
	void AGP3PlayerPawn::OnDashStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnDashStart),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnDeath = FName(TEXT("OnDeath"));
	void AGP3PlayerPawn::OnDeath()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnDeath),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnForwardInput = FName(TEXT("OnForwardInput"));
	void AGP3PlayerPawn::OnForwardInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnForwardInput),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnMoveFinish = FName(TEXT("OnMoveFinish"));
	void AGP3PlayerPawn::OnMoveFinish()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnMoveFinish),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnMoveStart = FName(TEXT("OnMoveStart"));
	void AGP3PlayerPawn::OnMoveStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnMoveStart),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnRightInput = FName(TEXT("OnRightInput"));
	void AGP3PlayerPawn::OnRightInput()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnRightInput),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnShoot = FName(TEXT("OnShoot"));
	void AGP3PlayerPawn::OnShoot()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnShoot),NULL);
	}
	static FName NAME_AGP3PlayerPawn_OnTookDamage = FName(TEXT("OnTookDamage"));
	void AGP3PlayerPawn::OnTookDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerPawn_OnTookDamage),NULL);
	}
	void AGP3PlayerPawn::StaticRegisterNativesAGP3PlayerPawn()
	{
		UClass* Class = AGP3PlayerPawn::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddPlayerHealth", &AGP3PlayerPawn::execAddPlayerHealth },
			{ "OnTakeDamage", &AGP3PlayerPawn::execOnTakeDamage },
			{ "PlayerDie", &AGP3PlayerPawn::execPlayerDie },
			{ "RemovePlayerHealth", &AGP3PlayerPawn::execRemovePlayerHealth },
			{ "ResetDeathCounter", &AGP3PlayerPawn::execResetDeathCounter },
			{ "TakeExplosiveDamage", &AGP3PlayerPawn::execTakeExplosiveDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics
	{
		struct GP3PlayerPawn_eventAddPlayerHealth_Parms
		{
			float Amount;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventAddPlayerHealth_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::NewProp_Amount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Health" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "AddPlayerHealth", nullptr, nullptr, sizeof(GP3PlayerPawn_eventAddPlayerHealth_Parms), Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnDashFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnDashStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnDeath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnDeath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnDeath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnForwardInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnMoveFinish", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnMoveStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnRightInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnShoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnShoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnShoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics
	{
		struct GP3PlayerPawn_eventOnTakeDamage_Parms
		{
			UPrimitiveComponent* OverlappedComp;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComp;
			int32 OtherBodyIndex;
			bool bFromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlappedComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlappedComp;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComp;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_bFromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp = { "OverlappedComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OverlappedComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp = { "OtherComp", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherComp), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep_SetBit(void* Obj)
	{
		((GP3PlayerPawn_eventOnTakeDamage_Parms*)Obj)->bFromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep = { "bFromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3PlayerPawn_eventOnTakeDamage_Parms), &Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventOnTakeDamage_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OverlappedComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_bFromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnTakeDamage", nullptr, nullptr, sizeof(GP3PlayerPawn_eventOnTakeDamage_Parms), Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "OnTookDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Health" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "PlayerDie", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics
	{
		struct GP3PlayerPawn_eventRemovePlayerHealth_Parms
		{
			float Amount;
			bool bBroadcast;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Amount;
		static void NewProp_bBroadcast_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bBroadcast;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_Amount = { "Amount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventRemovePlayerHealth_Parms, Amount), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_bBroadcast_SetBit(void* Obj)
	{
		((GP3PlayerPawn_eventRemovePlayerHealth_Parms*)Obj)->bBroadcast = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_bBroadcast = { "bBroadcast", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(GP3PlayerPawn_eventRemovePlayerHealth_Parms), &Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_bBroadcast_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_Amount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::NewProp_bBroadcast,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::Function_MetaDataParams[] = {
		{ "Category", "Player Health" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "RemovePlayerHealth", nullptr, nullptr, sizeof(GP3PlayerPawn_eventRemovePlayerHealth_Parms), Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "ResetDeathCounter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x44020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics
	{
		struct GP3PlayerPawn_eventTakeExplosiveDamage_Parms
		{
			float Damage;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerPawn_eventTakeExplosiveDamage_Parms, Damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::NewProp_Damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerPawn, nullptr, "TakeExplosiveDamage", nullptr, nullptr, sizeof(GP3PlayerPawn_eventTakeExplosiveDamage_Parms), Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister()
	{
		return AGP3PlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGP3PlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WASDMovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_WASDMovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ShootComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DodgeComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DodgeComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartProjectileLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_StartProjectileLocation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SplinePath_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SplinePath;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DefaultTrailDamageTimeDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DefaultTrailDamageTimeDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerMaxHealth_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_PlayerMaxHealth;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_LaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_LaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MinLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MinLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxLaunchVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MaxLaunchVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProjectileRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ProjectileRadius;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bDebugPlayerCantDie_MetaData[];
#endif
		static void NewProp_bDebugPlayerCantDie_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDebugPlayerCantDie;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsInvincible_MetaData[];
#endif
		static void NewProp_bIsInvincible_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsInvincible;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsDashing_MetaData[];
#endif
		static void NewProp_bIsDashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsDashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsUsingGamepad_MetaData[];
#endif
		static void NewProp_bIsUsingGamepad_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsUsingGamepad;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TookDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_TookDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_GameInstance_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_GameInstance;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Projectile_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_Projectile;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ChargeTrailRef_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ChargeTrailRef;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerController_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerController;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathDelay_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeathDelay;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bPlayerAlive_MetaData[];
#endif
		static void NewProp_bPlayerAlive_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bPlayerAlive;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DeathAnimation_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DeathAnimation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3PlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGP3PlayerPawn_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGP3PlayerPawn_AddPlayerHealth, "AddPlayerHealth" }, // 2434429276
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnDashFinish, "OnDashFinish" }, // 3440252721
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnDashStart, "OnDashStart" }, // 2666297814
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnDeath, "OnDeath" }, // 345460625
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnForwardInput, "OnForwardInput" }, // 3781622372
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnMoveFinish, "OnMoveFinish" }, // 2490665999
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnMoveStart, "OnMoveStart" }, // 2040627938
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnRightInput, "OnRightInput" }, // 1693248411
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnShoot, "OnShoot" }, // 1001439153
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnTakeDamage, "OnTakeDamage" }, // 3395765627
		{ &Z_Construct_UFunction_AGP3PlayerPawn_OnTookDamage, "OnTookDamage" }, // 2057243548
		{ &Z_Construct_UFunction_AGP3PlayerPawn_PlayerDie, "PlayerDie" }, // 2480501349
		{ &Z_Construct_UFunction_AGP3PlayerPawn_RemovePlayerHealth, "RemovePlayerHealth" }, // 3591378610
		{ &Z_Construct_UFunction_AGP3PlayerPawn_ResetDeathCounter, "ResetDeathCounter" }, // 2086647314
		{ &Z_Construct_UFunction_AGP3PlayerPawn_TakeExplosiveDamage, "TakeExplosiveDamage" }, // 4042139414
		{ &Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature, "TookDamageEvent__DelegateSignature" }, // 3465460693
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GP3PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp = { "WASDMovementComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, WASDMovementComp), Z_Construct_UClass_UGP3WASDMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp = { "ShootComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ShootComp), Z_Construct_UClass_UGP3ShootComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp = { "DashComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DashComp), Z_Construct_UClass_UGP3DashComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DodgeComp_MetaData[] = {
		{ "Category", "Custom Components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DodgeComp = { "DodgeComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DodgeComp), Z_Construct_UClass_UGP3DodgeComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DodgeComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DodgeComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x001000000009001d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, SpringArmComp), Z_Construct_UClass_UGP3PlayerSpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_StartProjectileLocation_MetaData[] = {
		{ "Category", "Built in components" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_StartProjectileLocation = { "StartProjectileLocation", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, StartProjectileLocation), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_StartProjectileLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_StartProjectileLocation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SplinePath_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "GP3PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SplinePath = { "SplinePath", nullptr, (EPropertyFlags)0x00100000000b000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, SplinePath), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SplinePath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SplinePath_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DefaultTrailDamageTimeDelay_MetaData[] = {
		{ "Category", "Player Values" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DefaultTrailDamageTimeDelay = { "DefaultTrailDamageTimeDelay", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DefaultTrailDamageTimeDelay), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DefaultTrailDamageTimeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DefaultTrailDamageTimeDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData[] = {
		{ "Category", "Player Values" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth = { "PlayerHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, PlayerHealth), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerMaxHealth_MetaData[] = {
		{ "Category", "Player Values" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerMaxHealth = { "PlayerMaxHealth", nullptr, (EPropertyFlags)0x0010000000010005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, PlayerMaxHealth), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerMaxHealth_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerMaxHealth_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue = { "RightInputValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, RightInputValue), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue = { "ForwardInputValue", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ForwardInputValue), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_LaunchVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_LaunchVelocity = { "LaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, LaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_LaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_LaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MinLaunchVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MinLaunchVelocity = { "MinLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MinLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MinLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MinLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MaxLaunchVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MaxLaunchVelocity = { "MaxLaunchVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MaxLaunchVelocity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MaxLaunchVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MaxLaunchVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ProjectileRadius_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ProjectileRadius = { "ProjectileRadius", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ProjectileRadius), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ProjectileRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ProjectileRadius_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie_SetBit(void* Obj)
	{
		((AGP3PlayerPawn*)Obj)->bDebugPlayerCantDie = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie = { "bDebugPlayerCantDie", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3PlayerPawn), &Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible_SetBit(void* Obj)
	{
		((AGP3PlayerPawn*)Obj)->bIsInvincible = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible = { "bIsInvincible", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3PlayerPawn), &Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing_SetBit(void* Obj)
	{
		((AGP3PlayerPawn*)Obj)->bIsDashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing = { "bIsDashing", nullptr, (EPropertyFlags)0x0010000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3PlayerPawn), &Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad_SetBit(void* Obj)
	{
		((AGP3PlayerPawn*)Obj)->bIsUsingGamepad = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad = { "bIsUsingGamepad", nullptr, (EPropertyFlags)0x0010000000020005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3PlayerPawn), &Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage = { "TookDamage", nullptr, (EPropertyFlags)0x0010100010080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, TookDamage), Z_Construct_UDelegateFunction_AGP3PlayerPawn_TookDamageEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_GameInstance_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_GameInstance = { "GameInstance", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, GameInstance), Z_Construct_UClass_UGP3GameInstance_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_GameInstance_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_GameInstance_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Projectile_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Projectile = { "Projectile", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, Projectile), Z_Construct_UClass_ASunShaftProjectile_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Projectile_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Projectile_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ChargeTrailRef_MetaData[] = {
		{ "Comment", "//\n" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ChargeTrailRef = { "ChargeTrailRef", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, ChargeTrailRef), Z_Construct_UClass_AGP3_ChargeTrail_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ChargeTrailRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ChargeTrailRef_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerController_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerController = { "PlayerController", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, PlayerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerController_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathDelay_MetaData[] = {
		{ "Category", "Player Death" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathDelay = { "DeathDelay", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DeathDelay), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathDelay_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	void Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive_SetBit(void* Obj)
	{
		((AGP3PlayerPawn*)Obj)->bPlayerAlive = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive = { "bPlayerAlive", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3PlayerPawn), &Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathAnimation_MetaData[] = {
		{ "Category", "Player Death" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathAnimation = { "DeathAnimation", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, DeathAnimation), Z_Construct_UClass_UAnimSequence_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathAnimation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WASDMovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ShootComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DashComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DodgeComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CapsuleComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_StartProjectileLocation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SplinePath,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DefaultTrailDamageTimeDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerMaxHealth,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_LaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MinLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MaxLaunchVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ProjectileRadius,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bDebugPlayerCantDie,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsInvincible,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsDashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bIsUsingGamepad,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_TookDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_GameInstance,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Projectile,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ChargeTrailRef,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_PlayerController,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathDelay,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_bPlayerAlive,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_DeathAnimation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3PlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3PlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3PlayerPawn_Statics::ClassParams = {
		&AGP3PlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3PlayerPawn()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3PlayerPawn_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3PlayerPawn, 735792553);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3PlayerPawn>()
	{
		return AGP3PlayerPawn::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3PlayerPawn(Z_Construct_UClass_AGP3PlayerPawn, &AGP3PlayerPawn::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3PlayerPawn"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3PlayerPawn);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
