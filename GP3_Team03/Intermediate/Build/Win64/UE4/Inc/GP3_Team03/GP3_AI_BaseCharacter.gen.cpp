// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_AI_BaseCharacter() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter();
	ENGINE_API UClass* Z_Construct_UClass_ACharacter();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	DEFINE_FUNCTION(AGP3_AI_BaseCharacter::execTakeGunDamage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TakeGunDamage_Implementation();
		P_NATIVE_END;
	}
	static FName NAME_AGP3_AI_BaseCharacter_TakeGunDamage = FName(TEXT("TakeGunDamage"));
	void AGP3_AI_BaseCharacter::TakeGunDamage()
	{
		ProcessEvent(FindFunctionChecked(NAME_AGP3_AI_BaseCharacter_TakeGunDamage),NULL);
	}
	void AGP3_AI_BaseCharacter::StaticRegisterNativesAGP3_AI_BaseCharacter()
	{
		UClass* Class = AGP3_AI_BaseCharacter::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "TakeGunDamage", &AGP3_AI_BaseCharacter::execTakeGunDamage },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3_AI_BaseCharacter, nullptr, "TakeGunDamage", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister()
	{
		return AGP3_AI_BaseCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Health_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Health;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ACharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGP3_AI_BaseCharacter_TakeGunDamage, "TakeGunDamage" }, // 3914504233
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::NewProp_Health_MetaData[] = {
		{ "Category", "GP3_AI_BaseCharacter" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_AI_BaseCharacter.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::NewProp_Health = { "Health", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_AI_BaseCharacter, Health), METADATA_PARAMS(Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::NewProp_Health_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::NewProp_Health_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::NewProp_Health,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_AI_BaseCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::ClassParams = {
		&AGP3_AI_BaseCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_AI_BaseCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_AI_BaseCharacter, 2560513998);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_AI_BaseCharacter>()
	{
		return AGP3_AI_BaseCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_AI_BaseCharacter(Z_Construct_UClass_AGP3_AI_BaseCharacter, &AGP3_AI_BaseCharacter::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_AI_BaseCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_AI_BaseCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
