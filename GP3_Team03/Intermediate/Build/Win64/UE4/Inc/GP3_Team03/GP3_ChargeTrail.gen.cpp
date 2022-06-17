// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/GP3_ChargeTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_ChargeTrail() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_ChargeTrail_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_ChargeTrail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	void AGP3_ChargeTrail::StaticRegisterNativesAGP3_ChargeTrail()
	{
	}
	UClass* Z_Construct_UClass_AGP3_ChargeTrail_NoRegister()
	{
		return AGP3_ChargeTrail::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_ChargeTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_TrailMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashTrailDuration_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DashTrailDuration;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailDamage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailDamage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_ChargeTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeTrail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GP3_ChargeTrail.h" },
		{ "ModuleRelativePath", "Public/AI/GP3_ChargeTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailMesh_MetaData[] = {
		{ "Category", "GP3_ChargeTrail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/GP3_ChargeTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailMesh = { "TrailMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_ChargeTrail, TrailMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_DashTrailDuration_MetaData[] = {
		{ "Category", "GP3_ChargeTrail" },
		{ "ModuleRelativePath", "Public/AI/GP3_ChargeTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_DashTrailDuration = { "DashTrailDuration", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_ChargeTrail, DashTrailDuration), METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_DashTrailDuration_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_DashTrailDuration_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailDamage_MetaData[] = {
		{ "Category", "GP3_ChargeTrail" },
		{ "ModuleRelativePath", "Public/AI/GP3_ChargeTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailDamage = { "TrailDamage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_ChargeTrail, TrailDamage), METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailDamage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailDamage_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3_ChargeTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_DashTrailDuration,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_ChargeTrail_Statics::NewProp_TrailDamage,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_ChargeTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_ChargeTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_ChargeTrail_Statics::ClassParams = {
		&AGP3_ChargeTrail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3_ChargeTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeTrail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_ChargeTrail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_ChargeTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_ChargeTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_ChargeTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_ChargeTrail, 3171704225);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_ChargeTrail>()
	{
		return AGP3_ChargeTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_ChargeTrail(Z_Construct_UClass_AGP3_ChargeTrail, &AGP3_ChargeTrail::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_ChargeTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_ChargeTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
