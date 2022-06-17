// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputChord;
class UTextBlock;
class UInputKeySelector;
#ifdef GP3_TEAM03_GP3KeyActionMapper_generated_h
#error "GP3KeyActionMapper.generated.h already included, missing '#pragma once' in GP3KeyActionMapper.h"
#endif
#define GP3_TEAM03_GP3KeyActionMapper_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execChangeJoystickKeybinding); \
	DECLARE_FUNCTION(execChangeKeyboardMouseKeybinding);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execChangeJoystickKeybinding); \
	DECLARE_FUNCTION(execChangeKeyboardMouseKeybinding);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_EVENT_PARMS \
	struct GP3KeyActionMapper_eventGetDisplayTextBlock_Parms \
	{ \
		UTextBlock* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3KeyActionMapper_eventGetDisplayTextBlock_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3KeyActionMapper_eventGetJoystickKeySelector_Parms \
	{ \
		UInputKeySelector* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3KeyActionMapper_eventGetJoystickKeySelector_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	}; \
	struct GP3KeyActionMapper_eventGetKeyboardMouseKeySelector_Parms \
	{ \
		UInputKeySelector* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3KeyActionMapper_eventGetKeyboardMouseKeySelector_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3KeyActionMapper(); \
	friend struct Z_Construct_UClass_UGP3KeyActionMapper_Statics; \
public: \
	DECLARE_CLASS(UGP3KeyActionMapper, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3KeyActionMapper)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUGP3KeyActionMapper(); \
	friend struct Z_Construct_UClass_UGP3KeyActionMapper_Statics; \
public: \
	DECLARE_CLASS(UGP3KeyActionMapper, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3KeyActionMapper)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3KeyActionMapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3KeyActionMapper) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3KeyActionMapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3KeyActionMapper); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3KeyActionMapper(UGP3KeyActionMapper&&); \
	NO_API UGP3KeyActionMapper(const UGP3KeyActionMapper&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3KeyActionMapper(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3KeyActionMapper(UGP3KeyActionMapper&&); \
	NO_API UGP3KeyActionMapper(const UGP3KeyActionMapper&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3KeyActionMapper); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3KeyActionMapper); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3KeyActionMapper)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__InputSettings() { return STRUCT_OFFSET(UGP3KeyActionMapper, InputSettings); } \
	FORCEINLINE static uint32 __PPO__DisplayName() { return STRUCT_OFFSET(UGP3KeyActionMapper, DisplayName); } \
	FORCEINLINE static uint32 __PPO__bHideJoystickKeySelector() { return STRUCT_OFFSET(UGP3KeyActionMapper, bHideJoystickKeySelector); } \
	FORCEINLINE static uint32 __PPO__InputName() { return STRUCT_OFFSET(UGP3KeyActionMapper, InputName); } \
	FORCEINLINE static uint32 __PPO__SettingsSaveGame() { return STRUCT_OFFSET(UGP3KeyActionMapper, SettingsSaveGame); }


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_15_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3KeyActionMapper>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3KeyActionMapper_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
