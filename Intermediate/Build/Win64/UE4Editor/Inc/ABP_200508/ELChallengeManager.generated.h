// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
struct FChallengeAchievementParameter;
struct FChallengeProgressDetailInfo;
enum class EChallengePeriodType : uint8;
struct FChallengeCompleteState;
struct FTimespan;
enum class EWrestlerID_N : uint8;
class UDataTable;
#ifdef ABP_200508_ELChallengeManager_generated_h
#error "ELChallengeManager.generated.h already included, missing '#pragma once' in ELChallengeManager.h"
#endif
#define ABP_200508_ELChallengeManager_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAcquiredChallengeReward); \
	DECLARE_FUNCTION(execCheckChallengeExpirationDate); \
	DECLARE_FUNCTION(execConfirmedChangeDailyChallenges); \
	DECLARE_FUNCTION(execConfirmedChangeWeeklyChallenges); \
	DECLARE_FUNCTION(execCreatePlayerData); \
	DECLARE_FUNCTION(execDebug_ForceChangingChallengeList); \
	DECLARE_FUNCTION(execDisposeSaveData); \
	DECLARE_FUNCTION(execGetBlockPopupFlag); \
	DECLARE_FUNCTION(execGetChallengeParameterFromId); \
	DECLARE_FUNCTION(execGetChangedChallengeInfo); \
	DECLARE_FUNCTION(execGetPlayedMatchCountNumFromDailyChallenge); \
	DECLARE_FUNCTION(execGetProgressDetailInfoFromID); \
	DECLARE_FUNCTION(execGetProgressStateList); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execIsChangedDailyChallenges); \
	DECLARE_FUNCTION(execIsChangedWeeklyChallenges); \
	DECLARE_FUNCTION(execIsIncludedUnavailableDlcWrestler); \
	DECLARE_FUNCTION(execOnUpdateBattlePassPoint); \
	DECLARE_FUNCTION(execRestartChallengeRecordMonitor); \
	DECLARE_FUNCTION(execSetBlockPopupFlag); \
	DECLARE_FUNCTION(execSetupChallengeParamDataTable); \
	DECLARE_FUNCTION(execStartChallengeRecordMonitor); \
	DECLARE_FUNCTION(execStopChallengeRecordMonitor);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAcquiredChallengeReward); \
	DECLARE_FUNCTION(execCheckChallengeExpirationDate); \
	DECLARE_FUNCTION(execConfirmedChangeDailyChallenges); \
	DECLARE_FUNCTION(execConfirmedChangeWeeklyChallenges); \
	DECLARE_FUNCTION(execCreatePlayerData); \
	DECLARE_FUNCTION(execDebug_ForceChangingChallengeList); \
	DECLARE_FUNCTION(execDisposeSaveData); \
	DECLARE_FUNCTION(execGetBlockPopupFlag); \
	DECLARE_FUNCTION(execGetChallengeParameterFromId); \
	DECLARE_FUNCTION(execGetChangedChallengeInfo); \
	DECLARE_FUNCTION(execGetPlayedMatchCountNumFromDailyChallenge); \
	DECLARE_FUNCTION(execGetProgressDetailInfoFromID); \
	DECLARE_FUNCTION(execGetProgressStateList); \
	DECLARE_FUNCTION(execGetRemainingTime); \
	DECLARE_FUNCTION(execIsChangedDailyChallenges); \
	DECLARE_FUNCTION(execIsChangedWeeklyChallenges); \
	DECLARE_FUNCTION(execIsIncludedUnavailableDlcWrestler); \
	DECLARE_FUNCTION(execOnUpdateBattlePassPoint); \
	DECLARE_FUNCTION(execRestartChallengeRecordMonitor); \
	DECLARE_FUNCTION(execSetBlockPopupFlag); \
	DECLARE_FUNCTION(execSetupChallengeParamDataTable); \
	DECLARE_FUNCTION(execStartChallengeRecordMonitor); \
	DECLARE_FUNCTION(execStopChallengeRecordMonitor);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELChallengeManager(); \
	friend struct Z_Construct_UClass_UELChallengeManager_Statics; \
public: \
	DECLARE_CLASS(UELChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELChallengeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_INCLASS \
private: \
	static void StaticRegisterNativesUELChallengeManager(); \
	friend struct Z_Construct_UClass_UELChallengeManager_Statics; \
public: \
	DECLARE_CLASS(UELChallengeManager, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELChallengeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELChallengeManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELChallengeManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELChallengeManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELChallengeManager(UELChallengeManager&&); \
	NO_API UELChallengeManager(const UELChallengeManager&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELChallengeManager(UELChallengeManager&&); \
	NO_API UELChallengeManager(const UELChallengeManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELChallengeManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELChallengeManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELChallengeManager)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ChallengeAchievementParamMap() { return STRUCT_OFFSET(UELChallengeManager, m_ChallengeAchievementParamMap); } \
	FORCEINLINE static uint32 __PPO__m_ChallengePogressChangedInfoList() { return STRUCT_OFFSET(UELChallengeManager, m_ChallengePogressChangedInfoList); } \
	FORCEINLINE static uint32 __PPO__m_ChallengeRecordDataList() { return STRUCT_OFFSET(UELChallengeManager, m_ChallengeRecordDataList); } \
	FORCEINLINE static uint32 __PPO__m_OnlyNormalChallengeRecordData() { return STRUCT_OFFSET(UELChallengeManager, m_OnlyNormalChallengeRecordData); } \
	FORCEINLINE static uint32 __PPO__m_ChallengeProgressData() { return STRUCT_OFFSET(UELChallengeManager, m_ChallengeProgressData); } \
	FORCEINLINE static uint32 __PPO__UnavailableDlcWrestlerIdSets() { return STRUCT_OFFSET(UELChallengeManager, UnavailableDlcWrestlerIdSets); } \
	FORCEINLINE static uint32 __PPO__m_pPlayerData() { return STRUCT_OFFSET(UELChallengeManager, m_pPlayerData); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_19_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELChallengeManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELChallengeManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
