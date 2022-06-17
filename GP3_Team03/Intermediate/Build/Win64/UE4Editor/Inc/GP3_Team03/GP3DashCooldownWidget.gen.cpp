// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3DashCooldownWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3DashCooldownWidget() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashCooldownWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashCooldownWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3DashComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3DashCooldownWidget::execOnDash)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OnDash();
		P_NATIVE_END;
	}
	static FName NAME_UGP3DashCooldownWidget_GetProgressBar = FName(TEXT("GetProgressBar"));
	UProgressBar* UGP3DashCooldownWidget::GetProgressBar()
	{
		GP3DashCooldownWidget_eventGetProgressBar_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3DashCooldownWidget_GetProgressBar),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3DashCooldownWidget_OnCooldownEnd = FName(TEXT("OnCooldownEnd"));
	void UGP3DashCooldownWidget::OnCooldownEnd()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3DashCooldownWidget_OnCooldownEnd),NULL);
	}
	static FName NAME_UGP3DashCooldownWidget_OnCooldownStart = FName(TEXT("OnCooldownStart"));
	void UGP3DashCooldownWidget::OnCooldownStart()
	{
		ProcessEvent(FindFunctionChecked(NAME_UGP3DashCooldownWidget_OnCooldownStart),NULL);
	}
	void UGP3DashCooldownWidget::StaticRegisterNativesUGP3DashCooldownWidget()
	{
		UClass* Class = UGP3DashCooldownWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "OnDash", &UGP3DashCooldownWidget::execOnDash },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3DashCooldownWidget_eventGetProgressBar_Parms, ReturnValue), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashCooldownWidget, nullptr, "GetProgressBar", nullptr, nullptr, sizeof(GP3DashCooldownWidget_eventGetProgressBar_Parms), Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashCooldownWidget, nullptr, "OnCooldownEnd", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashCooldownWidget, nullptr, "OnCooldownStart", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3DashCooldownWidget, nullptr, "OnDash", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3DashCooldownWidget_NoRegister()
	{
		return UGP3DashCooldownWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGP3DashCooldownWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DashComp_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_DashComp;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3DashCooldownWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3DashCooldownWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3DashCooldownWidget_GetProgressBar, "GetProgressBar" }, // 363615046
		{ &Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownEnd, "OnCooldownEnd" }, // 2069285953
		{ &Z_Construct_UFunction_UGP3DashCooldownWidget_OnCooldownStart, "OnCooldownStart" }, // 3280758332
		{ &Z_Construct_UFunction_UGP3DashCooldownWidget_OnDash, "OnDash" }, // 3001230352
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashCooldownWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GP3DashCooldownWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_DashComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_DashComp = { "DashComp", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashCooldownWidget, DashComp), Z_Construct_UClass_UGP3DashComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_DashComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_DashComp_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_ProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3DashCooldownWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_ProgressBar = { "ProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3DashCooldownWidget, ProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_ProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_ProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3DashCooldownWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_DashComp,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3DashCooldownWidget_Statics::NewProp_ProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3DashCooldownWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3DashCooldownWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3DashCooldownWidget_Statics::ClassParams = {
		&UGP3DashCooldownWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3DashCooldownWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3DashCooldownWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3DashCooldownWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3DashCooldownWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3DashCooldownWidget, 3024905119);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3DashCooldownWidget>()
	{
		return UGP3DashCooldownWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3DashCooldownWidget(Z_Construct_UClass_UGP3DashCooldownWidget, &UGP3DashCooldownWidget::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3DashCooldownWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3DashCooldownWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
