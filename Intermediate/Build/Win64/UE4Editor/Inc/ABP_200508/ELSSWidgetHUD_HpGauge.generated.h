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
enum class ESSCharacterHpType : uint8;
class APlayerController;
#ifdef ABP_200508_ELSSWidgetHUD_HpGauge_generated_h
#error "ELSSWidgetHUD_HpGauge.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_HpGauge.h"
#endif
#define ABP_200508_ELSSWidgetHUD_HpGauge_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyDownHp); \
	DECLARE_FUNCTION(execApplyWrestlerDownHpGauge); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execApplyWrestlerHpGauge); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetDurationType); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateDownHp); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShow); \
	DECLARE_FUNCTION(execUpdateWrestlerHp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyDownHp); \
	DECLARE_FUNCTION(execApplyWrestlerDownHpGauge); \
	DECLARE_FUNCTION(execApplyWrestlerHp); \
	DECLARE_FUNCTION(execApplyWrestlerHpGauge); \
	DECLARE_FUNCTION(execGetScale); \
	DECLARE_FUNCTION(execGetTargetActor); \
	DECLARE_FUNCTION(execSetDurationType); \
	DECLARE_FUNCTION(execSetTargetActor); \
	DECLARE_FUNCTION(execSetVisibleGauge); \
	DECLARE_FUNCTION(execShowOff); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateDownHp); \
	DECLARE_FUNCTION(execUpdatePos); \
	DECLARE_FUNCTION(execUpdateShow); \
	DECLARE_FUNCTION(execUpdateWrestlerHp);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_EVENT_PARMS \
	struct ELSSWidgetHUD_HpGauge_eventInit_Parms \
	{ \
		APlayerController* NewPlayerController; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HpGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HpGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HpGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HpGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HpGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HpGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HpGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_HpGauge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_HpGauge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HpGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HpGauge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HpGauge(UELSSWidgetHUD_HpGauge&&); \
	NO_API UELSSWidgetHUD_HpGauge(const UELSSWidgetHUD_HpGauge&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HpGauge(UELSSWidgetHUD_HpGauge&&); \
	NO_API UELSSWidgetHUD_HpGauge(const UELSSWidgetHUD_HpGauge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HpGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HpGauge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_HpGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HpGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__HpGaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpGaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__KOGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, KOGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__GaugeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, GaugeWidget); } \
	FORCEINLINE static uint32 __PPO__KOGaugeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, KOGaugeWidget); } \
	FORCEINLINE static uint32 __PPO__HPGaugeWidget() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HPGaugeWidget); } \
	FORCEINLINE static uint32 __PPO__TargetActor() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, TargetActor); } \
	FORCEINLINE static uint32 __PPO__PlayerController() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, PlayerController); } \
	FORCEINLINE static uint32 __PPO__Offset() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, Offset); } \
	FORCEINLINE static uint32 __PPO__HpMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpMaxValue); } \
	FORCEINLINE static uint32 __PPO__DownHpMaxValue() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpMaxValue); } \
	FORCEINLINE static uint32 __PPO__IdealHp() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IdealHp); } \
	FORCEINLINE static uint32 __PPO__IdealDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IdealDownHp); } \
	FORCEINLINE static uint32 __PPO__WrestlerHp() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, WrestlerHp); } \
	FORCEINLINE static uint32 __PPO__WrestlerDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, WrestlerDownHp); } \
	FORCEINLINE static uint32 __PPO__HpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpDuration); } \
	FORCEINLINE static uint32 __PPO__DownHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpDuration); } \
	FORCEINLINE static uint32 __PPO__HpElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, HpElapsed); } \
	FORCEINLINE static uint32 __PPO__DownHpElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, DownHpElapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IsCompleteHpDuration); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDownHpDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IsCompleteDownHpDuration); } \
	FORCEINLINE static uint32 __PPO__BarShowElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, BarShowElapsed); } \
	FORCEINLINE static uint32 __PPO__IsShowDownHp() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IsShowDownHp); } \
	FORCEINLINE static uint32 __PPO__IsGaugeVisible() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, IsGaugeVisible); } \
	FORCEINLINE static uint32 __PPO__MaxDistance() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MaxDistance); } \
	FORCEINLINE static uint32 __PPO__MinDistance() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MinDistance); } \
	FORCEINLINE static uint32 __PPO__MAXSCALE() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MAXSCALE); } \
	FORCEINLINE static uint32 __PPO__MINSCALE() { return STRUCT_OFFSET(UELSSWidgetHUD_HpGauge, MINSCALE); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_15_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_HpGauge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HpGauge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
