// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Player/GP3ShootComponent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3ShootComponent() {}
// Cross Module References
	GP3_TEAM03_API UFunction* Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ShootComponent();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ShootComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3ReloadWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AWeaponBase_NoRegister();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ShootComponent, nullptr, "OnWeaponEquippedEvent__DelegateSignature", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	DEFINE_FUNCTION(UGP3ShootComponent::execOnReloaded)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnReloaded();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3ShootComponent::execSetProjectileVelocity)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Delta);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetProjectileVelocity(Z_Param_Delta);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3ShootComponent::execReload)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Reload();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3ShootComponent::execShoot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Shoot();
		P_NATIVE_END;
	}
	void UGP3ShootComponent::StaticRegisterNativesUGP3ShootComponent()
	{
		UClass* Class = UGP3ShootComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnReloaded", &UGP3ShootComponent::execOnReloaded },
			{ "Reload", &UGP3ShootComponent::execReload },
			{ "SetProjectileVelocity", &UGP3ShootComponent::execSetProjectileVelocity },
			{ "Shoot", &UGP3ShootComponent::execShoot },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ShootComponent, nullptr, "OnReloaded", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ShootComponent_OnReloaded()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ShootComponent_OnReloaded_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ShootComponent, nullptr, "Reload", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ShootComponent_Reload()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ShootComponent_Reload_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics
	{
		struct GP3ShootComponent_eventSetProjectileVelocity_Parms
		{
			float Delta;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Delta;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::NewProp_Delta = { "Delta", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3ShootComponent_eventSetProjectileVelocity_Parms, Delta), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::NewProp_Delta,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ShootComponent, nullptr, "SetProjectileVelocity", nullptr, nullptr, sizeof(GP3ShootComponent_eventSetProjectileVelocity_Parms), Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3ShootComponent, nullptr, "Shoot", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3ShootComponent_Shoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3ShootComponent_Shoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3ShootComponent_NoRegister()
	{
		return UGP3ShootComponent::StaticClass();
	}
	struct Z_Construct_UClass_UGP3ShootComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ShootBuffer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ShootBuffer;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReadyToShoot_MetaData[];
#endif
		static void NewProp_ReadyToShoot_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReadyToShoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadWidgetClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ReloadWidgetClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WeaponClass_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_WeaponClass;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gun_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Gun;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OnWeaponEquipped_MetaData[];
#endif
		static const UE4CodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnWeaponEquipped;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReloadWidget_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReloadWidget;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3ShootComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3ShootComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3ShootComponent_OnReloaded, "OnReloaded" }, // 1239280500
		{ &Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature, "OnWeaponEquippedEvent__DelegateSignature" }, // 1195623040
		{ &Z_Construct_UFunction_UGP3ShootComponent_Reload, "Reload" }, // 3549439714
		{ &Z_Construct_UFunction_UGP3ShootComponent_SetProjectileVelocity, "SetProjectileVelocity" }, // 3546006030
		{ &Z_Construct_UFunction_UGP3ShootComponent_Shoot, "Shoot" }, // 1729935960
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3ShootComponent.h" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ShootBuffer_MetaData[] = {
		{ "Category", "Shoot buffertime" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ShootBuffer = { "ShootBuffer", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, ShootBuffer), METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ShootBuffer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ShootBuffer_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot_MetaData[] = {
		{ "Category", "GP3ShootComponent" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	void Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot_SetBit(void* Obj)
	{
		((UGP3ShootComponent*)Obj)->ReadyToShoot = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot = { "ReadyToShoot", nullptr, (EPropertyFlags)0x0010000000020015, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3ShootComponent), &Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidgetClass_MetaData[] = {
		{ "Category", "GP3ShootComponent" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidgetClass = { "ReloadWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, ReloadWidgetClass), Z_Construct_UClass_UGP3ReloadWidget_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidgetClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_WeaponClass_MetaData[] = {
		{ "Category", "GP3ShootComponent" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_WeaponClass = { "WeaponClass", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, WeaponClass), Z_Construct_UClass_AWeaponBase_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_WeaponClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_WeaponClass_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_Gun_MetaData[] = {
		{ "Category", "GP3ShootComponent" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_Gun = { "Gun", nullptr, (EPropertyFlags)0x0010000000000014, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, Gun), Z_Construct_UClass_AWeaponBase_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_Gun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_Gun_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_OnWeaponEquipped_MetaData[] = {
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_OnWeaponEquipped = { "OnWeaponEquipped", nullptr, (EPropertyFlags)0x0010000000080000, UE4CodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, OnWeaponEquipped), Z_Construct_UDelegateFunction_UGP3ShootComponent_OnWeaponEquippedEvent__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_OnWeaponEquipped_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_OnWeaponEquipped_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3ShootComponent.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidget = { "ReloadWidget", nullptr, (EPropertyFlags)0x0010000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3ShootComponent, ReloadWidget), Z_Construct_UClass_UGP3ReloadWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidget_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3ShootComponent_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ShootBuffer,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReadyToShoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidgetClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_WeaponClass,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_Gun,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_OnWeaponEquipped,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3ShootComponent_Statics::NewProp_ReloadWidget,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3ShootComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3ShootComponent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3ShootComponent_Statics::ClassParams = {
		&UGP3ShootComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3ShootComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3ShootComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3ShootComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3ShootComponent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3ShootComponent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3ShootComponent, 3376097217);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3ShootComponent>()
	{
		return UGP3ShootComponent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3ShootComponent(Z_Construct_UClass_UGP3ShootComponent, &UGP3ShootComponent::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3ShootComponent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3ShootComponent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
