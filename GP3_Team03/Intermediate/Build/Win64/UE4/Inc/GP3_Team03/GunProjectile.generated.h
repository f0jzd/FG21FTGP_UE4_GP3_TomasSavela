// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef GP3_TEAM03_GunProjectile_generated_h
#error "GunProjectile.generated.h already included, missing '#pragma once' in GunProjectile.h"
#endif
#define GP3_TEAM03_GunProjectile_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_16_DELEGATE \
static inline void FOnWeakPointHitEvent_DelegateWrapper(const FMulticastScriptDelegate& OnWeakPointHitEvent) \
{ \
	OnWeakPointHitEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_RPC_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAGunProjectile(); \
	friend struct Z_Construct_UClass_AGunProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGunProjectile)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_INCLASS \
private: \
	static void StaticRegisterNativesAGunProjectile(); \
	friend struct Z_Construct_UClass_AGunProjectile_Statics; \
public: \
	DECLARE_CLASS(AGunProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(AGunProjectile)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AGunProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AGunProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunProjectile(AGunProjectile&&); \
	NO_API AGunProjectile(const AGunProjectile&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AGunProjectile(AGunProjectile&&); \
	NO_API AGunProjectile(const AGunProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AGunProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AGunProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AGunProjectile)


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_11_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class AGunProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Weapons_GunProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
