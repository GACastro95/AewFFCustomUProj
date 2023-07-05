// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class APlayerController;
#ifdef ABP_200508_ELSSWidgetHUD_InteractPoint_generated_h
#error "ELSSWidgetHUD_InteractPoint.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_InteractPoint.h"
#endif
#define ABP_200508_ELSSWidgetHUD_InteractPoint_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleText); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShow);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleText); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShow);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_EVENT_PARMS \
	struct ELSSWidgetHUD_InteractPoint_eventInit_Parms \
	{ \
		APlayerController* NewPlayerController; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_InteractPoint(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_InteractPoint, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_InteractPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_InteractPoint(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_InteractPoint_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_InteractPoint, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_InteractPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_InteractPoint(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_InteractPoint) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_InteractPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_InteractPoint); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_InteractPoint(UELSSWidgetHUD_InteractPoint&&); \
	NO_API UELSSWidgetHUD_InteractPoint(const UELSSWidgetHUD_InteractPoint&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_InteractPoint(UELSSWidgetHUD_InteractPoint&&); \
	NO_API UELSSWidgetHUD_InteractPoint(const UELSSWidgetHUD_InteractPoint&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_InteractPoint); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_InteractPoint); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_InteractPoint)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__TextWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, TextWidget); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, PlayerController); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, Offset); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(UELSSWidgetHUD_InteractPoint, MaxDistance); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_InteractPoint>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_InteractPoint_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
