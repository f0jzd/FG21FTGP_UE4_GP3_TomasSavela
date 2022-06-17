// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3KeyAxisMapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3KeyAxisMapper() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3KeyAxisMapper_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3KeyAxisMapper();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3KeyActionMapper();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
// End Cross Module References
	void UGP3KeyAxisMapper::StaticRegisterNativesUGP3KeyAxisMapper()
	{
	}
	UClass* Z_Construct_UClass_UGP3KeyAxisMapper_NoRegister()
	{
		return UGP3KeyAxisMapper::StaticClass();
	}
	struct Z_Construct_UClass_UGP3KeyAxisMapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputScale_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_InputScale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3KeyAxisMapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UGP3KeyActionMapper,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyAxisMapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GP3KeyAxisMapper.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyAxisMapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyAxisMapper_Statics::NewProp_InputScale_MetaData[] = {
		{ "Category", "Keybindings" },
		{ "ClampMax", "1" },
		{ "ClampMin", "-1" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyAxisMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UGP3KeyAxisMapper_Statics::NewProp_InputScale = { "InputScale", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3KeyAxisMapper, InputScale), METADATA_PARAMS(Z_Construct_UClass_UGP3KeyAxisMapper_Statics::NewProp_InputScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyAxisMapper_Statics::NewProp_InputScale_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3KeyAxisMapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyAxisMapper_Statics::NewProp_InputScale,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3KeyAxisMapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3KeyAxisMapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3KeyAxisMapper_Statics::ClassParams = {
		&UGP3KeyAxisMapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UGP3KeyAxisMapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyAxisMapper_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3KeyAxisMapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyAxisMapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3KeyAxisMapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3KeyAxisMapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3KeyAxisMapper, 845668072);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3KeyAxisMapper>()
	{
		return UGP3KeyAxisMapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3KeyAxisMapper(Z_Construct_UClass_UGP3KeyAxisMapper, &UGP3KeyAxisMapper::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3KeyAxisMapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3KeyAxisMapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
