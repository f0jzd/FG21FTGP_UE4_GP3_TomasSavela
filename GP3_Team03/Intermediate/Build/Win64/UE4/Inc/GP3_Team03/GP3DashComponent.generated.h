// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
#ifdef GP3_TEAM03_GP3DashComponent_generated_h
#error "GP3DashComponent.generated.h already included, missing '#pragma once' in GP3DashComponent.h"
#endif
#define GP3_TEAM03_GP3DashComponent_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_16_DELEGATE \
static inline void FOnDashEvent_DelegateWrapper(const FMulticastScriptDelegate& OnDashEvent) \
{ \
	OnDashEvent.ProcessMulticastDelegate<UObject>(NULL); \
}


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execDecreaseDashCooldown); \
	DECLARE_FUNCTION(execApplySlopeAxis); \
	DECLARE_FUNCTION(execHandleDashStates); \
	DECLARE_FUNCTION(execResetDash); \
	DECLARE_FUNCTION(execCalculateMovement); \
	DECLARE_FUNCTION(execReturnInstantVelocity); \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execDash);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execDecreaseDashCooldown); \
	DECLARE_FUNCTION(execApplySlopeAxis); \
	DECLARE_FUNCTION(execHandleDashStates); \
	DECLARE_FUNCTION(execResetDash); \
	DECLARE_FUNCTION(execCalculateMovement); \
	DECLARE_FUNCTION(execReturnInstantVelocity); \
	DECLARE_FUNCTION(execSetDirection); \
	DECLARE_FUNCTION(execDash);


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3DashComponent(); \
	friend struct Z_Construct_UClass_UGP3DashComponent_Statics; \
public: \
	DECLARE_CLASS(UGP3DashComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3DashComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUGP3DashComponent(); \
	friend struct Z_Construct_UClass_UGP3DashComponent_Statics; \
public: \
	DECLARE_CLASS(UGP3DashComponent, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3DashComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3DashComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3DashComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3DashComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3DashComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3DashComponent(UGP3DashComponent&&); \
	NO_API UGP3DashComponent(const UGP3DashComponent&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3DashComponent(UGP3DashComponent&&); \
	NO_API UGP3DashComponent(const UGP3DashComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3DashComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3DashComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGP3DashComponent)


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_PRIVATE_PROPERTY_OFFSET
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_11_PROLOG
#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3DashComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Player_GP3DashComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
