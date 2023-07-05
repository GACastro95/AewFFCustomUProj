// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector2D;
class AActor;
class APlayerController;
#ifdef ABP_200508_ELSSWidgetHUD_ShieldGauge_generated_h
#error "ELSSWidgetHUD_ShieldGauge.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_ShieldGauge.h"
#endif
#define ABP_200508_ELSSWidgetHUD_ShieldGauge_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplyShieldGauge); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShield); \
	DECLARE_FUNCTION(execUpdateShow);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplyShieldGauge); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShield); \
	DECLARE_FUNCTION(execUpdateShow);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_EVENT_PARMS \
	struct ELSSWidgetHUD_ShieldGauge_eventInit_Parms \
	{ \
		APlayerController* NewPlayerController; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_ShieldGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_ShieldGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_ShieldGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_ShieldGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_ShieldGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_ShieldGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_ShieldGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_ShieldGauge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_ShieldGauge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_ShieldGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_ShieldGauge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_ShieldGauge(UELSSWidgetHUD_ShieldGauge&&); \
	NO_API UELSSWidgetHUD_ShieldGauge(const UELSSWidgetHUD_ShieldGauge&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_ShieldGauge(UELSSWidgetHUD_ShieldGauge&&); \
	NO_API UELSSWidgetHUD_ShieldGauge(const UELSSWidgetHUD_ShieldGauge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_ShieldGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_ShieldGauge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_ShieldGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShieldGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__ShieldGaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldGaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__GaugeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, GaugeWidget); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, PlayerController); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, Offset); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableMaxValue); } \
	FORCEINLINE static uint32 __PPO__IdealShieldDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, IdealShieldDurableValue); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableValue); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableValueDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableValueDuration); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, ShieldDurableElapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteShieldDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, IsCompleteShieldDuration); } \
	FORCEINLINE static uint32 __PPO__BarShowElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, BarShowElapsed); } \
	FORCEINLINE static uint32 __PPO__IsGaugeVisible() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, IsGaugeVisible); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MaxDistance); } \
	FORCEINLINE static uint32 __PPO__MinDistance() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MinDistance); } \
	FORCEINLINE static uint32 __PPO__MAXSCALE() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MAXSCALE); } \
	FORCEINLINE static uint32 __PPO__MINSCALE() { return STRUCT_OFFSET(UELSSWidgetHUD_ShieldGauge, MINSCALE); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_ShieldGauge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_ShieldGauge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
