// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/AI/SpawningEnemySystem.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSpawningEnemySystem() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpawningEnemySystem_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_ASpawningEnemySystem();
	ENGINE_API UClass* Z_Construct_UClass_AVolume();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister();
	NAVIGATIONSYSTEM_API UClass* Z_Construct_UClass_UNavigationSystemV1_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(ASpawningEnemySystem::execSpawnEnemy)
	{
		P_GET_OBJECT(UClass,Z_Param_EnemyType);
		P_GET_OBJECT_REF(AGP3_AI_BaseCharacter,Z_Param_Out_SpawnedEnemy);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemy(Z_Param_EnemyType,Z_Param_Out_SpawnedEnemy);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(ASpawningEnemySystem::execSpawnEnemies)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_FirstWaveAmount);
		P_GET_OBJECT(UClass,Z_Param_EnemyType);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnEnemies(Z_Param_FirstWaveAmount,Z_Param_EnemyType);
		P_NATIVE_END;
	}
	static FName NAME_ASpawningEnemySystem_OnSpawn = FName(TEXT("OnSpawn"));
	void ASpawningEnemySystem::OnSpawn(FVector const& SpawnedEnemyLocation)
	{
		SpawningEnemySystem_eventOnSpawn_Parms Parms;
		Parms.SpawnedEnemyLocation=SpawnedEnemyLocation;
		ProcessEvent(FindFunctionChecked(NAME_ASpawningEnemySystem_OnSpawn),&Parms);
	}
	void ASpawningEnemySystem::StaticRegisterNativesASpawningEnemySystem()
	{
		UClass* Class = ASpawningEnemySystem::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnEnemies", &ASpawningEnemySystem::execSpawnEnemies },
			{ "SpawnEnemy", &ASpawningEnemySystem::execSpawnEnemy },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnedEnemyLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnedEnemyLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::NewProp_SpawnedEnemyLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::NewProp_SpawnedEnemyLocation = { "SpawnedEnemyLocation", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventOnSpawn_Parms, SpawnedEnemyLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::NewProp_SpawnedEnemyLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::NewProp_SpawnedEnemyLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::NewProp_SpawnedEnemyLocation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "OnSpawn", nullptr, nullptr, sizeof(SpawningEnemySystem_eventOnSpawn_Parms), Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics
	{
		struct SpawningEnemySystem_eventSpawnEnemies_Parms
		{
			int32 FirstWaveAmount;
			TSubclassOf<AGP3_AI_BaseCharacter>  EnemyType;
		};
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_FirstWaveAmount;
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_FirstWaveAmount = { "FirstWaveAmount", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventSpawnEnemies_Parms, FirstWaveAmount), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventSpawnEnemies_Parms, EnemyType), Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_FirstWaveAmount,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::NewProp_EnemyType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "SpawnEnemies", nullptr, nullptr, sizeof(SpawningEnemySystem_eventSpawnEnemies_Parms), Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics
	{
		struct SpawningEnemySystem_eventSpawnEnemy_Parms
		{
			TSubclassOf<AGP3_AI_BaseCharacter>  EnemyType;
			AGP3_AI_BaseCharacter* SpawnedEnemy;
		};
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_EnemyType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SpawnedEnemy;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::NewProp_EnemyType = { "EnemyType", nullptr, (EPropertyFlags)0x0014000000000080, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventSpawnEnemy_Parms, EnemyType), Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::NewProp_SpawnedEnemy = { "SpawnedEnemy", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SpawningEnemySystem_eventSpawnEnemy_Parms, SpawnedEnemy), Z_Construct_UClass_AGP3_AI_BaseCharacter_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::NewProp_EnemyType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::NewProp_SpawnedEnemy,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ASpawningEnemySystem, nullptr, "SpawnEnemy", nullptr, nullptr, sizeof(SpawningEnemySystem_eventSpawnEnemy_Parms), Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_ASpawningEnemySystem_NoRegister()
	{
		return ASpawningEnemySystem::StaticClass();
	}
	struct Z_Construct_UClass_ASpawningEnemySystem_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnInterval_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_SpawnInterval;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTimerIsOn_MetaData[];
#endif
		static void NewProp_bTimerIsOn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTimerIsOn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bReadyToSpawn_MetaData[];
#endif
		static void NewProp_bReadyToSpawn_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bReadyToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bSpawnerActivated_MetaData[];
#endif
		static void NewProp_bSpawnerActivated_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bSpawnerActivated;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_NavSystem_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_NavSystem;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ASpawningEnemySystem_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AVolume,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_ASpawningEnemySystem_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_ASpawningEnemySystem_OnSpawn, "OnSpawn" }, // 2572017267
		{ &Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemies, "SpawnEnemies" }, // 2181755033
		{ &Z_Construct_UFunction_ASpawningEnemySystem_SpawnEnemy, "SpawnEnemy" }, // 2087979096
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Brush Physics Object Blueprint Display Rendering Physics Input" },
		{ "IncludePath", "AI/SpawningEnemySystem.h" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData[] = {
		{ "Category", "Timer" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval = { "SpawnInterval", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, SpawnInterval), METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn_MetaData[] = {
		{ "Category", "SpawningEnemySystem" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	void Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn_SetBit(void* Obj)
	{
		((ASpawningEnemySystem*)Obj)->bTimerIsOn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn = { "bTimerIsOn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawningEnemySystem), &Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn_MetaData[] = {
		{ "Category", "SpawningEnemySystem" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	void Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn_SetBit(void* Obj)
	{
		((ASpawningEnemySystem*)Obj)->bReadyToSpawn = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn = { "bReadyToSpawn", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawningEnemySystem), &Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated_MetaData[] = {
		{ "Category", "SpawningEnemySystem" },
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	void Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated_SetBit(void* Obj)
	{
		((ASpawningEnemySystem*)Obj)->bSpawnerActivated = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated = { "bSpawnerActivated", nullptr, (EPropertyFlags)0x0010000000000004, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ASpawningEnemySystem), &Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated_SetBit, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData[] = {
		{ "ModuleRelativePath", "Public/AI/SpawningEnemySystem.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem = { "NavSystem", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ASpawningEnemySystem, NavSystem), Z_Construct_UClass_UNavigationSystemV1_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_SpawnInterval,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bTimerIsOn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bReadyToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_bSpawnerActivated,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ASpawningEnemySystem_Statics::NewProp_NavSystem,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ASpawningEnemySystem_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ASpawningEnemySystem>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ASpawningEnemySystem_Statics::ClassParams = {
		&ASpawningEnemySystem::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ASpawningEnemySystem_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ASpawningEnemySystem()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ASpawningEnemySystem_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ASpawningEnemySystem, 3342836116);
	template<> GP3_TEAM03_API UClass* StaticClass<ASpawningEnemySystem>()
	{
		return ASpawningEnemySystem::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ASpawningEnemySystem(Z_Construct_UClass_ASpawningEnemySystem, &ASpawningEnemySystem::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("ASpawningEnemySystem"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ASpawningEnemySystem);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
