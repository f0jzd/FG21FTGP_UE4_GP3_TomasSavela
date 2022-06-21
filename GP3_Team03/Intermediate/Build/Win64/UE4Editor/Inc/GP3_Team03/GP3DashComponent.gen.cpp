// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3DashComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3DashComponent() {}
// Cross Module References
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerDashTrail_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCurveFloat_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "OnDashEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execInterruptDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InterruptDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execExtendDashTrail)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExtendDashTrail();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execDecreaseDashCooldown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecreaseDashCooldown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execApplySlopeAxis)
	{
		P_GET_STRUCT(FVector,Z_Param_TargetDestination);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ApplySlopeAxis(Z_Param_TargetDestination);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execHandleDashStates)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HandleDashStates(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execResetDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetDash();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execCalculateMovement)
	{
		P_GET_STRUCT(FVector,Z_Param_Step);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->CalculateMovement(Z_Param_Step);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execReturnInstantVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->ReturnInstantVelocity(Z_Param_DeltaTime);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execSetDirection)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Forward);
		P_GET_PROPERTY(FFloatProperty,Z_Param_Right);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->SetDirection(Z_Param_Forward,Z_Param_Right);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3DashComponent::execDash)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_ForwardInput);
		P_GET_PROPERTY(FFloatProperty,Z_Param_RightInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Dash(Z_Param_ForwardInput,Z_Param_RightInput);
		P_NATIVE_END;
	}
	void UGP3DashComponent::StaticRegisterNativesUGP3DashComponent()
	{
		UClass* Class = UGP3DashComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ApplySlopeAxis", &UGP3DashComponent::execApplySlopeAxis },
			{ "CalculateMovement", &UGP3DashComponent::execCalculateMovement },
			{ "Dash", &UGP3DashComponent::execDash },
			{ "DecreaseDashCooldown", &UGP3DashComponent::execDecreaseDashCooldown },
			{ "ExtendDashTrail", &UGP3DashComponent::execExtendDashTrail },
			{ "HandleDashStates", &UGP3DashComponent::execHandleDashStates },
			{ "InterruptDash", &UGP3DashComponent::execInterruptDash },
			{ "ResetDash", &UGP3DashComponent::execResetDash },
			{ "ReturnInstantVelocity", &UGP3DashComponent::execReturnInstantVelocity },
			{ "SetDirection", &UGP3DashComponent::execSetDirection },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics
	{
		struct GP3DashComponent_eventApplySlopeAxis_Parms
		{
			FVector TargetDestination;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_TargetDestination;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::NewProp_TargetDestination = { "TargetDestination", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventApplySlopeAxis_Parms, TargetDestination), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventApplySlopeAxis_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::NewProp_TargetDestination,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "ApplySlopeAxis", nullptr, nullptr, sizeof(GP3DashComponent_eventApplySlopeAxis_Parms), Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics
	{
		struct GP3DashComponent_eventCalculateMovement_Parms
		{
			FVector Step;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Step;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_Step = { "Step", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateMovement_Parms, Step), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventCalculateMovement_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_Step,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "CalculateMovement", nullptr, nullptr, sizeof(GP3DashComponent_eventCalculateMovement_Parms), Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_CalculateMovement()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_CalculateMovement_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_Dash_Statics
	{
		struct GP3DashComponent_eventDash_Parms
		{
			float ForwardInput;
			float RightInput;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardInput;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightInput;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::NewProp_ForwardInput = { "ForwardInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventDash_Parms, ForwardInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::NewProp_RightInput = { "RightInput", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventDash_Parms, RightInput), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::NewProp_ForwardInput,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::NewProp_RightInput,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "Dash", nullptr, nullptr, sizeof(GP3DashComponent_eventDash_Parms), Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_Dash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_Dash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "DecreaseDashCooldown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "ExtendDashTrail", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics
	{
		struct GP3DashComponent_eventHandleDashStates_Parms
		{
			float DeltaTime;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventHandleDashStates_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::NewProp_DeltaTime,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "HandleDashStates", nullptr, nullptr, sizeof(GP3DashComponent_eventHandleDashStates_Parms), Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_HandleDashStates()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_HandleDashStates_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "InterruptDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_InterruptDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_InterruptDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "ResetDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_ResetDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_ResetDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics
	{
		struct GP3DashComponent_eventReturnInstantVelocity_Parms
		{
			float DeltaTime;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventReturnInstantVelocity_Parms, DeltaTime), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventReturnInstantVelocity_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::NewProp_DeltaTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "ReturnInstantVelocity", nullptr, nullptr, sizeof(GP3DashComponent_eventReturnInstantVelocity_Parms), Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics
	{
		struct GP3DashComponent_eventSetDirection_Parms
		{
			float Forward;
			float Right;
			FVector ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Forward;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Right;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_Forward = { "Forward", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetDirection_Parms, Forward), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_Right = { "Right", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetDirection_Parms, Right), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashComponent_eventSetDirection_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_Forward,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_Right,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashComponent, nullptr, "SetDirection", nullptr, nullptr, sizeof(GP3DashComponent_eventSetDirection_Parms), Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashComponent_SetDirection()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashComponent_SetDirection_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister()
	{
		return UGP3DashComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3DashComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTrail_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_DashTrail;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MaxDashSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_MaxDashSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputBufferSeconds_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputBufferSeconds;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashLength_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DashLength;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InvincibilityGraceTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InvincibilityGraceTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_MovementCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCooldown_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_DashCooldown;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CooldownBonusOnWeakpointHit_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_CooldownBonusOnWeakpointHit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashDamage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCurve_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashCurve;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsDashing_MetaData[];
#endif
		static void NewProp_IsDashing_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsDashing;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashCurveValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashCurveValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DistanceTravelled_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DistanceTravelled;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InternalDashCooldownTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InternalDashCooldownTimer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashInstantVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DashInstantVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_StartPosition_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_StartPosition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Direction;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashMagnitude_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_DashMagnitude;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Owner_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3DashComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3DashComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3DashComponent_ApplySlopeAxis, "ApplySlopeAxis" }, // 1048191767
		{ &Z_Construct_UFunction_UGP3DashComponent_CalculateMovement, "CalculateMovement" }, // 1733077483
		{ &Z_Construct_UFunction_UGP3DashComponent_Dash, "Dash" }, // 497453258
		{ &Z_Construct_UFunction_UGP3DashComponent_DecreaseDashCooldown, "DecreaseDashCooldown" }, // 1229900636
		{ &Z_Construct_UFunction_UGP3DashComponent_ExtendDashTrail, "ExtendDashTrail" }, // 3644365444
		{ &Z_Construct_UFunction_UGP3DashComponent_HandleDashStates, "HandleDashStates" }, // 2856593395
		{ &Z_Construct_UFunction_UGP3DashComponent_InterruptDash, "InterruptDash" }, // 891686106
		{ &Z_Construct_UDelegateFunction_UGP3DashComponent_OnDashEvent__DelegateSignature, "OnDashEvent__DelegateSignature" }, // 1506508943
		{ &Z_Construct_UFunction_UGP3DashComponent_ResetDash, "ResetDash" }, // 781513298
		{ &Z_Construct_UFunction_UGP3DashComponent_ReturnInstantVelocity, "ReturnInstantVelocity" }, // 3303086756
		{ &Z_Construct_UFunction_UGP3DashComponent_SetDirection, "SetDirection" }, // 3729310158
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3DashComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTrail_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTrail = { "DashTrail", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashTrail), Z_Construct_UClass_AGP3PlayerDashTrail_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTrail_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTrail_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed = { "MaxDashSpeed", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, MaxDashSpeed), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InputBufferSeconds_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InputBufferSeconds = { "InputBufferSeconds", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, InputBufferSeconds), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InputBufferSeconds_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InputBufferSeconds_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength = { "DashLength", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashLength), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InvincibilityGraceTime_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InvincibilityGraceTime = { "InvincibilityGraceTime", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, InvincibilityGraceTime), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InvincibilityGraceTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InvincibilityGraceTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MovementCooldown_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MovementCooldown = { "MovementCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, MovementCooldown), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MovementCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MovementCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCooldown_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCooldown = { "DashCooldown", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashCooldown), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCooldown_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCooldown_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_CooldownBonusOnWeakpointHit_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_CooldownBonusOnWeakpointHit = { "CooldownBonusOnWeakpointHit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, CooldownBonusOnWeakpointHit), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_CooldownBonusOnWeakpointHit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_CooldownBonusOnWeakpointHit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashDamage_MetaData[] = {
		{ "Category", "Dash - Config" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashDamage = { "DashDamage", nullptr, (EPropertyFlags)0x0010000000000015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashDamage), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashDamage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData[] = {
		{ "Category", "Dash - Curve" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve = { "DashCurve", nullptr, (EPropertyFlags)0x0010000000010001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashCurve), Z_Construct_UClass_UCurveFloat_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData[] = {
		{ "Category", "GP3DashComponent" },
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_SetBit(void* Obj)
	{
		((UGP3DashComponent*)Obj)->IsDashing = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing = { "IsDashing", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3DashComponent), &Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTime_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTime = { "DashTime", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashTime), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurveValue_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurveValue = { "DashCurveValue", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashCurveValue), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurveValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurveValue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceTravelled_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceTravelled = { "DistanceTravelled", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DistanceTravelled), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceTravelled_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceTravelled_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InternalDashCooldownTimer_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InternalDashCooldownTimer = { "InternalDashCooldownTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, InternalDashCooldownTimer), METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InternalDashCooldownTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InternalDashCooldownTimer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashInstantVelocity_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashInstantVelocity = { "DashInstantVelocity", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashInstantVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashInstantVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashInstantVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_StartPosition_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_StartPosition = { "StartPosition", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, StartPosition), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_StartPosition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_StartPosition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, Direction), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude = { "DashMagnitude", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, DashMagnitude), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3DashComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashComponent, Owner), Z_Construct_UClass_AGP3PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTrail,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MaxDashSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InputBufferSeconds,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashLength,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InvincibilityGraceTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_MovementCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCooldown,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_CooldownBonusOnWeakpointHit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashDamage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurve,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_IsDashing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashCurveValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DistanceTravelled,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_InternalDashCooldownTimer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashInstantVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_StartPosition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Direction,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_DashMagnitude,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashComponent_Statics::NewProp_Owner,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3DashComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3DashComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3DashComponent_Statics::ClassParams = {
		&UGP3DashComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3DashComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3DashComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3DashComponent, 1762766230);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3DashComponent>()
	{
		return UGP3DashComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3DashComponent(Z_Construct_UClass_UGP3DashComponent, &UGP3DashComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3DashComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3DashComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
