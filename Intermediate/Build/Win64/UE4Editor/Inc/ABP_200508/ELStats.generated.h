// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FELStatDataCache;
enum class EEOSStatsEvent : uint8;
struct FEOSStatData;
enum class EYGS2ErrorType : uint8;
class UYGS2RequestBase;
class UEOSStats;
enum class EPlatformType : uint8;
class UELYGS2Manager;
#ifdef ABP_200508_ELStats_generated_h
#error "ELStats.generated.h already included, missing '#pragma once' in ELStats.h"
#endif
#define ABP_200508_ELStats_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_20_DELEGATE \
static inline void FOnQueryStats_DelegateWrapper(const FMulticastScriptDelegate& OnQueryStats) \
{ \
	OnQueryStats.ProcessMulticastDelegate<UObject>(NULL); \
}


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddAndSetStats); \
	DECLARE_FUNCTION(execAddRankMatchSeasonCountStats); \
	DECLARE_FUNCTION(execAddStats); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execClearDisconnectionCount); \
	DECLARE_FUNCTION(execClearStats); \
	DECLARE_FUNCTION(execGetStatDataCache); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execIngestDirtyEOSStats); \
	DECLARE_FUNCTION(execIngestDirtyStats); \
	DECLARE_FUNCTION(execIngestDirtyYGS2Stats); \
	DECLARE_FUNCTION(execIngestDisconnectionStats); \
	DECLARE_FUNCTION(execIngestEOSStats); \
	DECLARE_FUNCTION(execIngestYGS2StatsGroup); \
	DECLARE_FUNCTION(execIsFirstQueryCompleted); \
	DECLARE_FUNCTION(execMaxStats); \
	DECLARE_FUNCTION(execMinStats); \
	DECLARE_FUNCTION(execOnQueryFirstStatsCompleted); \
	DECLARE_FUNCTION(execOnQueryStatsCompleted); \
	DECLARE_FUNCTION(execOnYGS2ResponseIngest); \
	DECLARE_FUNCTION(execOnYGS2ResponseQuery); \
	DECLARE_FUNCTION(execRequestQueryStats); \
	DECLARE_FUNCTION(execRequestQueryStatsFromSaveData); \
	DECLARE_FUNCTION(execRequestQueryYGS2StatsGroup); \
	DECLARE_FUNCTION(execSetDisconnectionFlag); \
	DECLARE_FUNCTION(execSetEOSStats); \
	DECLARE_FUNCTION(execSetSeason); \
	DECLARE_FUNCTION(execSetStats); \
	DECLARE_FUNCTION(execSetUserId); \
	DECLARE_FUNCTION(execSetYGS2Manager);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddAndSetStats); \
	DECLARE_FUNCTION(execAddRankMatchSeasonCountStats); \
	DECLARE_FUNCTION(execAddStats); \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execClearDisconnectionCount); \
	DECLARE_FUNCTION(execClearStats); \
	DECLARE_FUNCTION(execGetStatDataCache); \
	DECLARE_FUNCTION(execGetStats); \
	DECLARE_FUNCTION(execIngestDirtyEOSStats); \
	DECLARE_FUNCTION(execIngestDirtyStats); \
	DECLARE_FUNCTION(execIngestDirtyYGS2Stats); \
	DECLARE_FUNCTION(execIngestDisconnectionStats); \
	DECLARE_FUNCTION(execIngestEOSStats); \
	DECLARE_FUNCTION(execIngestYGS2StatsGroup); \
	DECLARE_FUNCTION(execIsFirstQueryCompleted); \
	DECLARE_FUNCTION(execMaxStats); \
	DECLARE_FUNCTION(execMinStats); \
	DECLARE_FUNCTION(execOnQueryFirstStatsCompleted); \
	DECLARE_FUNCTION(execOnQueryStatsCompleted); \
	DECLARE_FUNCTION(execOnYGS2ResponseIngest); \
	DECLARE_FUNCTION(execOnYGS2ResponseQuery); \
	DECLARE_FUNCTION(execRequestQueryStats); \
	DECLARE_FUNCTION(execRequestQueryStatsFromSaveData); \
	DECLARE_FUNCTION(execRequestQueryYGS2StatsGroup); \
	DECLARE_FUNCTION(execSetDisconnectionFlag); \
	DECLARE_FUNCTION(execSetEOSStats); \
	DECLARE_FUNCTION(execSetSeason); \
	DECLARE_FUNCTION(execSetStats); \
	DECLARE_FUNCTION(execSetUserId); \
	DECLARE_FUNCTION(execSetYGS2Manager);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELStats(); \
	friend struct Z_Construct_UClass_UELStats_Statics; \
public: \
	DECLARE_CLASS(UELStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELStats) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_INCLASS \
private: \
	static void StaticRegisterNativesUELStats(); \
	friend struct Z_Construct_UClass_UELStats_Statics; \
public: \
	DECLARE_CLASS(UELStats, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELStats) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELStats(UELStats&&); \
	NO_API UELStats(const UELStats&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELStats(UELStats&&); \
	NO_API UELStats(const UELStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELStats)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__EOSStats() { return STRUCT_OFFSET(UELStats, EOSStats); } \
	FORCEINLINE static uint32 __PPO__YGS2Manager() { return STRUCT_OFFSET(UELStats, YGS2Manager); } \
	FORCEINLINE static uint32 __PPO__StatsMap() { return STRUCT_OFFSET(UELStats, StatsMap); } \
	FORCEINLINE static uint32 __PPO__bDirtySave() { return STRUCT_OFFSET(UELStats, bDirtySave); } \
	FORCEINLINE static uint32 __PPO__bDirtyEOS() { return STRUCT_OFFSET(UELStats, bDirtyEOS); } \
	FORCEINLINE static uint32 __PPO__bFirstQueryCompleted() { return STRUCT_OFFSET(UELStats, bFirstQueryCompleted); } \
	FORCEINLINE static uint32 __PPO__RequiredStatNames() { return STRUCT_OFFSET(UELStats, RequiredStatNames); } \
	FORCEINLINE static uint32 __PPO__YGSStatsGroups() { return STRUCT_OFFSET(UELStats, YGSStatsGroups); } \
	FORCEINLINE static uint32 __PPO__RankMatchSeason() { return STRUCT_OFFSET(UELStats, RankMatchSeason); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_16_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
