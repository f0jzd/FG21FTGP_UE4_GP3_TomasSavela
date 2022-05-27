// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/PlayerPawnMovementComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerPawnMovementComponent() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UPlayerPawnMovementComponent_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UPlayerPawnMovementComponent();
	ENGINE_API UClass* Z_Construct_UClass_UPawnMovementComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	DEFINE_FUNCTION(UPlayerPawnMovementComponent::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerPawnMovementComponent::execJump)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Jump();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UPlayerPawnMovementComponent::execMove)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_InRightInputValue);
		P_GET_PROPERTY(FFloatProperty,Z_Param_InForwardInputValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Move(Z_Param_InRightInputValue,Z_Param_InForwardInputValue);
		P_NATIVE_END;
	}
	void UPlayerPawnMovementComponent::StaticRegisterNativesUPlayerPawnMovementComponent()
	{
		UClass* Class = UPlayerPawnMovementComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Jump", &UPlayerPawnMovementComponent::execJump },
			{ "Move", &UPlayerPawnMovementComponent::execMove },
			{ "Shoot", &UPlayerPawnMovementComponent::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPawnMovementComponent, nullptr, "Jump", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics
	{
		struct PlayerPawnMovementComponent_eventMove_Parms
		{
			float InRightInputValue;
			float InForwardInputValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InRightInputValue;
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InForwardInputValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::NewProp_InRightInputValue = { "InRightInputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnMovementComponent_eventMove_Parms, InRightInputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::NewProp_InForwardInputValue = { "InForwardInputValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(PlayerPawnMovementComponent_eventMove_Parms, InForwardInputValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::NewProp_InRightInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::NewProp_InForwardInputValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPawnMovementComponent, nullptr, "Move", nullptr, nullptr, sizeof(PlayerPawnMovementComponent_eventMove_Parms), Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPawnMovementComponent_Move()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPawnMovementComponent_Move_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UPlayerPawnMovementComponent, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UPlayerPawnMovementComponent_NoRegister()
	{
		return UPlayerPawnMovementComponent::StaticClass();
	}
	struct Z_Construct_UClass_UPlayerPawnMovementComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightSpeed;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpForce_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpForce;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsGrounded_MetaData[];
#endif
		static void NewProp_IsGrounded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsGrounded;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CompVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_CompVelocity;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UPawnMovementComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UPlayerPawnMovementComponent_Jump, "Jump" }, // 2708914487
		{ &Z_Construct_UFunction_UPlayerPawnMovementComponent_Move, "Move" }, // 292470421
		{ &Z_Construct_UFunction_UPlayerPawnMovementComponent_Shoot, "Shoot" }, // 1209301692
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/PlayerPawnMovementComponent.h" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_ForwardSpeed_MetaData[] = {
		{ "Category", "PlayerPawnMovementComponent" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_ForwardSpeed = { "ForwardSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnMovementComponent, ForwardSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_ForwardSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_ForwardSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_RightSpeed_MetaData[] = {
		{ "Category", "PlayerPawnMovementComponent" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_RightSpeed = { "RightSpeed", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnMovementComponent, RightSpeed), METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_RightSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_RightSpeed_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_JumpForce_MetaData[] = {
		{ "Category", "PlayerPawnMovementComponent" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_JumpForce = { "JumpForce", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnMovementComponent, JumpForce), METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_JumpForce_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_JumpForce_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded_MetaData[] = {
		{ "Category", "PlayerPawnMovementComponent" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	void Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded_SetBit(void* Obj)
	{
		((UPlayerPawnMovementComponent*)Obj)->IsGrounded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded = { "IsGrounded", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayerPawnMovementComponent), &Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_CompVelocity_MetaData[] = {
		{ "Category", "PlayerPawnMovementComponent" },
		{ "ModuleRelativePath", "Public/Player/PlayerPawnMovementComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_CompVelocity = { "CompVelocity", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayerPawnMovementComponent, CompVelocity), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_CompVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_CompVelocity_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_ForwardSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_RightSpeed,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_JumpForce,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_IsGrounded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::NewProp_CompVelocity,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayerPawnMovementComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::ClassParams = {
		&UPlayerPawnMovementComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayerPawnMovementComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayerPawnMovementComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayerPawnMovementComponent, 1406185059);
	template<> GP3_TEAM03_API UClass* StaticClass<UPlayerPawnMovementComponent>()
	{
		return UPlayerPawnMovementComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayerPawnMovementComponent(Z_Construct_UClass_UPlayerPawnMovementComponent, &UPlayerPawnMovementComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UPlayerPawnMovementComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayerPawnMovementComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
