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
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UPlayerPawnMovementComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
// End Cross Module References
	void AGP3PlayerPawn::StaticRegisterNativesAGP3PlayerPawn()
	{
	}
	UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister()
	{
		return AGP3PlayerPawn::StaticClass();
	}
	struct Z_Construct_UClass_AGP3PlayerPawn_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MovementComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MovementComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_MeshComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MeshComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RightInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RightInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ForwardInputValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ForwardInputValue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HorizontalMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_HorizontalMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_VerticalMouseSensitivity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_VerticalMouseSensitivity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGP3PlayerPawn_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "Player/GP3PlayerPawn.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MovementComp_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MovementComp = { "MovementComp", nullptr, (EPropertyFlags)0x001000000008000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MovementComp), Z_Construct_UClass_UPlayerPawnMovementComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MovementComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MovementComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp = { "MeshComp", nullptr, (EPropertyFlags)0x001000000009000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, MeshComp), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x0010000000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp_MetaData)) };
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity = { "HorizontalMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, HorizontalMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity = { "VerticalMouseSensitivity", nullptr, (EPropertyFlags)0x0010000000010015, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, VerticalMouseSensitivity), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "GP3PlayerPawn" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, WeaponClass), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerPawn.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerPawn, Gun), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MovementComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_MeshComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_CameraComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_SpringArmComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_RightInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_ForwardInputValue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_HorizontalMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_VerticalMouseSensitivity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerPawn_Statics::NewProp_Gun,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGP3PlayerPawn_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGP3PlayerPawn>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGP3PlayerPawn_Statics::ClassParams = {
		&AGP3PlayerPawn::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGP3PlayerPawn_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
	IMPLEMENT_CLASS(AGP3PlayerPawn, 509229202);
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
