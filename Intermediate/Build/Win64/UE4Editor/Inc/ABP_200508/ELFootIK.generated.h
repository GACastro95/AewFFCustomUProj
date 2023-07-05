// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
struct FVector;
#ifdef ABP_200508_ELFootIK_generated_h
#error "ELFootIK.generated.h already included, missing '#pragma once' in ELFootIK.h"
#endif
#define ABP_200508_ELFootIK_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddFootOverlappedActor); \
	DECLARE_FUNCTION(execGetHipsOffset); \
	DECLARE_FUNCTION(execIsCheckFloor); \
	DECLARE_FUNCTION(execRemoveFootOverlappedActor); \
	DECLARE_FUNCTION(execResetHipsOffset); \
	DECLARE_FUNCTION(execSetUseStandTraceOffset);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddFootOverlappedActor); \
	DECLARE_FUNCTION(execGetHipsOffset); \
	DECLARE_FUNCTION(execIsCheckFloor); \
	DECLARE_FUNCTION(execRemoveFootOverlappedActor); \
	DECLARE_FUNCTION(execResetHipsOffset); \
	DECLARE_FUNCTION(execSetUseStandTraceOffset);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELFootIK(); \
	friend struct Z_Construct_UClass_UELFootIK_Statics; \
public: \
	DECLARE_CLASS(UELFootIK, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_INCLASS \
private: \
	static void StaticRegisterNativesUELFootIK(); \
	friend struct Z_Construct_UClass_UELFootIK_Statics; \
public: \
	DECLARE_CLASS(UELFootIK, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELFootIK(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELFootIK) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELFootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELFootIK); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELFootIK(UELFootIK&&); \
	NO_API UELFootIK(const UELFootIK&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELFootIK(UELFootIK&&); \
	NO_API UELFootIK(const UELFootIK&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELFootIK); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELFootIK); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELFootIK)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__bComplexTrace() { return STRUCT_OFFSET(UELFootIK, bComplexTrace); } \
	FORCEINLINE static uint32 __PPO__HipsBoneName_L() { return STRUCT_OFFSET(UELFootIK, HipsBoneName_L); } \
	FORCEINLINE static uint32 __PPO__FootBoneName_L() { return STRUCT_OFFSET(UELFootIK, FootBoneName_L); } \
	FORCEINLINE static uint32 __PPO__FootBoneName_R() { return STRUCT_OFFSET(UELFootIK, FootBoneName_R); } \
	FORCEINLINE static uint32 __PPO__LegBoneName_L() { return STRUCT_OFFSET(UELFootIK, LegBoneName_L); } \
	FORCEINLINE static uint32 __PPO__LegBoneName_R() { return STRUCT_OFFSET(UELFootIK, LegBoneName_R); } \
	FORCEINLINE static uint32 __PPO__CompatibleSkeleton() { return STRUCT_OFFSET(UELFootIK, CompatibleSkeleton); } \
	FORCEINLINE static uint32 __PPO__TraceChannel() { return STRUCT_OFFSET(UELFootIK, TraceChannel); } \
	FORCEINLINE static uint32 __PPO__DebugTrace() { return STRUCT_OFFSET(UELFootIK, DebugTrace); } \
	FORCEINLINE static uint32 __PPO__DebugTracebyFloor() { return STRUCT_OFFSET(UELFootIK, DebugTracebyFloor); } \
	FORCEINLINE static uint32 __PPO__bMatchMode() { return STRUCT_OFFSET(UELFootIK, bMatchMode); } \
	FORCEINLINE static uint32 __PPO__LeftFoot() { return STRUCT_OFFSET(UELFootIK, LeftFoot); } \
	FORCEINLINE static uint32 __PPO__RightFoot() { return STRUCT_OFFSET(UELFootIK, RightFoot); } \
	FORCEINLINE static uint32 __PPO__FootOffset() { return STRUCT_OFFSET(UELFootIK, FootOffset); } \
	FORCEINLINE static uint32 __PPO__TraceOffsetLength() { return STRUCT_OFFSET(UELFootIK, TraceOffsetLength); } \
	FORCEINLINE static uint32 __PPO__DiffHeight() { return STRUCT_OFFSET(UELFootIK, DiffHeight); } \
	FORCEINLINE static uint32 __PPO__HipsOffset() { return STRUCT_OFFSET(UELFootIK, HipsOffset); } \
	FORCEINLINE static uint32 __PPO__bWorkHipOffset() { return STRUCT_OFFSET(UELFootIK, bWorkHipOffset); } \
	FORCEINLINE static uint32 __PPO__bOverrideHipOffset() { return STRUCT_OFFSET(UELFootIK, bOverrideHipOffset); } \
	FORCEINLINE static uint32 __PPO__OwnerScale() { return STRUCT_OFFSET(UELFootIK, OwnerScale); } \
	FORCEINLINE static uint32 __PPO__StandTraceOffsetLength() { return STRUCT_OFFSET(UELFootIK, StandTraceOffsetLength); } \
	FORCEINLINE static uint32 __PPO__bUseTraceOffsetTheStand() { return STRUCT_OFFSET(UELFootIK, bUseTraceOffsetTheStand); } \
	FORCEINLINE static uint32 __PPO__ParamIgnoreActors() { return STRUCT_OFFSET(UELFootIK, ParamIgnoreActors); } \
	FORCEINLINE static uint32 __PPO__SkelMesh() { return STRUCT_OFFSET(UELFootIK, SkelMesh); } \
	FORCEINLINE static uint32 __PPO__bIsCheckFloor() { return STRUCT_OFFSET(UELFootIK, bIsCheckFloor); } \
	FORCEINLINE static uint32 __PPO__bResetHipsOffset() { return STRUCT_OFFSET(UELFootIK, bResetHipsOffset); } \
	FORCEINLINE static uint32 __PPO__bTemporaryOverrideHipOffset() { return STRUCT_OFFSET(UELFootIK, bTemporaryOverrideHipOffset); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_14_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h_16_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELFootIK>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELFootIK_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
