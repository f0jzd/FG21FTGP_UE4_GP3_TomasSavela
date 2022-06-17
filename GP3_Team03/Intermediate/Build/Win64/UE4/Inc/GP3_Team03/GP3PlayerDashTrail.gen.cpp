// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3PlayerDashTrail.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerDashTrail() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerDashTrail_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerDashTrail();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_USplineMeshComponent_NoRegister();
// End Cross Module References
	void AGP3PlayerDashTrail::StaticRegisterNativesAGP3PlayerDashTrail()
	{
	}
	UClass* Z_Construct_UClass_AGP3PlayerDashTrail_NoRegister()
	{
		return AGP3PlayerDashTrail::StaticClass();
	}
	struct Z_Construct_UClass_AGP3PlayerDashTrail_Statics
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
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_TrailLifetime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_TrailLifetime;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3PlayerDashTrail_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3PlayerDashTrail.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailMesh_MetaData[] = {
		{ "Category", "GP3PlayerDashTrail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailMesh = { "TrailMesh", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerDashTrail, TrailMesh), Z_Construct_UClass_USplineMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData[] = {
		{ "Category", "GP3PlayerDashTrail" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime = { "TrailLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerDashTrail, TrailLifetime), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3PlayerDashTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3PlayerDashTrail_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3PlayerDashTrail>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3PlayerDashTrail_Statics::ClassParams = {
		&AGP3PlayerDashTrail::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3PlayerDashTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3PlayerDashTrail()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3PlayerDashTrail_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3PlayerDashTrail, 1742530273);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3PlayerDashTrail>()
	{
		return AGP3PlayerDashTrail::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3PlayerDashTrail(Z_Construct_UClass_AGP3PlayerDashTrail, &AGP3PlayerDashTrail::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3PlayerDashTrail"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3PlayerDashTrail);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
