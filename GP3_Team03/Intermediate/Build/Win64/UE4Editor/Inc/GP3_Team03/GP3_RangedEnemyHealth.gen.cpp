// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/AI_Widgets/GP3_RangedEnemyHealth.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_RangedEnemyHealth() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_RangedEnemyHealth_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3_RangedEnemyHealth();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3_RangedEnemyHealth::execUpdateHealth)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Health);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth(Z_Param_Health);
		P_NATIVE_END;
	}
	static FName NAME_UGP3_RangedEnemyHealth_RangedEnemyHealth = FName(TEXT("RangedEnemyHealth"));
	UTextBlock* UGP3_RangedEnemyHealth::RangedEnemyHealth()
	{
		GP3_RangedEnemyHealth_eventRangedEnemyHealth_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3_RangedEnemyHealth_RangedEnemyHealth),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3_RangedEnemyHealth::StaticRegisterNativesUGP3_RangedEnemyHealth()
	{
		UClass* Class = UGP3_RangedEnemyHealth::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHealth", &UGP3_RangedEnemyHealth::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3_RangedEnemyHealth_eventRangedEnemyHealth_Parms, ReturnValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_RangedEnemyHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3_RangedEnemyHealth, nullptr, "RangedEnemyHealth", nullptr, nullptr, sizeof(GP3_RangedEnemyHealth_eventRangedEnemyHealth_Parms), Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics
	{
		struct GP3_RangedEnemyHealth_eventUpdateHealth_Parms
		{
			float Health;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3_RangedEnemyHealth_eventUpdateHealth_Parms, Health), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::NewProp_Health,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_RangedEnemyHealth.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3_RangedEnemyHealth, nullptr, "UpdateHealth", nullptr, nullptr, sizeof(GP3_RangedEnemyHealth_eventUpdateHealth_Parms), Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3_RangedEnemyHealth_NoRegister()
	{
		return UGP3_RangedEnemyHealth::StaticClass();
	}
	struct Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3_RangedEnemyHealth_RangedEnemyHealth, "RangedEnemyHealth" }, // 1396484677
		{ &Z_Construct_UFunction_UGP3_RangedEnemyHealth_UpdateHealth, "UpdateHealth" }, // 2454566823
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n *\n */" },
		{ "IncludePath", "AI/AI_Widgets/GP3_RangedEnemyHealth.h" },
		{ "ModuleRelativePath", "Public/AI/AI_Widgets/GP3_RangedEnemyHealth.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3_RangedEnemyHealth>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::ClassParams = {
		&UGP3_RangedEnemyHealth::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3_RangedEnemyHealth()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3_RangedEnemyHealth_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3_RangedEnemyHealth, 3042477827);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3_RangedEnemyHealth>()
	{
		return UGP3_RangedEnemyHealth::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3_RangedEnemyHealth(Z_Construct_UClass_UGP3_RangedEnemyHealth, &UGP3_RangedEnemyHealth::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3_RangedEnemyHealth"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3_RangedEnemyHealth);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
