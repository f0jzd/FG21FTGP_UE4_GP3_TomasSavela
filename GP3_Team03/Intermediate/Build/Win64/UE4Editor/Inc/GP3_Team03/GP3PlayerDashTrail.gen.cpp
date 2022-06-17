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
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UClass* Z_Construct_UClass_USplineComponent_NoRegister();
// End Cross Module References
	static FName NAME_AGP3PlayerDashTrail_OnExtendSpline = FName(TEXT("OnExtendSpline"));
	void AGP3PlayerDashTrail::OnExtendSpline(int32 Index, FVector Location)
	{
		GP3PlayerDashTrail_eventOnExtendSpline_Parms Parms;
		Parms.Index=Index;
		Parms.Location=Location;
		ProcessEvent(FindFunctionChecked(NAME_AGP3PlayerDashTrail_OnExtendSpline),&Parms);
	}
	void AGP3PlayerDashTrail::StaticRegisterNativesAGP3PlayerDashTrail()
	{
	}
	struct Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics
	{
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Location;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerDashTrail_eventOnExtendSpline_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::NewProp_Location = { "Location", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerDashTrail_eventOnExtendSpline_Parms, Location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::NewProp_Location,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AGP3PlayerDashTrail, nullptr, "OnExtendSpline", nullptr, nullptr, sizeof(GP3PlayerDashTrail_eventOnExtendSpline_Parms), Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08820800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AGP3PlayerDashTrail_NoRegister()
	{
		return AGP3PlayerDashTrail::StaticClass();
	}
	struct Z_Construct_UClass_AGP3PlayerDashTrail_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Spline_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Spline;
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
	const FClassFunctionLinkInfo Z_Construct_UClass_AGP3PlayerDashTrail_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AGP3PlayerDashTrail_OnExtendSpline, "OnExtendSpline" }, // 2543321683
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Player/GP3PlayerDashTrail.h" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_Spline_MetaData[] = {
		{ "Category", "GP3PlayerDashTrail" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_Spline = { "Spline", nullptr, (EPropertyFlags)0x00100000000a000d, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerDashTrail, Spline), Z_Construct_UClass_USplineComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_Spline_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_Spline_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData[] = {
		{ "Category", "GP3PlayerDashTrail" },
		{ "ModuleRelativePath", "Public/Player/GP3PlayerDashTrail.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime = { "TrailLifetime", nullptr, (EPropertyFlags)0x0010000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGP3PlayerDashTrail, TrailLifetime), METADATA_PARAMS(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_TrailLifetime_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGP3PlayerDashTrail_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGP3PlayerDashTrail_Statics::NewProp_Spline,
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
		FuncInfo,
		Z_Construct_UClass_AGP3PlayerDashTrail_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
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
	IMPLEMENT_CLASS(AGP3PlayerDashTrail, 3290069741);
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
