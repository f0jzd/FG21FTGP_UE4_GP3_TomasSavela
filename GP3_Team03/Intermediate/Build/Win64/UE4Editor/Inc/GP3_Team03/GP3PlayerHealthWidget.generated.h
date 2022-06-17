// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UProgressBar;
#ifdef GP3_TEAM03_GP3PlayerHealthWidget_generated_h
#error "GP3PlayerHealthWidget.generated.h already included, missing '#pragma once' in GP3PlayerHealthWidget.h"
#endif
#define GP3_TEAM03_GP3PlayerHealthWidget_generated_h

#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_SPARSE_DATA
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execUpdateHealth);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execUpdateHealth);


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_EVENT_PARMS \
	struct GP3PlayerHealthWidget_eventGetHealthProgressBar_Parms \
	{ \
		UProgressBar* ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		GP3PlayerHealthWidget_eventGetHealthProgressBar_Parms() \
			: ReturnValue(NULL) \
		{ \
		} \
	};


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_CALLBACK_WRAPPERS
#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGP3PlayerHealthWidget(); \
	friend struct Z_Construct_UClass_UGP3PlayerHealthWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3PlayerHealthWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3PlayerHealthWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUGP3PlayerHealthWidget(); \
	friend struct Z_Construct_UClass_UGP3PlayerHealthWidget_Statics; \
public: \
	DECLARE_CLASS(UGP3PlayerHealthWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GP3_Team03"), NO_API) \
	DECLARE_SERIALIZER(UGP3PlayerHealthWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3PlayerHealthWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3PlayerHealthWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3PlayerHealthWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3PlayerHealthWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3PlayerHealthWidget(UGP3PlayerHealthWidget&&); \
	NO_API UGP3PlayerHealthWidget(const UGP3PlayerHealthWidget&); \
public:


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UGP3PlayerHealthWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UGP3PlayerHealthWidget(UGP3PlayerHealthWidget&&); \
	NO_API UGP3PlayerHealthWidget(const UGP3PlayerHealthWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGP3PlayerHealthWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGP3PlayerHealthWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UGP3PlayerHealthWidget)


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerPawn() { return STRUCT_OFFSET(UGP3PlayerHealthWidget, PlayerPawn); } \
	FORCEINLINE static uint32 __PPO__HealthProgressBar() { return STRUCT_OFFSET(UGP3PlayerHealthWidget, HealthProgressBar); }


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_14_PROLOG \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_EVENT_PARMS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_RPC_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_INCLASS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_PRIVATE_PROPERTY_OFFSET \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_SPARSE_DATA \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_CALLBACK_WRAPPERS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_INCLASS_NO_PURE_DECLS \
	GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GP3_TEAM03_API UClass* StaticClass<class UGP3PlayerHealthWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID GP3_Team03_Source_GP3_Team03_Public_Widgets_GP3PlayerHealthWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
