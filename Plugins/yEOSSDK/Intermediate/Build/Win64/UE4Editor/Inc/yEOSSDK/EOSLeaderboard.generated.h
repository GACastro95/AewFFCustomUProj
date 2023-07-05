// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FEOSLeaderboardsDefinitionData;
struct FEOSLeaderboardsRecordData;
struct FEOSLeaderboardsUserScoreData;
struct FEOSLeaderboardAPIVersionSettings;
#ifdef YEOSSDK_EOSLeaderboard_generated_h
#error "EOSLeaderboard.generated.h already included, missing '#pragma once' in EOSLeaderboard.h"
#endif
#define YEOSSDK_EOSLeaderboard_generated_h

#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_SPARSE_DATA
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetLeaderboardDefinitionDataFromCache); \
	DECLARE_FUNCTION(execGetLeaderboardRecordDataFromCache); \
	DECLARE_FUNCTION(execGetLeaderboardUserScoreDataFromCache); \
	DECLARE_FUNCTION(execRequestQueryLeaderboardInfo); \
	DECLARE_FUNCTION(execRequestQueryRanks); \
	DECLARE_FUNCTION(execRequestQueryUserScores); \
	DECLARE_FUNCTION(execSetLeaderboardApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetLeaderboardDefinitionDataFromCache); \
	DECLARE_FUNCTION(execGetLeaderboardRecordDataFromCache); \
	DECLARE_FUNCTION(execGetLeaderboardUserScoreDataFromCache); \
	DECLARE_FUNCTION(execRequestQueryLeaderboardInfo); \
	DECLARE_FUNCTION(execRequestQueryRanks); \
	DECLARE_FUNCTION(execRequestQueryUserScores); \
	DECLARE_FUNCTION(execSetLeaderboardApiVersion);


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUEOSLeaderboard(); \
	friend struct Z_Construct_UClass_UEOSLeaderboard_Statics; \
public: \
	DECLARE_CLASS(UEOSLeaderboard, UEOSStats, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSLeaderboard)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUEOSLeaderboard(); \
	friend struct Z_Construct_UClass_UEOSLeaderboard_Statics; \
public: \
	DECLARE_CLASS(UEOSLeaderboard, UEOSStats, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/yEOSSDK"), NO_API) \
	DECLARE_SERIALIZER(UEOSLeaderboard)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UEOSLeaderboard(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UEOSLeaderboard) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSLeaderboard); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSLeaderboard(UEOSLeaderboard&&); \
	NO_API UEOSLeaderboard(const UEOSLeaderboard&); \
public:


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UEOSLeaderboard(UEOSLeaderboard&&); \
	NO_API UEOSLeaderboard(const UEOSLeaderboard&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UEOSLeaderboard); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UEOSLeaderboard); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UEOSLeaderboard)


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_cOwnRequests() { return STRUCT_OFFSET(UEOSLeaderboard, m_cOwnRequests); }


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_13_PROLOG
#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_RPC_WRAPPERS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_INCLASS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_SPARSE_DATA \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> YEOSSDK_API UClass* StaticClass<class UEOSLeaderboard>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Plugins_yEOSSDK_Source_yEOSSDK_Public_EOSLeaderboard_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
