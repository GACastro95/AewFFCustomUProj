// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSAbilityParam;
enum class EKeyMappingType : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_AbilitySlot_generated_h
#error "ELSSWidgetHUD_AbilitySlot.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_AbilitySlot.h"
#endif
#define ABP_200508_ELSSWidgetHUD_AbilitySlot_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyCoolTimeGauge); \
	DECLARE_FUNCTION(execApplyEffectiveGauge); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execInitDefaultState); \
	DECLARE_FUNCTION(execOnFinishedPlayStandByEffect); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetAbility); \
	DECLARE_FUNCTION(execSetAbilityVisible); \
	DECLARE_FUNCTION(execSetButtonVisible); \
	DECLARE_FUNCTION(execSetCoolTimeText); \
	DECLARE_FUNCTION(execSetGaugeParam); \
	DECLARE_FUNCTION(execSetStateSlotButtonVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyCoolTimeGauge); \
	DECLARE_FUNCTION(execApplyEffectiveGauge); \
	DECLARE_FUNCTION(execApplyWatchGameMode); \
	DECLARE_FUNCTION(execInitDefaultState); \
	DECLARE_FUNCTION(execOnFinishedPlayStandByEffect); \
	DECLARE_FUNCTION(execReset); \
	DECLARE_FUNCTION(execSetAbility); \
	DECLARE_FUNCTION(execSetAbilityVisible); \
	DECLARE_FUNCTION(execSetButtonVisible); \
	DECLARE_FUNCTION(execSetCoolTimeText); \
	DECLARE_FUNCTION(execSetGaugeParam); \
	DECLARE_FUNCTION(execSetStateSlotButtonVisible);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_EVENT_PARMS \
	struct ELSSWidgetHUD_AbilitySlot_eventInit_Parms \
	{ \
		int32 inSlotIndex; \
	}; \
	struct ELSSWidgetHUD_AbilitySlot_eventSetKeyConfig_Parms \
	{ \
		EKeyMappingType InKeyMapType; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AbilitySlot(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AbilitySlot, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AbilitySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AbilitySlot(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AbilitySlot_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AbilitySlot, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AbilitySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_AbilitySlot(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_AbilitySlot) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AbilitySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AbilitySlot); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AbilitySlot(UELSSWidgetHUD_AbilitySlot&&); \
	NO_API UELSSWidgetHUD_AbilitySlot(const UELSSWidgetHUD_AbilitySlot&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AbilitySlot(UELSSWidgetHUD_AbilitySlot&&); \
	NO_API UELSSWidgetHUD_AbilitySlot(const UELSSWidgetHUD_AbilitySlot&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AbilitySlot); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AbilitySlot); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_AbilitySlot)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__AbilityGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__AbilityCoolTimeMaterial_001() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_001); } \
	FORCEINLINE static uint32 __PPO__AbilityCoolTimeMaterial_010() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_010); } \
	FORCEINLINE static uint32 __PPO__AbilityCoolTimeMaterial_100() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeMaterial_100); } \
	FORCEINLINE static uint32 __PPO__ButtonHoldAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonHoldAnim); } \
	FORCEINLINE static uint32 __PPO__ButtonDefaultAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonDefaultAnim); } \
	FORCEINLINE static uint32 __PPO__AbilityStandbyEffectAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityStandbyEffectAnim); } \
	FORCEINLINE static uint32 __PPO__AbilityStandbyAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityStandbyAnim); } \
	FORCEINLINE static uint32 __PPO__AbilityActiveAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityActiveAnim); } \
	FORCEINLINE static uint32 __PPO__AbilityCoolTimeAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityCoolTimeAnim); } \
	FORCEINLINE static uint32 __PPO__AbilityIconImage() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, AbilityIconImage); } \
	FORCEINLINE static uint32 __PPO__EffectWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, EffectWidget); } \
	FORCEINLINE static uint32 __PPO__LayoutWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, LayoutWidget); } \
	FORCEINLINE static uint32 __PPO__ButtonFontWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, ButtonFontWidget); } \
	FORCEINLINE static uint32 __PPO__CoolTimeFont_001Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_001Widget); } \
	FORCEINLINE static uint32 __PPO__CoolTimeFont_010Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_010Widget); } \
	FORCEINLINE static uint32 __PPO__CoolTimeFont_100Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFont_100Widget); } \
	FORCEINLINE static uint32 __PPO__CoolTimeFontWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeFontWidget); } \
	FORCEINLINE static uint32 __PPO__CoolTimeValue() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, CoolTimeValue); } \
	FORCEINLINE static uint32 __PPO__IsButtonVisible() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, IsButtonVisible); } \
	FORCEINLINE static uint32 __PPO__IsButtonDefaultState() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, IsButtonDefaultState); } \
	FORCEINLINE static uint32 __PPO__IsAbilityUsingTime() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, IsAbilityUsingTime); } \
	FORCEINLINE static uint32 __PPO__IsAbilityCoolTime() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, IsAbilityCoolTime); } \
	FORCEINLINE static uint32 __PPO__IsWatchGameMode() { return STRUCT_OFFSET(UELSSWidgetHUD_AbilitySlot, IsWatchGameMode); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_13_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_AbilitySlot>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AbilitySlot_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
