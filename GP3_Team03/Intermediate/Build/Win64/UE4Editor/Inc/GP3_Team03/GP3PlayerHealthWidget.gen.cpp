// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3PlayerHealthWidget.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3PlayerHealthWidget() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerHealthWidget_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3PlayerHealthWidget();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	UMG_API UClass* Z_Construct_UClass_UProgressBar_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_AGP3PlayerPawn_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3PlayerHealthWidget::execUpdateHealth)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->UpdateHealth();
		P_NATIVE_END;
	}
	static FName NAME_UGP3PlayerHealthWidget_GetHealthProgressBar = FName(TEXT("GetHealthProgressBar"));
	UProgressBar* UGP3PlayerHealthWidget::GetHealthProgressBar()
	{
		GP3PlayerHealthWidget_eventGetHealthProgressBar_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3PlayerHealthWidget_GetHealthProgressBar),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3PlayerHealthWidget::StaticRegisterNativesUGP3PlayerHealthWidget()
	{
		UClass* Class = UGP3PlayerHealthWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "UpdateHealth", &UGP3PlayerHealthWidget::execUpdateHealth },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3PlayerHealthWidget_eventGetHealthProgressBar_Parms, ReturnValue), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3PlayerHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3PlayerHealthWidget, nullptr, "GetHealthProgressBar", nullptr, nullptr, sizeof(GP3PlayerHealthWidget_eventGetHealthProgressBar_Parms), Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3PlayerHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3PlayerHealthWidget, nullptr, "UpdateHealth", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3PlayerHealthWidget_NoRegister()
	{
		return UGP3PlayerHealthWidget::StaticClass();
	}
	struct Z_Construct_UClass_UGP3PlayerHealthWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerPawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerPawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HealthProgressBar_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HealthProgressBar;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3PlayerHealthWidget_GetHealthProgressBar, "GetHealthProgressBar" }, // 688692334
		{ &Z_Construct_UFunction_UGP3PlayerHealthWidget_UpdateHealth, "UpdateHealth" }, // 2429668490
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "Widgets/GP3PlayerHealthWidget.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3PlayerHealthWidget.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_PlayerPawn_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3PlayerHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_PlayerPawn = { "PlayerPawn", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerHealthWidget, PlayerPawn), Z_Construct_UClass_AGP3PlayerPawn_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_PlayerPawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_PlayerPawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_HealthProgressBar_MetaData[] = {
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Widgets/GP3PlayerHealthWidget.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_HealthProgressBar = { "HealthProgressBar", nullptr, (EPropertyFlags)0x0040000000080008, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3PlayerHealthWidget, HealthProgressBar), Z_Construct_UClass_UProgressBar_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_HealthProgressBar_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_HealthProgressBar_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_PlayerPawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::NewProp_HealthProgressBar,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3PlayerHealthWidget>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::ClassParams = {
		&UGP3PlayerHealthWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3PlayerHealthWidget()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3PlayerHealthWidget_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3PlayerHealthWidget, 3429599162);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3PlayerHealthWidget>()
	{
		return UGP3PlayerHealthWidget::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3PlayerHealthWidget(Z_Construct_UClass_UGP3PlayerHealthWidget, &UGP3PlayerHealthWidget::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3PlayerHealthWidget"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3PlayerHealthWidget);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
