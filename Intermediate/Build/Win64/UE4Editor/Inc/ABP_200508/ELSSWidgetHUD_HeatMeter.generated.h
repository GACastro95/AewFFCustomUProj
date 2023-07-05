// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELSSWidgetHUD_HeatMeter_generated_h
#error "ELSSWidgetHUD_HeatMeter.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_HeatMeter.h"
#endif
#define ABP_200508_ELSSWidgetHUD_HeatMeter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyHeatMeter); \
	DECLARE_FUNCTION(execApplyHeatMeterGauge); \
	DECLARE_FUNCTION(execOnHeatLevelUp); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyHeatMeter); \
	DECLARE_FUNCTION(execApplyHeatMeterGauge); \
	DECLARE_FUNCTION(execOnHeatLevelUp); \
	DECLARE_FUNCTION(execUpdate);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_EVENT_PARMS \
	struct ELSSWidgetHUD_HeatMeter_eventApplyHeatLevelText_Parms \
	{ \
		int32 inHeatLevel; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HeatMeter(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HeatMeter, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HeatMeter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_HeatMeter(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_HeatMeter_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_HeatMeter, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_HeatMeter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_HeatMeter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_HeatMeter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HeatMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HeatMeter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HeatMeter(UELSSWidgetHUD_HeatMeter&&); \
	NO_API UELSSWidgetHUD_HeatMeter(const UELSSWidgetHUD_HeatMeter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_HeatMeter(UELSSWidgetHUD_HeatMeter&&); \
	NO_API UELSSWidgetHUD_HeatMeter(const UELSSWidgetHUD_HeatMeter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_HeatMeter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_HeatMeter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_HeatMeter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__HeatMeterGaugeMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeterGaugeMaterial); } \
	FORCEINLINE static uint32 __PPO__HeatMeterGaugeDiffMaterial() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeterGaugeDiffMaterial); } \
	FORCEINLINE static uint32 __PPO__HeatMeaterLvUp() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeaterLvUp); } \
	FORCEINLINE static uint32 __PPO__HeatMeaterAdd() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatMeaterAdd); } \
	FORCEINLINE static uint32 __PPO__HeatLevel() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatLevel); } \
	FORCEINLINE static uint32 __PPO__IdealHeatLevel() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, IdealHeatLevel); } \
	FORCEINLINE static uint32 __PPO__HeatExpRatio() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, HeatExpRatio); } \
	FORCEINLINE static uint32 __PPO__IdealHeatExpRatio() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, IdealHeatExpRatio); } \
	FORCEINLINE static uint32 __PPO__Duration() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, Duration); } \
	FORCEINLINE static uint32 __PPO__Elapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, Elapsed); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_HeatMeter, IsCompleteDuration); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_9_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_HeatMeter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_HeatMeter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
