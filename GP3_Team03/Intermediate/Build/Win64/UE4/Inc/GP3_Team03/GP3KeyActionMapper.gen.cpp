// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GP3_Team03/Public/Widgets/GP3KeyActionMapper.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGP3KeyActionMapper() {}
// Cross Module References
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3KeyActionMapper_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3KeyActionMapper();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_GP3_Team03();
	SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FInputChord();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UInputKeySelector_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UInputSettings_NoRegister();
	GP3_TEAM03_API UClass* Z_Construct_UClass_UGP3SettingsSaveGame_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UGP3KeyActionMapper::execChangeJoystickKeybinding)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InputChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeJoystickKeybinding(Z_Param_InputChord);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UGP3KeyActionMapper::execChangeKeyboardMouseKeybinding)
	{
		P_GET_STRUCT(FInputChord,Z_Param_InputChord);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeKeyboardMouseKeybinding(Z_Param_InputChord);
		P_NATIVE_END;
	}
	static FName NAME_UGP3KeyActionMapper_GetDisplayTextBlock = FName(TEXT("GetDisplayTextBlock"));
	UTextBlock* UGP3KeyActionMapper::GetDisplayTextBlock()
	{
		GP3KeyActionMapper_eventGetDisplayTextBlock_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3KeyActionMapper_GetDisplayTextBlock),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3KeyActionMapper_GetJoystickKeySelector = FName(TEXT("GetJoystickKeySelector"));
	UInputKeySelector* UGP3KeyActionMapper::GetJoystickKeySelector()
	{
		GP3KeyActionMapper_eventGetJoystickKeySelector_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3KeyActionMapper_GetJoystickKeySelector),&Parms);
		return Parms.ReturnValue;
	}
	static FName NAME_UGP3KeyActionMapper_GetKeyboardMouseKeySelector = FName(TEXT("GetKeyboardMouseKeySelector"));
	UInputKeySelector* UGP3KeyActionMapper::GetKeyboardMouseKeySelector()
	{
		GP3KeyActionMapper_eventGetKeyboardMouseKeySelector_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_UGP3KeyActionMapper_GetKeyboardMouseKeySelector),&Parms);
		return Parms.ReturnValue;
	}
	void UGP3KeyActionMapper::StaticRegisterNativesUGP3KeyActionMapper()
	{
		UClass* Class = UGP3KeyActionMapper::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeJoystickKeybinding", &UGP3KeyActionMapper::execChangeJoystickKeybinding },
			{ "ChangeKeyboardMouseKeybinding", &UGP3KeyActionMapper::execChangeKeyboardMouseKeybinding },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics
	{
		struct GP3KeyActionMapper_eventChangeJoystickKeybinding_Parms
		{
			FInputChord InputChord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3KeyActionMapper_eventChangeJoystickKeybinding_Parms, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::NewProp_InputChord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3KeyActionMapper, nullptr, "ChangeJoystickKeybinding", nullptr, nullptr, sizeof(GP3KeyActionMapper_eventChangeJoystickKeybinding_Parms), Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics
	{
		struct GP3KeyActionMapper_eventChangeKeyboardMouseKeybinding_Parms
		{
			FInputChord InputChord;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_InputChord;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::NewProp_InputChord = { "InputChord", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3KeyActionMapper_eventChangeKeyboardMouseKeybinding_Parms, InputChord), Z_Construct_UScriptStruct_FInputChord, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::NewProp_InputChord,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3KeyActionMapper, nullptr, "ChangeKeyboardMouseKeybinding", nullptr, nullptr, sizeof(GP3KeyActionMapper_eventChangeKeyboardMouseKeybinding_Parms), Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3KeyActionMapper_eventGetDisplayTextBlock_Parms, ReturnValue), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3KeyActionMapper, nullptr, "GetDisplayTextBlock", nullptr, nullptr, sizeof(GP3KeyActionMapper_eventGetDisplayTextBlock_Parms), Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3KeyActionMapper_eventGetJoystickKeySelector_Parms, ReturnValue), Z_Construct_UClass_UInputKeySelector_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3KeyActionMapper, nullptr, "GetJoystickKeySelector", nullptr, nullptr, sizeof(GP3KeyActionMapper_eventGetJoystickKeySelector_Parms), Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics
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
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(GP3KeyActionMapper_eventGetKeyboardMouseKeySelector_Parms, ReturnValue), Z_Construct_UClass_UInputKeySelector_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::NewProp_ReturnValue_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UGP3KeyActionMapper, nullptr, "GetKeyboardMouseKeySelector", nullptr, nullptr, sizeof(GP3KeyActionMapper_eventGetKeyboardMouseKeySelector_Parms), Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UGP3KeyActionMapper_NoRegister()
	{
		return UGP3KeyActionMapper::StaticClass();
	}
	struct Z_Construct_UClass_UGP3KeyActionMapper_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputSettings_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_InputSettings;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DisplayName_MetaData[];
#endif
		static const UE4CodeGen_Private::FTextPropertyParams NewProp_DisplayName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bHideJoystickKeySelector_MetaData[];
#endif
		static void NewProp_bHideJoystickKeySelector_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bHideJoystickKeySelector;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_InputName_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_InputName;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SettingsSaveGame_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_SettingsSaveGame;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UGP3KeyActionMapper_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_GP3_Team03,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UGP3KeyActionMapper_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UGP3KeyActionMapper_ChangeJoystickKeybinding, "ChangeJoystickKeybinding" }, // 466240442
		{ &Z_Construct_UFunction_UGP3KeyActionMapper_ChangeKeyboardMouseKeybinding, "ChangeKeyboardMouseKeybinding" }, // 2731030925
		{ &Z_Construct_UFunction_UGP3KeyActionMapper_GetDisplayTextBlock, "GetDisplayTextBlock" }, // 4148008052
		{ &Z_Construct_UFunction_UGP3KeyActionMapper_GetJoystickKeySelector, "GetJoystickKeySelector" }, // 2625096265
		{ &Z_Construct_UFunction_UGP3KeyActionMapper_GetKeyboardMouseKeySelector, "GetKeyboardMouseKeySelector" }, // 845710132
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "Widgets/GP3KeyActionMapper.h" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputSettings = { "InputSettings", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3KeyActionMapper, InputSettings), Z_Construct_UClass_UInputSettings_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputSettings_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_DisplayName_MetaData[] = {
		{ "Category", "Keybindings" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FTextPropertyParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_DisplayName = { "DisplayName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3KeyActionMapper, DisplayName), METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_DisplayName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_DisplayName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector_MetaData[] = {
		{ "Category", "Keybindings" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	void Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector_SetBit(void* Obj)
	{
		((UGP3KeyActionMapper*)Obj)->bHideJoystickKeySelector = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector = { "bHideJoystickKeySelector", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UGP3KeyActionMapper), &Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector_SetBit, METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputName_MetaData[] = {
		{ "Category", "Keybindings" },
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputName = { "InputName", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3KeyActionMapper, InputName), METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputName_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_SettingsSaveGame_MetaData[] = {
		{ "ModuleRelativePath", "Public/Widgets/GP3KeyActionMapper.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_SettingsSaveGame = { "SettingsSaveGame", nullptr, (EPropertyFlags)0x0020080000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UGP3KeyActionMapper, SettingsSaveGame), Z_Construct_UClass_UGP3SettingsSaveGame_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_SettingsSaveGame_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_SettingsSaveGame_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UGP3KeyActionMapper_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputSettings,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_DisplayName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_bHideJoystickKeySelector,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_InputName,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UGP3KeyActionMapper_Statics::NewProp_SettingsSaveGame,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UGP3KeyActionMapper_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UGP3KeyActionMapper>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UGP3KeyActionMapper_Statics::ClassParams = {
		&UGP3KeyActionMapper::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UGP3KeyActionMapper_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UGP3KeyActionMapper_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UGP3KeyActionMapper_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UGP3KeyActionMapper()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UGP3KeyActionMapper_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UGP3KeyActionMapper, 1136198079);
	template<> GP3_TEAM03_API UClass* StaticClass<UGP3KeyActionMapper>()
	{
		return UGP3KeyActionMapper::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UGP3KeyActionMapper(Z_Construct_UClass_UGP3KeyActionMapper, &UGP3KeyActionMapper::StaticClass, TEXT("/Script/GP3_Team03"), TEXT("UGP3KeyActionMapper"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UGP3KeyActionMapper);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
