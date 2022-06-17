// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UGP3SettingsSaveGame;
#ifdef GP3_TEAM03_GP3GameInstance_generated_h
#error "GP3GameInstance.generated.h already included, missing '#pragma once' in GP3GameInstance.h"
#endif
#define GP3_TEAM03_GP3GameInstance_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_RPC_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_EVENT_PARMS \
	struct GP3GameInstance_eventGetSettingsSaveGame_Parms \
	{ \
		UGP3SettingsSaveGame* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3GameInstance_eventGetSettingsSaveGame_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3GameInstance(); \
	friend struct Z_Construct_UClass_UGP3GameInstance_Statics; \
public: \
	DECLARE_CLASS(UGP3GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3GameInstance)


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGP3GameInstance(); \
	friend struct Z_Construct_UClass_UGP3GameInstance_Statics; \
public: \
	DECLARE_CLASS(UGP3GameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3GameInstance)


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3GameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3GameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3GameInstance(UGP3GameInstance&&); \
	NO_API UGP3GameInstance(const UGP3GameInstance&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3GameInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3GameInstance(UGP3GameInstance&&); \
	NO_API UGP3GameInstance(const UGP3GameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3GameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3GameInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3GameInstance)


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_11_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3GameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_GP3GameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
