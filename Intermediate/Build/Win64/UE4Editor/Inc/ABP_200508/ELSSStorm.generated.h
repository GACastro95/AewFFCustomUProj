// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FSSStormPhaseParam;
class AELSSStormAnchor;
struct FVector;
struct FVector2D;
enum class ESSStormState : uint8;
class AELSSStormZone;
enum class ESSStormPositionRelation : uint8;
#ifdef ABP_200508_ELSSStorm_generated_h
#error "ELSSStorm.generated.h already included, missing '#pragma once' in ELSSStorm.h"
#endif
#define ABP_200508_ELSSStorm_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddSchedule); \
	DECLARE_FUNCTION(execCalcAnchorLocation); \
	DECLARE_FUNCTION(execCalcCurrentPhase); \
	DECLARE_FUNCTION(execCalcIntersection); \
	DECLARE_FUNCTION(execCalcShrinkEndTime); \
	DECLARE_FUNCTION(execCalcShrinkStartTime); \
	DECLARE_FUNCTION(execCreateAnchor); \
	DECLARE_FUNCTION(execDebugDrawCourse); \
	DECLARE_FUNCTION(execDebugSetupCourse); \
	DECLARE_FUNCTION(execGetAnchor); \
	DECLARE_FUNCTION(execGetCurrentAnchor); \
	DECLARE_FUNCTION(execGetCurrentPhaseTime); \
	DECLARE_FUNCTION(execGetCurrentStormState); \
	DECLARE_FUNCTION(execGetStormState); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execIsFinalPhase); \
	DECLARE_FUNCTION(execSetupCourse); \
	DECLARE_FUNCTION(execToPositionRelation); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateZone);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddSchedule); \
	DECLARE_FUNCTION(execCalcAnchorLocation); \
	DECLARE_FUNCTION(execCalcCurrentPhase); \
	DECLARE_FUNCTION(execCalcIntersection); \
	DECLARE_FUNCTION(execCalcShrinkEndTime); \
	DECLARE_FUNCTION(execCalcShrinkStartTime); \
	DECLARE_FUNCTION(execCreateAnchor); \
	DECLARE_FUNCTION(execDebugDrawCourse); \
	DECLARE_FUNCTION(execDebugSetupCourse); \
	DECLARE_FUNCTION(execGetAnchor); \
	DECLARE_FUNCTION(execGetCurrentAnchor); \
	DECLARE_FUNCTION(execGetCurrentPhaseTime); \
	DECLARE_FUNCTION(execGetCurrentStormState); \
	DECLARE_FUNCTION(execGetStormState); \
	DECLARE_FUNCTION(execGetZone); \
	DECLARE_FUNCTION(execIsFinalPhase); \
	DECLARE_FUNCTION(execSetupCourse); \
	DECLARE_FUNCTION(execToPositionRelation); \
	DECLARE_FUNCTION(execUpdate); \
	DECLARE_FUNCTION(execUpdateZone);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_EVENT_PARMS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAELSSStorm(); \
	friend struct Z_Construct_UClass_AELSSStorm_Statics; \
public: \
	DECLARE_CLASS(AELSSStorm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStorm) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSStorm*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAELSSStorm(); \
	friend struct Z_Construct_UClass_AELSSStorm_Statics; \
public: \
	DECLARE_CLASS(AELSSStorm, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(AELSSStorm) \
	virtual UObject* _getUObject() const override { return const_cast<AELSSStorm*>(this); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AELSSStorm(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AELSSStorm) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStorm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStorm); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStorm(AELSSStorm&&); \
	NO_API AELSSStorm(const AELSSStorm&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AELSSStorm(AELSSStorm&&); \
	NO_API AELSSStorm(const AELSSStorm&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AELSSStorm); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AELSSStorm); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AELSSStorm)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CurrentTime() { return STRUCT_OFFSET(AELSSStorm, CurrentTime); } \
	FORCEINLINE static uint32 __PPO__zoneClass() { return STRUCT_OFFSET(AELSSStorm, zoneClass); } \
	FORCEINLINE static uint32 __PPO__zone() { return STRUCT_OFFSET(AELSSStorm, zone); } \
	FORCEINLINE static uint32 __PPO__Anchors() { return STRUCT_OFFSET(AELSSStorm, Anchors); } \
	FORCEINLINE static uint32 __PPO__finalParamTable() { return STRUCT_OFFSET(AELSSStorm, finalParamTable); } \
	FORCEINLINE static uint32 __PPO__finalParam() { return STRUCT_OFFSET(AELSSStorm, finalParam); } \
	FORCEINLINE static uint32 __PPO__finalLocation() { return STRUCT_OFFSET(AELSSStorm, finalLocation); } \
	FORCEINLINE static uint32 __PPO__finalOffset() { return STRUCT_OFFSET(AELSSStorm, finalOffset); } \
	FORCEINLINE static uint32 __PPO__EndShrinkSE_PlayTime() { return STRUCT_OFFSET(AELSSStorm, EndShrinkSE_PlayTime); } \
	FORCEINLINE static uint32 __PPO__StormParams() { return STRUCT_OFFSET(AELSSStorm, StormParams); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_19_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class AELSSStorm>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELSSStorm_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
