// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FDateTime;
enum class EEOSLeaderboardEvent : uint8;
 struct FEOSLeaderboardsDefinitionData;
class UEOSLeaderboard;
#ifdef ABP_200508_ELLeaderboards_generated_h
#error "ELLeaderboards.generated.h already included, missing '#pragma once' in ELLeaderboards.h"
#endif
#define ABP_200508_ELLeaderboards_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execClearLeaderboardsCache); \
	DECLARE_FUNCTION(execClearLeaderboardStatsCache); \
	DECLARE_FUNCTION(execClearUserDataMap); \
	DECLARE_FUNCTION(execClearUserScoreCache); \
	DECLARE_FUNCTION(execFindCurrentSeason); \
	DECLARE_FUNCTION(execGetCurrentMonthlySeason); \
	DECLARE_FUNCTION(execGetCurrentSeason); \
	DECLARE_FUNCTION(execGetLeaderboardId); \
	DECLARE_FUNCTION(execGetMonthlySeasonFromCurrent); \
	DECLARE_FUNCTION(execGetSeasonNum); \
	DECLARE_FUNCTION(execGetSeasonTime); \
	DECLARE_FUNCTION(execHasLeaderboard); \
	DECLARE_FUNCTION(execOnQueryLeaderboardsInfo); \
	DECLARE_FUNCTION(execSetCurrentSeason); \
	DECLARE_FUNCTION(execSetEOSLeaderboards);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execClearCache); \
	DECLARE_FUNCTION(execClearLeaderboardsCache); \
	DECLARE_FUNCTION(execClearLeaderboardStatsCache); \
	DECLARE_FUNCTION(execClearUserDataMap); \
	DECLARE_FUNCTION(execClearUserScoreCache); \
	DECLARE_FUNCTION(execFindCurrentSeason); \
	DECLARE_FUNCTION(execGetCurrentMonthlySeason); \
	DECLARE_FUNCTION(execGetCurrentSeason); \
	DECLARE_FUNCTION(execGetLeaderboardId); \
	DECLARE_FUNCTION(execGetMonthlySeasonFromCurrent); \
	DECLARE_FUNCTION(execGetSeasonNum); \
	DECLARE_FUNCTION(execGetSeasonTime); \
	DECLARE_FUNCTION(execHasLeaderboard); \
	DECLARE_FUNCTION(execOnQueryLeaderboardsInfo); \
	DECLARE_FUNCTION(execSetCurrentSeason); \
	DECLARE_FUNCTION(execSetEOSLeaderboards);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELLeaderboards(); \
	friend struct Z_Construct_UClass_UELLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UELLeaderboards, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLeaderboards) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUELLeaderboards(); \
	friend struct Z_Construct_UClass_UELLeaderboards_Statics; \
public: \
	DECLARE_CLASS(UELLeaderboards, UObject, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELLeaderboards) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELLeaderboards(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELLeaderboards) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLeaderboards); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLeaderboards); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLeaderboards(UELLeaderboards&&); \
	NO_API UELLeaderboards(const UELLeaderboards&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELLeaderboards(UELLeaderboards&&); \
	NO_API UELLeaderboards(const UELLeaderboards&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELLeaderboards); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELLeaderboards); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELLeaderboards)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELStats() { return STRUCT_OFFSET(UELLeaderboards, ELStats); } \
	FORCEINLINE static uint32 __PPO__EOSLeaderboards() { return STRUCT_OFFSET(UELLeaderboards, EOSLeaderboards); } \
	FORCEINLINE static uint32 __PPO__EOSFriend() { return STRUCT_OFFSET(UELLeaderboards, EOSFriend); } \
	FORCEINLINE static uint32 __PPO__EOSUser() { return STRUCT_OFFSET(UELLeaderboards, EOSUser); } \
	FORCEINLINE static uint32 __PPO__EOSUserManager() { return STRUCT_OFFSET(UELLeaderboards, EOSUserManager); } \
	FORCEINLINE static uint32 __PPO__LeaderboardMap() { return STRUCT_OFFSET(UELLeaderboards, LeaderboardMap); } \
	FORCEINLINE static uint32 __PPO__FriendLeaderboardMap() { return STRUCT_OFFSET(UELLeaderboards, FriendLeaderboardMap); } \
	FORCEINLINE static uint32 __PPO__UserStatsMap() { return STRUCT_OFFSET(UELLeaderboards, UserStatsMap); } \
	FORCEINLINE static uint32 __PPO__LeaderboardStatNames() { return STRUCT_OFFSET(UELLeaderboards, LeaderboardStatNames); } \
	FORCEINLINE static uint32 __PPO__LeaderboardStatDetailNames() { return STRUCT_OFFSET(UELLeaderboards, LeaderboardStatDetailNames); } \
	FORCEINLINE static uint32 __PPO__SeasonNum() { return STRUCT_OFFSET(UELLeaderboards, SeasonNum); } \
	FORCEINLINE static uint32 __PPO__CurrentSeason() { return STRUCT_OFFSET(UELLeaderboards, CurrentSeason); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_17_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELLeaderboards>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELLeaderboards_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
