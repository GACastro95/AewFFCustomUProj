// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWidgetHUD_WrestlerStatus_generated_h
#error "ELSSWidgetHUD_WrestlerStatus.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_WrestlerStatus.h"
#endif
#define ABP_200508_ELSSWidgetHUD_WrestlerStatus_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyCarrotMedal); \
	DECLARE_FUNCTION(execApplyDownHp); \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplyShieldGauge); \
	DECLARE_FUNCTION(execApplyWrestlerDownHpGauge); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execApplyWrestlerHpGauge); \
	DECLARE_FUNCTION(execSwitchHpType); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateDownHp); \
	DECLARE_FUNCTION(execUpdateShield); \
	DECLARE_FUNCTION(execUpdateWrestlerHp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyCarrotMedal); \
	DECLARE_FUNCTION(execApplyDownHp); \
	DECLARE_FUNCTION(execApplyShieldDurableValue); \
	DECLARE_FUNCTION(execApplyShieldGauge); \
	DECLARE_FUNCTION(execApplyWrestlerDownHpGauge); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execApplyWrestlerHpGauge); \
	DECLARE_FUNCTION(execSwitchHpType); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateDownHp); \
	DECLARE_FUNCTION(execUpdateShield); \
	DECLARE_FUNCTION(execUpdateWrestlerHp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_EVENT_PARMS \
	struct ELSSWidgetHUD_WrestlerStatus_eventSetUserGamerTag_Parms \
	{ \
		FString InGamerTag; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_WrestlerStatus(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_WrestlerStatus, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_WrestlerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_WrestlerStatus(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_WrestlerStatus_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_WrestlerStatus, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_WrestlerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_WrestlerStatus(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_WrestlerStatus) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_WrestlerStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_WrestlerStatus); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_WrestlerStatus(UELSSWidgetHUD_WrestlerStatus&&); \
	NO_API UELSSWidgetHUD_WrestlerStatus(const UELSSWidgetHUD_WrestlerStatus&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_WrestlerStatus(UELSSWidgetHUD_WrestlerStatus&&); \
	NO_API UELSSWidgetHUD_WrestlerStatus(const UELSSWidgetHUD_WrestlerStatus&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_WrestlerStatus); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_WrestlerStatus); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_WrestlerStatus)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShieldGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__ShieldGaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldGaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__HpGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__HpGaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__KOGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, KOGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__MedalGetAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, MedalGetAnim); } \
	FORCEINLINE static uint32 __PPO__MedalReleaseAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, MedalReleaseAnim); } \
	FORCEINLINE static uint32 __PPO__HpGaugeImage() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpGaugeImage); } \
	FORCEINLINE static uint32 __PPO__DownHpGaugeImage() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpGaugeImage); } \
	FORCEINLINE static uint32 __PPO__ShieldWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldWidget); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableMaxValue); } \
	FORCEINLINE static uint32 __PPO__HpMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpMaxValue); } \
	FORCEINLINE static uint32 __PPO__DownHpMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpMaxValue); } \
	FORCEINLINE static uint32 __PPO__IdealShieldDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealShieldDurableValue); } \
	FORCEINLINE static uint32 __PPO__IdealHp() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealHp); } \
	FORCEINLINE static uint32 __PPO__IdealDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IdealDownHp); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableValue() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableValue); } \
	FORCEINLINE static uint32 __PPO__WrestlerHp() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, WrestlerHp); } \
	FORCEINLINE static uint32 __PPO__WrestlerDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, WrestlerDownHp); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableValueDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableValueDuration); } \
	FORCEINLINE static uint32 __PPO__HpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpDuration); } \
	FORCEINLINE static uint32 __PPO__DownHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpDuration); } \
	FORCEINLINE static uint32 __PPO__ShieldDurableElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, ShieldDurableElapsed); } \
	FORCEINLINE static uint32 __PPO__HpElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, HpElapsed); } \
	FORCEINLINE static uint32 __PPO__DownHpElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, DownHpElapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteShieldDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IsCompleteShieldDuration); } \
	FORCEINLINE static uint32 __PPO__IsCompleteHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IsCompleteHpDuration); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDownHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IsCompleteDownHpDuration); } \
	FORCEINLINE static uint32 __PPO__IsShowDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IsShowDownHp); } \
	FORCEINLINE static uint32 __PPO__IsShowShieldGauge() { return STRUCT_OFFSET(UELSSWidgetHUD_WrestlerStatus, IsShowShieldGauge); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_11_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_WrestlerStatus>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_WrestlerStatus_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
