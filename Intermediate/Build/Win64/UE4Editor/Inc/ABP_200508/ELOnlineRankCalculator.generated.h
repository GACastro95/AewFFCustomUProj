// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ABP_200508_ELOnlineRankCalculator_generated_h
#error "ELOnlineRankCalculator.generated.h already included, missing '#pragma once' in ELOnlineRankCalculator.h"
#endif
#define ABP_200508_ELOnlineRankCalculator_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execCalcAddPoint); \
	DECLARE_FUNCTION(execCalcRank); \
	DECLARE_FUNCTION(execClampRankPoint); \
	DECLARE_FUNCTION(execGetRankFromRankPoint); \
	DECLARE_FUNCTION(execGetRankGroupName); \
	DECLARE_FUNCTION(execGetRankName); \
	DECLARE_FUNCTION(execGetRankPointRatio); \
	DECLARE_FUNCTION(execGetSSPlayerRankFromPlayerRankPoint);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execCalcAddPoint); \
	DECLARE_FUNCTION(execCalcRank); \
	DECLARE_FUNCTION(execClampRankPoint); \
	DECLARE_FUNCTION(execGetRankFromRankPoint); \
	DECLARE_FUNCTION(execGetRankGroupName); \
	DECLARE_FUNCTION(execGetRankName); \
	DECLARE_FUNCTION(execGetRankPointRatio); \
	DECLARE_FUNCTION(execGetSSPlayerRankFromPlayerRankPoint);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELOnlineRankCalculator(); \
	friend struct Z_Construct_UClass_UELOnlineRankCalculator_Statics; \
public: \
	DECLARE_CLASS(UELOnlineRankCalculator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOnlineRankCalculator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUELOnlineRankCalculator(); \
	friend struct Z_Construct_UClass_UELOnlineRankCalculator_Statics; \
public: \
	DECLARE_CLASS(UELOnlineRankCalculator, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELOnlineRankCalculator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELOnlineRankCalculator(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELOnlineRankCalculator) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOnlineRankCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOnlineRankCalculator); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOnlineRankCalculator(UELOnlineRankCalculator&&); \
	NO_API UELOnlineRankCalculator(const UELOnlineRankCalculator&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELOnlineRankCalculator(UELOnlineRankCalculator&&); \
	NO_API UELOnlineRankCalculator(const UELOnlineRankCalculator&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELOnlineRankCalculator); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELOnlineRankCalculator); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELOnlineRankCalculator)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__DefaultRankTable() { return STRUCT_OFFSET(UELOnlineRankCalculator, DefaultRankTable); } \
	FORCEINLINE static uint32 __PPO__RankArray() { return STRUCT_OFFSET(UELOnlineRankCalculator, RankArray); } \
	FORCEINLINE static uint32 __PPO__SSPlayerRankTable() { return STRUCT_OFFSET(UELOnlineRankCalculator, SSPlayerRankTable); } \
	FORCEINLINE static uint32 __PPO__WinPoint() { return STRUCT_OFFSET(UELOnlineRankCalculator, WinPoint); } \
	FORCEINLINE static uint32 __PPO__LosePoint() { return STRUCT_OFFSET(UELOnlineRankCalculator, LosePoint); } \
	FORCEINLINE static uint32 __PPO__WinStreakCoeff() { return STRUCT_OFFSET(UELOnlineRankCalculator, WinStreakCoeff); } \
	FORCEINLINE static uint32 __PPO__WinStreakCoeff2() { return STRUCT_OFFSET(UELOnlineRankCalculator, WinStreakCoeff2); } \
	FORCEINLINE static uint32 __PPO__LoseStreakCoeff() { return STRUCT_OFFSET(UELOnlineRankCalculator, LoseStreakCoeff); } \
	FORCEINLINE static uint32 __PPO__LoseStreakCoeff2() { return STRUCT_OFFSET(UELOnlineRankCalculator, LoseStreakCoeff2); } \
	FORCEINLINE static uint32 __PPO__RankDiffWinBonus() { return STRUCT_OFFSET(UELOnlineRankCalculator, RankDiffWinBonus); } \
	FORCEINLINE static uint32 __PPO__RankDiffLosePenalty() { return STRUCT_OFFSET(UELOnlineRankCalculator, RankDiffLosePenalty); } \
	FORCEINLINE static uint32 __PPO__LeaderboardRankMax() { return STRUCT_OFFSET(UELOnlineRankCalculator, LeaderboardRankMax); } \
	FORCEINLINE static uint32 __PPO__RankPointMax() { return STRUCT_OFFSET(UELOnlineRankCalculator, RankPointMax); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_10_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELOnlineRankCalculator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELOnlineRankCalculator_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
