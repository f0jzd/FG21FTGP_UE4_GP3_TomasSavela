// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_RangedEnemyCharacter() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_RangedEnemyCharacter_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_RangedEnemyCharacter();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void AGP3_RangedEnemyCharacter::StaticRegisterNativesAGP3_RangedEnemyCharacter()
	{
	}
	UClass* Z_Construct_UClass_AGP3_RangedEnemyCharacter_NoRegister()
	{
		return AGP3_RangedEnemyCharacter::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_IsCharging_MetaData[];
#endif
		static void NewProp_IsCharging_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_IsCharging;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGP3_AI_BaseCharacter,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging_MetaData[] = {
		{ "Category", "GP3_RangedEnemyCharacter" },
		{ "ModuleRelativePath", "Public/AI/EnemyBaseCharacter/GP3_RangedEnemyCharacter.h" },
	};
#endif
	void Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging_SetBit(void* Obj)
	{
		((AGP3_RangedEnemyCharacter*)Obj)->IsCharging = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging = { "IsCharging", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGP3_RangedEnemyCharacter), &Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::NewProp_IsCharging,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_RangedEnemyCharacter>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::ClassParams = {
		&AGP3_RangedEnemyCharacter::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_RangedEnemyCharacter()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_RangedEnemyCharacter_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_RangedEnemyCharacter, 1609070397);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_RangedEnemyCharacter>()
	{
		return AGP3_RangedEnemyCharacter::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_RangedEnemyCharacter(Z_Construct_UClass_AGP3_RangedEnemyCharacter, &AGP3_RangedEnemyCharacter::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_RangedEnemyCharacter"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_RangedEnemyCharacter);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
