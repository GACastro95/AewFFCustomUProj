// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class ESSAttentionReason : uint8;
enum class ESSAttentionGaugeStateLevel : uint8;
#ifdef ABP_200508_ELSSWidgetHUD_AttentionGauge_generated_h
#error "ELSSWidgetHUD_AttentionGauge.generated.h already included, missing '#pragma once' in ELSSWidgetHUD_AttentionGauge.h"
#endif
#define ABP_200508_ELSSWidgetHUD_AttentionGauge_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execApplyAttentionBoostValue); \
	DECLARE_FUNCTION(execApplyAttentionPts); \
	DECLARE_FUNCTION(execApplyAttentionValue); \
	DECLARE_FUNCTION(execApplyIconAnim); \
	DECLARE_FUNCTION(execApplyMaxAttentionValue); \
	DECLARE_FUNCTION(execGetAttentionPointFromStack); \
	DECLARE_FUNCTION(execGetBoostText); \
	DECLARE_FUNCTION(execMovePointArray); \
	DECLARE_FUNCTION(execResetAttentionGauge); \
	DECLARE_FUNCTION(execSetAttentionPointToStack); \
	DECLARE_FUNCTION(execSetVisibleFeverEffect); \
	DECLARE_FUNCTION(execSortToIndex); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAttentionValue);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execApplyAttentionBoostValue); \
	DECLARE_FUNCTION(execApplyAttentionPts); \
	DECLARE_FUNCTION(execApplyAttentionValue); \
	DECLARE_FUNCTION(execApplyIconAnim); \
	DECLARE_FUNCTION(execApplyMaxAttentionValue); \
	DECLARE_FUNCTION(execGetAttentionPointFromStack); \
	DECLARE_FUNCTION(execGetBoostText); \
	DECLARE_FUNCTION(execMovePointArray); \
	DECLARE_FUNCTION(execResetAttentionGauge); \
	DECLARE_FUNCTION(execSetAttentionPointToStack); \
	DECLARE_FUNCTION(execSetVisibleFeverEffect); \
	DECLARE_FUNCTION(execSortToIndex); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateAttentionValue);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_EVENT_PARMS \
	struct ELSSWidgetHUD_AttentionGauge_eventApplyBoostText_Parms \
	{ \
		float InAttentionBoostValue; \
	}; \
	struct ELSSWidgetHUD_AttentionGauge_eventOnEndFeverAnim_Parms \
	{ \
		bool InPlaySound; \
	}; \
	struct ELSSWidgetHUD_AttentionGauge_eventOnStartFeverAnim_Parms \
	{ \
		bool InPlaySound; \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AttentionGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AttentionGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AttentionGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELSSWidgetHUD_AttentionGauge(); \
	friend struct Z_Construct_UClass_UELSSWidgetHUD_AttentionGauge_Statics; \
public: \
	DECLARE_CLASS(UELSSWidgetHUD_AttentionGauge, UELSSWidgetBase, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELSSWidgetHUD_AttentionGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELSSWidgetHUD_AttentionGauge(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELSSWidgetHUD_AttentionGauge) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AttentionGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AttentionGauge); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AttentionGauge(UELSSWidgetHUD_AttentionGauge&&); \
	NO_API UELSSWidgetHUD_AttentionGauge(const UELSSWidgetHUD_AttentionGauge&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELSSWidgetHUD_AttentionGauge(UELSSWidgetHUD_AttentionGauge&&); \
	NO_API UELSSWidgetHUD_AttentionGauge(const UELSSWidgetHUD_AttentionGauge&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELSSWidgetHUD_AttentionGauge); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELSSWidgetHUD_AttentionGauge); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELSSWidgetHUD_AttentionGauge)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__FeverEndAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverEndAnim); } \
	FORCEINLINE static uint32 __PPO__FeverStartAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverStartAnim); } \
	FORCEINLINE static uint32 __PPO__FeverLoopAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, FeverLoopAnim); } \
	FORCEINLINE static uint32 __PPO__CrowdIconLowAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconLowAnim); } \
	FORCEINLINE static uint32 __PPO__CrowdIconMidAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconMidAnim); } \
	FORCEINLINE static uint32 __PPO__CrowdIconHighAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, CrowdIconHighAnim); } \
	FORCEINLINE static uint32 __PPO__BuffInAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, BuffInAnim); } \
	FORCEINLINE static uint32 __PPO__BuffOutAnim() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, BuffOutAnim); } \
	FORCEINLINE static uint32 __PPO__AttentionPtsM_1() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_1); } \
	FORCEINLINE static uint32 __PPO__AttentionPtsM_10() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_10); } \
	FORCEINLINE static uint32 __PPO__AttentionPtsM_100() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_100); } \
	FORCEINLINE static uint32 __PPO__AttentionPtsM_1000() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPtsM_1000); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPtsM_1() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_1); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPtsM_10() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_10); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPtsM_100() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_100); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPtsM_1000() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPtsM_1000); } \
	FORCEINLINE static uint32 __PPO__PtsVerticalBox() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, PtsVerticalBox); } \
	FORCEINLINE static uint32 __PPO__AttentionPts_1000Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_1000Widget); } \
	FORCEINLINE static uint32 __PPO__AttentionPts_100Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_100Widget); } \
	FORCEINLINE static uint32 __PPO__AttentionPts_10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionPts_10Widget); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPts_1000Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_1000Widget); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPts_100Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_100Widget); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionPts_10Widget() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionPts_10Widget); } \
	FORCEINLINE static uint32 __PPO__PointArray() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, PointArray); } \
	FORCEINLINE static uint32 __PPO__AddValueArray() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AddValueArray); } \
	FORCEINLINE static uint32 __PPO__AttentionReasonArray() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionReasonArray); } \
	FORCEINLINE static uint32 __PPO__IsCompleteDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, IsCompleteDuration); } \
	FORCEINLINE static uint32 __PPO__IsFeverTime() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, IsFeverTime); } \
	FORCEINLINE static uint32 __PPO__IsBoostTextShow() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, IsBoostTextShow); } \
	FORCEINLINE static uint32 __PPO__AttentionElapsed() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionElapsed); } \
	FORCEINLINE static uint32 __PPO__MaxAttentionValue() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, MaxAttentionValue); } \
	FORCEINLINE static uint32 __PPO__AttentionDuration() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionDuration); } \
	FORCEINLINE static uint32 __PPO__AttentionValue() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, AttentionValue); } \
	FORCEINLINE static uint32 __PPO__IdealAttentionValue() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, IdealAttentionValue); } \
	FORCEINLINE static uint32 __PPO__StackIndex() { return STRUCT_OFFSET(UELSSWidgetHUD_AttentionGauge, StackIndex); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_14_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELSSWidgetHUD_AttentionGauge>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSWidgetHUD_AttentionGauge_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
