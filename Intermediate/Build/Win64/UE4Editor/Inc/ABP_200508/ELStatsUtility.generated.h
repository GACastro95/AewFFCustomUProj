// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class EELGlobalStat : uint8;
enum class EELSpecialStat : uint8;
enum class EWrestlerID_N : uint8;
enum class EGender : uint8;
enum class EELWrestlerStat : uint8;
class UELStats;
struct FUserProfileColorParam;
#ifdef ABP_200508_ELStatsUtility_generated_h
#error "ELStatsUtility.generated.h already included, missing '#pragma once' in ELStatsUtility.h"
#endif
#define ABP_200508_ELStatsUtility_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execAddDisconnectionPenalty); \
	DECLARE_FUNCTION(execAddGlobalStat); \
	DECLARE_FUNCTION(execAddRankMatchSeasonCountStats); \
	DECLARE_FUNCTION(execAddSpecialStat); \
	DECLARE_FUNCTION(execAddSSAttentionPoint); \
	DECLARE_FUNCTION(execAddSSFeverCount); \
	DECLARE_FUNCTION(execAddSSKillCount); \
	DECLARE_FUNCTION(execAddSSPlayCount); \
	DECLARE_FUNCTION(execAddSSStarCount); \
	DECLARE_FUNCTION(execAddSSTop5Count); \
	DECLARE_FUNCTION(execAddSSTopCount); \
	DECLARE_FUNCTION(execAddSSTotalScore); \
	DECLARE_FUNCTION(execAddSSWrestlerCount); \
	DECLARE_FUNCTION(execAddStat); \
	DECLARE_FUNCTION(execAddWrestlerStat); \
	DECLARE_FUNCTION(execClearCheatPenalty); \
	DECLARE_FUNCTION(execGetBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execGetCasinoBattleRoyaleLastWinnerStat); \
	DECLARE_FUNCTION(execGetDisconnectionCount); \
	DECLARE_FUNCTION(execGetDisconnectionLevel); \
	DECLARE_FUNCTION(execGetDisconnectionPenaltyCount); \
	DECLARE_FUNCTION(execGetDisconnectionStats); \
	DECLARE_FUNCTION(execGetELStats); \
	DECLARE_FUNCTION(execGetGlobalStat); \
	DECLARE_FUNCTION(execGetPenaltyDisconnectionCount); \
	DECLARE_FUNCTION(execGetPlatformMaxStats); \
	DECLARE_FUNCTION(execGetPlatformPostfix); \
	DECLARE_FUNCTION(execGetPlayerRank); \
	DECLARE_FUNCTION(execGetSpecialStat); \
	DECLARE_FUNCTION(execGetSSAttentionPoint); \
	DECLARE_FUNCTION(execGetSSFeverCount); \
	DECLARE_FUNCTION(execGetSSInGameFlag); \
	DECLARE_FUNCTION(execGetSSKillCount); \
	DECLARE_FUNCTION(execGetSSMaxScore); \
	DECLARE_FUNCTION(execGetSSPlayCount); \
	DECLARE_FUNCTION(execGetSSRankPoint); \
	DECLARE_FUNCTION(execGetSSStarCount); \
	DECLARE_FUNCTION(execGetSSStarCountName); \
	DECLARE_FUNCTION(execGetSSTop5Count); \
	DECLARE_FUNCTION(execGetSSTopCount); \
	DECLARE_FUNCTION(execGetSSTotalScore); \
	DECLARE_FUNCTION(execGetSSWrestlerCount); \
	DECLARE_FUNCTION(execGetSSWrestlerCountName); \
	DECLARE_FUNCTION(execGetStat); \
	DECLARE_FUNCTION(execGetWarningDisconnectionCount); \
	DECLARE_FUNCTION(execGetWrestlerStat); \
	DECLARE_FUNCTION(execIngestDirtyStats); \
	DECLARE_FUNCTION(execIngestDisconnectionStats); \
	DECLARE_FUNCTION(execMaxGlobalStat); \
	DECLARE_FUNCTION(execMaxStat); \
	DECLARE_FUNCTION(execMaxWrestlerStat); \
	DECLARE_FUNCTION(execMinGlobalStat); \
	DECLARE_FUNCTION(execMinStat); \
	DECLARE_FUNCTION(execMinWrestlerStat); \
	DECLARE_FUNCTION(execSetBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execSetCasinoBattleRoyaleLastWinnerStat); \
	DECLARE_FUNCTION(execSetCheatPenalty); \
	DECLARE_FUNCTION(execSetDebugDisconnectionLevel); \
	DECLARE_FUNCTION(execSetExternalAccountId); \
	DECLARE_FUNCTION(execSetGlobalStat); \
	DECLARE_FUNCTION(execSetPlayerBadgesToStat); \
	DECLARE_FUNCTION(execSetPlayerIconToStat); \
	DECLARE_FUNCTION(execSetPlayerRank); \
	DECLARE_FUNCTION(execSetPlayerRankPoint); \
	DECLARE_FUNCTION(execSetSpecialStat); \
	DECLARE_FUNCTION(execSetSSInGameFlag); \
	DECLARE_FUNCTION(execSetSSMaxScore); \
	DECLARE_FUNCTION(execSetSSRankPoint); \
	DECLARE_FUNCTION(execSetStat); \
	DECLARE_FUNCTION(execSetWrestlerStat);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execAddDisconnectionPenalty); \
	DECLARE_FUNCTION(execAddGlobalStat); \
	DECLARE_FUNCTION(execAddRankMatchSeasonCountStats); \
	DECLARE_FUNCTION(execAddSpecialStat); \
	DECLARE_FUNCTION(execAddSSAttentionPoint); \
	DECLARE_FUNCTION(execAddSSFeverCount); \
	DECLARE_FUNCTION(execAddSSKillCount); \
	DECLARE_FUNCTION(execAddSSPlayCount); \
	DECLARE_FUNCTION(execAddSSStarCount); \
	DECLARE_FUNCTION(execAddSSTop5Count); \
	DECLARE_FUNCTION(execAddSSTopCount); \
	DECLARE_FUNCTION(execAddSSTotalScore); \
	DECLARE_FUNCTION(execAddSSWrestlerCount); \
	DECLARE_FUNCTION(execAddStat); \
	DECLARE_FUNCTION(execAddWrestlerStat); \
	DECLARE_FUNCTION(execClearCheatPenalty); \
	DECLARE_FUNCTION(execGetBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execGetCasinoBattleRoyaleLastWinnerStat); \
	DECLARE_FUNCTION(execGetDisconnectionCount); \
	DECLARE_FUNCTION(execGetDisconnectionLevel); \
	DECLARE_FUNCTION(execGetDisconnectionPenaltyCount); \
	DECLARE_FUNCTION(execGetDisconnectionStats); \
	DECLARE_FUNCTION(execGetELStats); \
	DECLARE_FUNCTION(execGetGlobalStat); \
	DECLARE_FUNCTION(execGetPenaltyDisconnectionCount); \
	DECLARE_FUNCTION(execGetPlatformMaxStats); \
	DECLARE_FUNCTION(execGetPlatformPostfix); \
	DECLARE_FUNCTION(execGetPlayerRank); \
	DECLARE_FUNCTION(execGetSpecialStat); \
	DECLARE_FUNCTION(execGetSSAttentionPoint); \
	DECLARE_FUNCTION(execGetSSFeverCount); \
	DECLARE_FUNCTION(execGetSSInGameFlag); \
	DECLARE_FUNCTION(execGetSSKillCount); \
	DECLARE_FUNCTION(execGetSSMaxScore); \
	DECLARE_FUNCTION(execGetSSPlayCount); \
	DECLARE_FUNCTION(execGetSSRankPoint); \
	DECLARE_FUNCTION(execGetSSStarCount); \
	DECLARE_FUNCTION(execGetSSStarCountName); \
	DECLARE_FUNCTION(execGetSSTop5Count); \
	DECLARE_FUNCTION(execGetSSTopCount); \
	DECLARE_FUNCTION(execGetSSTotalScore); \
	DECLARE_FUNCTION(execGetSSWrestlerCount); \
	DECLARE_FUNCTION(execGetSSWrestlerCountName); \
	DECLARE_FUNCTION(execGetStat); \
	DECLARE_FUNCTION(execGetWarningDisconnectionCount); \
	DECLARE_FUNCTION(execGetWrestlerStat); \
	DECLARE_FUNCTION(execIngestDirtyStats); \
	DECLARE_FUNCTION(execIngestDisconnectionStats); \
	DECLARE_FUNCTION(execMaxGlobalStat); \
	DECLARE_FUNCTION(execMaxStat); \
	DECLARE_FUNCTION(execMaxWrestlerStat); \
	DECLARE_FUNCTION(execMinGlobalStat); \
	DECLARE_FUNCTION(execMinStat); \
	DECLARE_FUNCTION(execMinWrestlerStat); \
	DECLARE_FUNCTION(execSetBattlePassTotalPointStat); \
	DECLARE_FUNCTION(execSetCasinoBattleRoyaleLastWinnerStat); \
	DECLARE_FUNCTION(execSetCheatPenalty); \
	DECLARE_FUNCTION(execSetDebugDisconnectionLevel); \
	DECLARE_FUNCTION(execSetExternalAccountId); \
	DECLARE_FUNCTION(execSetGlobalStat); \
	DECLARE_FUNCTION(execSetPlayerBadgesToStat); \
	DECLARE_FUNCTION(execSetPlayerIconToStat); \
	DECLARE_FUNCTION(execSetPlayerRank); \
	DECLARE_FUNCTION(execSetPlayerRankPoint); \
	DECLARE_FUNCTION(execSetSpecialStat); \
	DECLARE_FUNCTION(execSetSSInGameFlag); \
	DECLARE_FUNCTION(execSetSSMaxScore); \
	DECLARE_FUNCTION(execSetSSRankPoint); \
	DECLARE_FUNCTION(execSetStat); \
	DECLARE_FUNCTION(execSetWrestlerStat);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELStatsUtility(); \
	friend struct Z_Construct_UClass_UELStatsUtility_Statics; \
public: \
	DECLARE_CLASS(UELStatsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELStatsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_INCLASS \
private: \
	static void StaticRegisterNativesUELStatsUtility(); \
	friend struct Z_Construct_UClass_UELStatsUtility_Statics; \
public: \
	DECLARE_CLASS(UELStatsUtility, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELStatsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELStatsUtility(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELStatsUtility) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELStatsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELStatsUtility); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELStatsUtility(UELStatsUtility&&); \
	NO_API UELStatsUtility(const UELStatsUtility&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELStatsUtility(UELStatsUtility&&); \
	NO_API UELStatsUtility(const UELStatsUtility&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELStatsUtility); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELStatsUtility); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELStatsUtility)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_PRIVATE_PROPERTY_OFFSET
#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_15_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELStatsUtility>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELStatsUtility_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
