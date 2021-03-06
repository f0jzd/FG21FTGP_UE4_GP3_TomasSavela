// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/GP3_AIBullet.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3_AIBullet() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AIBullet_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AIBullet();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void AGP3_AIBullet::StaticRegisterNativesAGP3_AIBullet()
	{
	}
	UClass* Z_Construct_UClass_AGP3_AIBullet_NoRegister()
	{
		return AGP3_AIBullet::StaticClass();
	}
	struct Z_Construct_UClass_AGP3_AIBullet_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_BulletMesh_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_BulletMesh;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Damage_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Damage;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ExplosionRadius_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ExplosionRadius;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3_AIBullet_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AIBullet_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "AI/GP3_AIBullet.h" },
		{ "ModuleRelativePath", "Public/AI/GP3_AIBullet.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_BulletMesh_MetaData[] = {
		{ "Category", "GP3_AIBullet" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/AI/GP3_AIBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_BulletMesh = { "BulletMesh", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_AIBullet, BulletMesh), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_BulletMesh_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_BulletMesh_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_Damage_MetaData[] = {
		{ "Category", "AI - AOE Values" },
		{ "ModuleRelativePath", "Public/AI/GP3_AIBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_Damage = { "Damage", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_AIBullet, Damage), METADATA_PARAMS(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_Damage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_Damage_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_ExplosionRadius_MetaData[] = {
		{ "Category", "AI - AOE Values" },
		{ "ModuleRelativePath", "Public/AI/GP3_AIBullet.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_ExplosionRadius = { "ExplosionRadius", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3_AIBullet, ExplosionRadius), METADATA_PARAMS(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_ExplosionRadius_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_ExplosionRadius_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3_AIBullet_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_BulletMesh,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_Damage,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3_AIBullet_Statics::NewProp_ExplosionRadius,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3_AIBullet_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3_AIBullet>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3_AIBullet_Statics::ClassParams = {
		&AGP3_AIBullet::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3_AIBullet_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AIBullet_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGP3_AIBullet_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3_AIBullet_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGP3_AIBullet()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGP3_AIBullet_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGP3_AIBullet, 4137353263);
	template<> GP3_TEAM03_API UClass* StaticClass<AGP3_AIBullet>()
	{
		return AGP3_AIBullet::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGP3_AIBullet(Z_Construct_UClass_AGP3_AIBullet, &AGP3_AIBullet::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("AGP3_AIBullet"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGP3_AIBullet);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
