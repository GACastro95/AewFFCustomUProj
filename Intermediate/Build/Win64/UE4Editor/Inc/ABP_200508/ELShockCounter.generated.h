// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELShockCounter_generated_h
#error "ELShockCounter.generated.h already included, missing '#pragma once' in ELShockCounter.h"
#endif
#define ABP_200508_ELShockCounter_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearRepeatLimit_N); \
	DECLARE_FUNCTION(execGetShockCounterValue_N); \
	DECLARE_FUNCTION(execIsChangeGroggyState_N); \
	DECLARE_FUNCTION(execIsRise_N); \
	DECLARE_FUNCTION(execSetCounterValue_N); \
	DECLARE_FUNCTION(execSubCounterValue_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearRepeatLimit_N); \
	DECLARE_FUNCTION(execGetShockCounterValue_N); \
	DECLARE_FUNCTION(execIsChangeGroggyState_N); \
	DECLARE_FUNCTION(execIsRise_N); \
	DECLARE_FUNCTION(execSetCounterValue_N); \
	DECLARE_FUNCTION(execSubCounterValue_N);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELShockCounter(); \
	friend struct Z_Construct_UClass_UELShockCounter_Statics; \
public: \
	DECLARE_CLASS(UELShockCounter, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELShockCounter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_INCLASS \
private: \
	static void StaticRegisterNativesUELShockCounter(); \
	friend struct Z_Construct_UClass_UELShockCounter_Statics; \
public: \
	DECLARE_CLASS(UELShockCounter, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELShockCounter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELShockCounter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELShockCounter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShockCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShockCounter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShockCounter(UELShockCounter&&); \
	NO_API UELShockCounter(const UELShockCounter&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELShockCounter(UELShockCounter&&); \
	NO_API UELShockCounter(const UELShockCounter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELShockCounter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELShockCounter); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UELShockCounter)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ShockCounterParam_N() { return STRUCT_OFFSET(UELShockCounter, ShockCounterParam_N); } \
	FORCEINLINE static uint32 __PPO__MiniGameMashParam_N() { return STRUCT_OFFSET(UELShockCounter, MiniGameMashParam_N); } \
	FORCEINLINE static uint32 __PPO__MiniGameMashBonusParam_N() { return STRUCT_OFFSET(UELShockCounter, MiniGameMashBonusParam_N); } \
	FORCEINLINE static uint32 __PPO__CounterValue_N() { return STRUCT_OFFSET(UELShockCounter, CounterValue_N); } \
	FORCEINLINE static uint32 __PPO__AdditionalDownSecond_N() { return STRUCT_OFFSET(UELShockCounter, AdditionalDownSecond_N); } \
	FORCEINLINE static uint32 __PPO__RingDownSec_N() { return STRUCT_OFFSET(UELShockCounter, RingDownSec_N); } \
	FORCEINLINE static uint32 __PPO__ArenaDownSec_N() { return STRUCT_OFFSET(UELShockCounter, ArenaDownSec_N); } \
	FORCEINLINE static uint32 __PPO__MashBonusSecond_N() { return STRUCT_OFFSET(UELShockCounter, MashBonusSecond_N); } \
	FORCEINLINE static uint32 __PPO__MashBonusTotalSubSec_N() { return STRUCT_OFFSET(UELShockCounter, MashBonusTotalSubSec_N); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_9_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h_11_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELShockCounter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELShockCounter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
