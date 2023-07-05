// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSStatData;
struct FEOSIngestStatParam;
struct FEOSQueryStatOption;
struct FEOSStatsAPIVersionSettings;
#ifdef YEOSSDK_EOSStats_generated_h
#error "EOSStats.generated.h already included, missing '#pragma once' in EOSStats.h"
#endif
#define YEOSSDK_EOSStats_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetStat); \
	DECLARE_FUNCTION(execGetStatByName); \
	DECLARE_FUNCTION(execGetStatsCount); \
	DECLARE_FUNCTION(execGetTargetStat); \
	DECLARE_FUNCTION(execGetTargetStatByName); \
	DECLARE_FUNCTION(execGetTargetStatsCount); \
	DECLARE_FUNCTION(execRequestIngestStat); \
	DECLARE_FUNCTION(execRequestIngestStats); \
	DECLARE_FUNCTION(execRequestQueryStats); \
	DECLARE_FUNCTION(execRequestQueryTargetStats); \
	DECLARE_FUNCTION(execSetApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetStat); \
	DECLARE_FUNCTION(execGetStatByName); \
	DECLARE_FUNCTION(execGetStatsCount); \
	DECLARE_FUNCTION(execGetTargetStat); \
	DECLARE_FUNCTION(execGetTargetStatByName); \
	DECLARE_FUNCTION(execGetTargetStatsCount); \
	DECLARE_FUNCTION(execRequestIngestStat); \
	DECLARE_FUNCTION(execRequestIngestStats); \
	DECLARE_FUNCTION(execRequestQueryStats); \
	DECLARE_FUNCTION(execRequestQueryTargetStats); \
	DECLARE_FUNCTION(execSetApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSStats(); \
	friend struct Z_Construct_UClass_UEOSStats_Statics; \
public: \
	DECLARE_CLASS(UEOSStats, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSStats)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSStats(); \
	friend struct Z_Construct_UClass_UEOSStats_Statics; \
public: \
	DECLARE_CLASS(UEOSStats, UEOSIDs, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSStats)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSStats(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSStats) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSStats); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSStats(UEOSStats&&); \
	NO_API UEOSStats(const UEOSStats&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSStats(UEOSStats&&); \
	NO_API UEOSStats(const UEOSStats&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSStats); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSStats); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSStats)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cOwnStatRequests() { return STRUCT_OFFSET(UEOSStats, m_cOwnStatRequests); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSStats>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSStats_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
