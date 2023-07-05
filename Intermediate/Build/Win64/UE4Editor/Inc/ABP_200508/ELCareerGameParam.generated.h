// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FCareerMatchCardCore;
struct FCareerStoryCard;
enum class ECareerItemNo : uint8;
enum class ECareerTutorialCheckList : uint8;
enum class ECareerActionSkillNo : uint8;
class UELCareerAutoEventManager;
class UELCareerAutoPlayManager;
enum class ECareerModeDifficulty : uint8;
class UMyWrestlerDataObject;
struct FCareerPlayDataInfo;
enum class EELBelt : uint8;
struct FCareerChampionshipCore;
struct FCareerChampionshipHolder;
enum class ECareerChoicesPattern : uint8;
enum class ECareerChoicesSelectionResult : uint8;
enum class ECareerCutsceneCastType : uint8;
class AActor;
enum class EWrestlerID_N : uint8;
struct FCareerVeryShortEventStockInfo;
struct FCareerPlayerItemInfo;
enum class ECareerScenarioPart : uint8;
struct FCareerMainMatchResult;
enum class ECareerScenarioMatchTiming : uint8;
enum class ECareerCity : uint8;
enum class ECareerParameterSkillItem : uint8;
enum class ECareerPassiveSkillNo : uint8;
struct FGuid;
enum class EPersonalityType : uint8;
struct FCareerPostCommandEventList;
struct FCareerRecordInfo;
enum class ECareerScenario : uint8;
struct FCareerSnapshotParam;
struct FCareerSpecialRewardParam;
struct FCareerMenuItem;
struct FCareerTutorialTemporary;
struct FELWrestlerProfile_Skill;
enum class ECareerMenuActionAlreadySelectedFlag : uint8;
class UCareerSnapshot;
#ifdef ABP_200508_ELCareerGameParam_generated_h
#error "ELCareerGameParam.generated.h already included, missing '#pragma once' in ELCareerGameParam.h"
#endif
#define ABP_200508_ELCareerGameParam_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execAddDarkMatchCardInfo); \
	DECLARE_FUNCTION(execAddDarkMatchStoryCard); \
	DECLARE_FUNCTION(execAddItemNum); \
	DECLARE_FUNCTION(execCheckTutorialUseFlag); \
	DECLARE_FUNCTION(execClearDarkMatchCardInfos); \
	DECLARE_FUNCTION(execClearDarkMatchStoryCards); \
	DECLARE_FUNCTION(execClearEventStockList); \
	DECLARE_FUNCTION(execClearMainMatchResult); \
	DECLARE_FUNCTION(execClearPostCommandEventList); \
	DECLARE_FUNCTION(execClearTonyKhanTweetKey); \
	DECLARE_FUNCTION(execClearTutorialTemporary); \
	DECLARE_FUNCTION(execDecrementItemNum); \
	DECLARE_FUNCTION(execFindUnusedSnapshotIndex); \
	DECLARE_FUNCTION(execGetActionSkillState); \
	DECLARE_FUNCTION(execGetActionSkillStateList); \
	DECLARE_FUNCTION(execGetAutoEventManager); \
	DECLARE_FUNCTION(execGetAutoPlayManager); \
	DECLARE_FUNCTION(execGetCareerModeDifficulty); \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetCareerMyRosterData); \
	DECLARE_FUNCTION(execGetCareerMyScoutData); \
	DECLARE_FUNCTION(execGetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execGetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execGetChampionship); \
	DECLARE_FUNCTION(execGetChampionshipHolder); \
	DECLARE_FUNCTION(execGetChoicesSelectionInfo); \
	DECLARE_FUNCTION(execGetChoicesSelectionInfoByIndex); \
	DECLARE_FUNCTION(execGetCondition); \
	DECLARE_FUNCTION(execGetCurrentTotalScenarioTurn); \
	DECLARE_FUNCTION(execGetCurrentTurn); \
	DECLARE_FUNCTION(execGetCurrentWeek); \
	DECLARE_FUNCTION(execGetCutsceneWrestler); \
	DECLARE_FUNCTION(execGetDarkMatchCardInfos); \
	DECLARE_FUNCTION(execGetDarkMatchStoryCards); \
	DECLARE_FUNCTION(execGetDateID); \
	DECLARE_FUNCTION(execGetEventStockList); \
	DECLARE_FUNCTION(execGetItemInfo); \
	DECLARE_FUNCTION(execGetItemInfoRef); \
	DECLARE_FUNCTION(execGetItemNum); \
	DECLARE_FUNCTION(execGetLongStoryCard); \
	DECLARE_FUNCTION(execGetLoserWrestler); \
	DECLARE_FUNCTION(execGetMainMatchResultByScenarioPart); \
	DECLARE_FUNCTION(execGetMainMatchResultByTiming); \
	DECLARE_FUNCTION(execGetMainMatchResults); \
	DECLARE_FUNCTION(execGetMatchRestHPRate); \
	DECLARE_FUNCTION(execGetMatchScore); \
	DECLARE_FUNCTION(execGetMatchVenue); \
	DECLARE_FUNCTION(execGetMaxTurn); \
	DECLARE_FUNCTION(execGetMinigameStoryCard); \
	DECLARE_FUNCTION(execGetMomentumUpRate); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetNextStoryKey); \
	DECLARE_FUNCTION(execGetParameterSkillState); \
	DECLARE_FUNCTION(execGetParameterSkillStateList); \
	DECLARE_FUNCTION(execGetPartnerID); \
	DECLARE_FUNCTION(execGetPassiveSkillState); \
	DECLARE_FUNCTION(execGetPassiveSkillStateList); \
	DECLARE_FUNCTION(execGetPlayDarkMatchFlg); \
	DECLARE_FUNCTION(execGetPlayerEditWrestlerGUID); \
	DECLARE_FUNCTION(execGetPlayerEditWrestlerPersonality); \
	DECLARE_FUNCTION(execGetPlayerWrestlerID); \
	DECLARE_FUNCTION(execGetPostCommandEventList); \
	DECLARE_FUNCTION(execGetPostCommandEventListWithTurn); \
	DECLARE_FUNCTION(execGetPresetNo); \
	DECLARE_FUNCTION(execGetRecordInfoLocal); \
	DECLARE_FUNCTION(execGetRecordInfoTotal); \
	DECLARE_FUNCTION(execGetRivalID); \
	DECLARE_FUNCTION(execGetScenarioID); \
	DECLARE_FUNCTION(execGetScenarioPart); \
	DECLARE_FUNCTION(execGetSingleStoryCard); \
	DECLARE_FUNCTION(execGetSkillPoint); \
	DECLARE_FUNCTION(execGetSkillPointUpRate); \
	DECLARE_FUNCTION(execGetSnapshotParam); \
	DECLARE_FUNCTION(execGetSnapshotParams); \
	DECLARE_FUNCTION(execGetSpecialRewardParam); \
	DECLARE_FUNCTION(execGetSpecialRewardParams); \
	DECLARE_FUNCTION(execGetSuccessRate); \
	DECLARE_FUNCTION(execGetTonyKhanTweetKey); \
	DECLARE_FUNCTION(execGetTutorialTemporary); \
	DECLARE_FUNCTION(execGetTutorialUseFlag); \
	DECLARE_FUNCTION(execGetUseTurnEnding); \
	DECLARE_FUNCTION(execGetWinnerWrestler); \
	DECLARE_FUNCTION(execGetWrestlerClearCount); \
	DECLARE_FUNCTION(execGetWrestlerProfileSkill); \
	DECLARE_FUNCTION(execHasSpecialRewardParams); \
	DECLARE_FUNCTION(execHasTookSnapshot); \
	DECLARE_FUNCTION(execIncrementWrestlerClearCount); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsAttackedManager); \
	DECLARE_FUNCTION(execIsCAWtoHUB); \
	DECLARE_FUNCTION(execIsChallengeAddPlayedCareerMode); \
	DECLARE_FUNCTION(execIsChampionshipHolder); \
	DECLARE_FUNCTION(execIsDispSubtitles); \
	DECLARE_FUNCTION(execIsDispTutorialDialog); \
	DECLARE_FUNCTION(execIsInjury); \
	DECLARE_FUNCTION(execIsMatchInjury); \
	DECLARE_FUNCTION(execIsMatchOperationKeyboard); \
	DECLARE_FUNCTION(execIsMatchWin); \
	DECLARE_FUNCTION(execIsMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execIsOuting); \
	DECLARE_FUNCTION(execIsUnlockDark); \
	DECLARE_FUNCTION(execIsUnlockRampage); \
	DECLARE_FUNCTION(execIsVegetarian); \
	DECLARE_FUNCTION(execPopTookSnapshot); \
	DECLARE_FUNCTION(execPushTookSnapshot); \
	DECLARE_FUNCTION(execSetActionSkillState); \
	DECLARE_FUNCTION(execSetAllDisableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetAttackedManager); \
	DECLARE_FUNCTION(execSetCareerModeDifficulty); \
	DECLARE_FUNCTION(execSetCareerMoney); \
	DECLARE_FUNCTION(execSetCareerMyRosterData); \
	DECLARE_FUNCTION(execSetCareerMyScoutData); \
	DECLARE_FUNCTION(execSetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execSetCAWtoHUB); \
	DECLARE_FUNCTION(execSetChallengeAddPlayedCareerMode); \
	DECLARE_FUNCTION(execSetChampionship1st); \
	DECLARE_FUNCTION(execSetChampionship2nd); \
	DECLARE_FUNCTION(execSetChampionshipHolder); \
	DECLARE_FUNCTION(execSetChoicesSelectionInfo); \
	DECLARE_FUNCTION(execSetCondition); \
	DECLARE_FUNCTION(execSetCurrentTotalScenarioTurn); \
	DECLARE_FUNCTION(execSetCurrentTurn); \
	DECLARE_FUNCTION(execSetCurrentWeek); \
	DECLARE_FUNCTION(execSetCutsceneWrestler); \
	DECLARE_FUNCTION(execSetDateID); \
	DECLARE_FUNCTION(execSetDisableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetDispSubtitles); \
	DECLARE_FUNCTION(execSetDispTutorialDialog); \
	DECLARE_FUNCTION(execSetEnableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetEventStockList); \
	DECLARE_FUNCTION(execSetInjury); \
	DECLARE_FUNCTION(execSetItemInfo); \
	DECLARE_FUNCTION(execSetItemNum); \
	DECLARE_FUNCTION(execSetLongStoryCard); \
	DECLARE_FUNCTION(execSetLoserWrestler); \
	DECLARE_FUNCTION(execSetMainMatchResult); \
	DECLARE_FUNCTION(execSetMatchInjury); \
	DECLARE_FUNCTION(execSetMatchOperationKeyboard); \
	DECLARE_FUNCTION(execSetMatchRestHPRate); \
	DECLARE_FUNCTION(execSetMatchScore); \
	DECLARE_FUNCTION(execSetMatchVenue); \
	DECLARE_FUNCTION(execSetMatchWin); \
	DECLARE_FUNCTION(execSetMaxTurn); \
	DECLARE_FUNCTION(execSetMinigameStoryCard); \
	DECLARE_FUNCTION(execSetMomentumUpRate); \
	DECLARE_FUNCTION(execSetMotivation); \
	DECLARE_FUNCTION(execSetNextStoryKey); \
	DECLARE_FUNCTION(execSetOutingFlag); \
	DECLARE_FUNCTION(execSetParameterSkillState); \
	DECLARE_FUNCTION(execSetPartnerID); \
	DECLARE_FUNCTION(execSetPassiveSkillState); \
	DECLARE_FUNCTION(execSetPlayDarkMatchFlg); \
	DECLARE_FUNCTION(execSetPlayerEditWrestlerGUID); \
	DECLARE_FUNCTION(execSetPlayerEditWrestlerPersonality); \
	DECLARE_FUNCTION(execSetPlayerWrestlerID); \
	DECLARE_FUNCTION(execSetPostCommandEventList); \
	DECLARE_FUNCTION(execSetPresetNo); \
	DECLARE_FUNCTION(execSetRecordInfoLocal); \
	DECLARE_FUNCTION(execSetRecordInfoTotal); \
	DECLARE_FUNCTION(execSetRivalID); \
	DECLARE_FUNCTION(execSetScenarioID); \
	DECLARE_FUNCTION(execSetScenarioPart); \
	DECLARE_FUNCTION(execSetSingleStoryCard); \
	DECLARE_FUNCTION(execSetSkillPoint); \
	DECLARE_FUNCTION(execSetSkillPointUpRate); \
	DECLARE_FUNCTION(execSetSnapshotParam); \
	DECLARE_FUNCTION(execSetSnapshotParams); \
	DECLARE_FUNCTION(execSetSpecialRewardParam); \
	DECLARE_FUNCTION(execSetSpecialRewardParam_Dialog); \
	DECLARE_FUNCTION(execSetSpecialRewardParams); \
	DECLARE_FUNCTION(execSetTonyKhanTweetKey); \
	DECLARE_FUNCTION(execSetTutorialUseFlag); \
	DECLARE_FUNCTION(execSetUnlockDark); \
	DECLARE_FUNCTION(execSetUnlockRampage); \
	DECLARE_FUNCTION(execSetupAutoEventManager); \
	DECLARE_FUNCTION(execSetupAutoPlayManager); \
	DECLARE_FUNCTION(execSetUseTurnEnding); \
	DECLARE_FUNCTION(execSetVegetarian); \
	DECLARE_FUNCTION(execSetWinnerWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execAddDarkMatchCardInfo); \
	DECLARE_FUNCTION(execAddDarkMatchStoryCard); \
	DECLARE_FUNCTION(execAddItemNum); \
	DECLARE_FUNCTION(execCheckTutorialUseFlag); \
	DECLARE_FUNCTION(execClearDarkMatchCardInfos); \
	DECLARE_FUNCTION(execClearDarkMatchStoryCards); \
	DECLARE_FUNCTION(execClearEventStockList); \
	DECLARE_FUNCTION(execClearMainMatchResult); \
	DECLARE_FUNCTION(execClearPostCommandEventList); \
	DECLARE_FUNCTION(execClearTonyKhanTweetKey); \
	DECLARE_FUNCTION(execClearTutorialTemporary); \
	DECLARE_FUNCTION(execDecrementItemNum); \
	DECLARE_FUNCTION(execFindUnusedSnapshotIndex); \
	DECLARE_FUNCTION(execGetActionSkillState); \
	DECLARE_FUNCTION(execGetActionSkillStateList); \
	DECLARE_FUNCTION(execGetAutoEventManager); \
	DECLARE_FUNCTION(execGetAutoPlayManager); \
	DECLARE_FUNCTION(execGetCareerModeDifficulty); \
	DECLARE_FUNCTION(execGetCareerMoney); \
	DECLARE_FUNCTION(execGetCareerMyRosterData); \
	DECLARE_FUNCTION(execGetCareerMyScoutData); \
	DECLARE_FUNCTION(execGetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execGetCareerWrestlerClearCount); \
	DECLARE_FUNCTION(execGetChampionship); \
	DECLARE_FUNCTION(execGetChampionshipHolder); \
	DECLARE_FUNCTION(execGetChoicesSelectionInfo); \
	DECLARE_FUNCTION(execGetChoicesSelectionInfoByIndex); \
	DECLARE_FUNCTION(execGetCondition); \
	DECLARE_FUNCTION(execGetCurrentTotalScenarioTurn); \
	DECLARE_FUNCTION(execGetCurrentTurn); \
	DECLARE_FUNCTION(execGetCurrentWeek); \
	DECLARE_FUNCTION(execGetCutsceneWrestler); \
	DECLARE_FUNCTION(execGetDarkMatchCardInfos); \
	DECLARE_FUNCTION(execGetDarkMatchStoryCards); \
	DECLARE_FUNCTION(execGetDateID); \
	DECLARE_FUNCTION(execGetEventStockList); \
	DECLARE_FUNCTION(execGetItemInfo); \
	DECLARE_FUNCTION(execGetItemInfoRef); \
	DECLARE_FUNCTION(execGetItemNum); \
	DECLARE_FUNCTION(execGetLongStoryCard); \
	DECLARE_FUNCTION(execGetLoserWrestler); \
	DECLARE_FUNCTION(execGetMainMatchResultByScenarioPart); \
	DECLARE_FUNCTION(execGetMainMatchResultByTiming); \
	DECLARE_FUNCTION(execGetMainMatchResults); \
	DECLARE_FUNCTION(execGetMatchRestHPRate); \
	DECLARE_FUNCTION(execGetMatchScore); \
	DECLARE_FUNCTION(execGetMatchVenue); \
	DECLARE_FUNCTION(execGetMaxTurn); \
	DECLARE_FUNCTION(execGetMinigameStoryCard); \
	DECLARE_FUNCTION(execGetMomentumUpRate); \
	DECLARE_FUNCTION(execGetMotivation); \
	DECLARE_FUNCTION(execGetNextStoryKey); \
	DECLARE_FUNCTION(execGetParameterSkillState); \
	DECLARE_FUNCTION(execGetParameterSkillStateList); \
	DECLARE_FUNCTION(execGetPartnerID); \
	DECLARE_FUNCTION(execGetPassiveSkillState); \
	DECLARE_FUNCTION(execGetPassiveSkillStateList); \
	DECLARE_FUNCTION(execGetPlayDarkMatchFlg); \
	DECLARE_FUNCTION(execGetPlayerEditWrestlerGUID); \
	DECLARE_FUNCTION(execGetPlayerEditWrestlerPersonality); \
	DECLARE_FUNCTION(execGetPlayerWrestlerID); \
	DECLARE_FUNCTION(execGetPostCommandEventList); \
	DECLARE_FUNCTION(execGetPostCommandEventListWithTurn); \
	DECLARE_FUNCTION(execGetPresetNo); \
	DECLARE_FUNCTION(execGetRecordInfoLocal); \
	DECLARE_FUNCTION(execGetRecordInfoTotal); \
	DECLARE_FUNCTION(execGetRivalID); \
	DECLARE_FUNCTION(execGetScenarioID); \
	DECLARE_FUNCTION(execGetScenarioPart); \
	DECLARE_FUNCTION(execGetSingleStoryCard); \
	DECLARE_FUNCTION(execGetSkillPoint); \
	DECLARE_FUNCTION(execGetSkillPointUpRate); \
	DECLARE_FUNCTION(execGetSnapshotParam); \
	DECLARE_FUNCTION(execGetSnapshotParams); \
	DECLARE_FUNCTION(execGetSpecialRewardParam); \
	DECLARE_FUNCTION(execGetSpecialRewardParams); \
	DECLARE_FUNCTION(execGetSuccessRate); \
	DECLARE_FUNCTION(execGetTonyKhanTweetKey); \
	DECLARE_FUNCTION(execGetTutorialTemporary); \
	DECLARE_FUNCTION(execGetTutorialUseFlag); \
	DECLARE_FUNCTION(execGetUseTurnEnding); \
	DECLARE_FUNCTION(execGetWinnerWrestler); \
	DECLARE_FUNCTION(execGetWrestlerClearCount); \
	DECLARE_FUNCTION(execGetWrestlerProfileSkill); \
	DECLARE_FUNCTION(execHasSpecialRewardParams); \
	DECLARE_FUNCTION(execHasTookSnapshot); \
	DECLARE_FUNCTION(execIncrementWrestlerClearCount); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execIsAttackedManager); \
	DECLARE_FUNCTION(execIsCAWtoHUB); \
	DECLARE_FUNCTION(execIsChallengeAddPlayedCareerMode); \
	DECLARE_FUNCTION(execIsChampionshipHolder); \
	DECLARE_FUNCTION(execIsDispSubtitles); \
	DECLARE_FUNCTION(execIsDispTutorialDialog); \
	DECLARE_FUNCTION(execIsInjury); \
	DECLARE_FUNCTION(execIsMatchInjury); \
	DECLARE_FUNCTION(execIsMatchOperationKeyboard); \
	DECLARE_FUNCTION(execIsMatchWin); \
	DECLARE_FUNCTION(execIsMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execIsOuting); \
	DECLARE_FUNCTION(execIsUnlockDark); \
	DECLARE_FUNCTION(execIsUnlockRampage); \
	DECLARE_FUNCTION(execIsVegetarian); \
	DECLARE_FUNCTION(execPopTookSnapshot); \
	DECLARE_FUNCTION(execPushTookSnapshot); \
	DECLARE_FUNCTION(execSetActionSkillState); \
	DECLARE_FUNCTION(execSetAllDisableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetAttackedManager); \
	DECLARE_FUNCTION(execSetCareerModeDifficulty); \
	DECLARE_FUNCTION(execSetCareerMoney); \
	DECLARE_FUNCTION(execSetCareerMyRosterData); \
	DECLARE_FUNCTION(execSetCareerMyScoutData); \
	DECLARE_FUNCTION(execSetCareerPlayDataInfo); \
	DECLARE_FUNCTION(execSetCAWtoHUB); \
	DECLARE_FUNCTION(execSetChallengeAddPlayedCareerMode); \
	DECLARE_FUNCTION(execSetChampionship1st); \
	DECLARE_FUNCTION(execSetChampionship2nd); \
	DECLARE_FUNCTION(execSetChampionshipHolder); \
	DECLARE_FUNCTION(execSetChoicesSelectionInfo); \
	DECLARE_FUNCTION(execSetCondition); \
	DECLARE_FUNCTION(execSetCurrentTotalScenarioTurn); \
	DECLARE_FUNCTION(execSetCurrentTurn); \
	DECLARE_FUNCTION(execSetCurrentWeek); \
	DECLARE_FUNCTION(execSetCutsceneWrestler); \
	DECLARE_FUNCTION(execSetDateID); \
	DECLARE_FUNCTION(execSetDisableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetDispSubtitles); \
	DECLARE_FUNCTION(execSetDispTutorialDialog); \
	DECLARE_FUNCTION(execSetEnableMenuActionSelectedFlag); \
	DECLARE_FUNCTION(execSetEventStockList); \
	DECLARE_FUNCTION(execSetInjury); \
	DECLARE_FUNCTION(execSetItemInfo); \
	DECLARE_FUNCTION(execSetItemNum); \
	DECLARE_FUNCTION(execSetLongStoryCard); \
	DECLARE_FUNCTION(execSetLoserWrestler); \
	DECLARE_FUNCTION(execSetMainMatchResult); \
	DECLARE_FUNCTION(execSetMatchInjury); \
	DECLARE_FUNCTION(execSetMatchOperationKeyboard); \
	DECLARE_FUNCTION(execSetMatchRestHPRate); \
	DECLARE_FUNCTION(execSetMatchScore); \
	DECLARE_FUNCTION(execSetMatchVenue); \
	DECLARE_FUNCTION(execSetMatchWin); \
	DECLARE_FUNCTION(execSetMaxTurn); \
	DECLARE_FUNCTION(execSetMinigameStoryCard); \
	DECLARE_FUNCTION(execSetMomentumUpRate); \
	DECLARE_FUNCTION(execSetMotivation); \
	DECLARE_FUNCTION(execSetNextStoryKey); \
	DECLARE_FUNCTION(execSetOutingFlag); \
	DECLARE_FUNCTION(execSetParameterSkillState); \
	DECLARE_FUNCTION(execSetPartnerID); \
	DECLARE_FUNCTION(execSetPassiveSkillState); \
	DECLARE_FUNCTION(execSetPlayDarkMatchFlg); \
	DECLARE_FUNCTION(execSetPlayerEditWrestlerGUID); \
	DECLARE_FUNCTION(execSetPlayerEditWrestlerPersonality); \
	DECLARE_FUNCTION(execSetPlayerWrestlerID); \
	DECLARE_FUNCTION(execSetPostCommandEventList); \
	DECLARE_FUNCTION(execSetPresetNo); \
	DECLARE_FUNCTION(execSetRecordInfoLocal); \
	DECLARE_FUNCTION(execSetRecordInfoTotal); \
	DECLARE_FUNCTION(execSetRivalID); \
	DECLARE_FUNCTION(execSetScenarioID); \
	DECLARE_FUNCTION(execSetScenarioPart); \
	DECLARE_FUNCTION(execSetSingleStoryCard); \
	DECLARE_FUNCTION(execSetSkillPoint); \
	DECLARE_FUNCTION(execSetSkillPointUpRate); \
	DECLARE_FUNCTION(execSetSnapshotParam); \
	DECLARE_FUNCTION(execSetSnapshotParams); \
	DECLARE_FUNCTION(execSetSpecialRewardParam); \
	DECLARE_FUNCTION(execSetSpecialRewardParam_Dialog); \
	DECLARE_FUNCTION(execSetSpecialRewardParams); \
	DECLARE_FUNCTION(execSetTonyKhanTweetKey); \
	DECLARE_FUNCTION(execSetTutorialUseFlag); \
	DECLARE_FUNCTION(execSetUnlockDark); \
	DECLARE_FUNCTION(execSetUnlockRampage); \
	DECLARE_FUNCTION(execSetupAutoEventManager); \
	DECLARE_FUNCTION(execSetupAutoPlayManager); \
	DECLARE_FUNCTION(execSetUseTurnEnding); \
	DECLARE_FUNCTION(execSetVegetarian); \
	DECLARE_FUNCTION(execSetWinnerWrestler);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELCareerGameParam(); \
	friend struct Z_Construct_UClass_UELCareerGameParam_Statics; \
public: \
	DECLARE_CLASS(UELCareerGameParam, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerGameParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_INCLASS \
private: \
	static void StaticRegisterNativesUELCareerGameParam(); \
	friend struct Z_Construct_UClass_UELCareerGameParam_Statics; \
public: \
	DECLARE_CLASS(UELCareerGameParam, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELCareerGameParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELCareerGameParam(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELCareerGameParam) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerGameParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerGameParam); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerGameParam(UELCareerGameParam&&); \
	NO_API UELCareerGameParam(const UELCareerGameParam&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELCareerGameParam(UELCareerGameParam&&); \
	NO_API UELCareerGameParam(const UELCareerGameParam&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELCareerGameParam); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELCareerGameParam); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELCareerGameParam)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_Condition() { return STRUCT_OFFSET(UELCareerGameParam, m_Condition); } \
	FORCEINLINE static uint32 __PPO__m_Motivation() { return STRUCT_OFFSET(UELCareerGameParam, m_Motivation); } \
	FORCEINLINE static uint32 __PPO__m_SkillPoint() { return STRUCT_OFFSET(UELCareerGameParam, m_SkillPoint); } \
	FORCEINLINE static uint32 __PPO__m_CareerMoney() { return STRUCT_OFFSET(UELCareerGameParam, m_CareerMoney); } \
	FORCEINLINE static uint32 __PPO__m_PlayerWrestlerID() { return STRUCT_OFFSET(UELCareerGameParam, m_PlayerWrestlerID); } \
	FORCEINLINE static uint32 __PPO__m_PlayerEditWrestlerGUID() { return STRUCT_OFFSET(UELCareerGameParam, m_PlayerEditWrestlerGUID); } \
	FORCEINLINE static uint32 __PPO__m_PlayerEditWrestlerPersonality() { return STRUCT_OFFSET(UELCareerGameParam, m_PlayerEditWrestlerPersonality); } \
	FORCEINLINE static uint32 __PPO__m_sPresetNo() { return STRUCT_OFFSET(UELCareerGameParam, m_sPresetNo); } \
	FORCEINLINE static uint32 __PPO__m_PartnerID() { return STRUCT_OFFSET(UELCareerGameParam, m_PartnerID); } \
	FORCEINLINE static uint32 __PPO__m_RivalID() { return STRUCT_OFFSET(UELCareerGameParam, m_RivalID); } \
	FORCEINLINE static uint32 __PPO__m_DateID() { return STRUCT_OFFSET(UELCareerGameParam, m_DateID); } \
	FORCEINLINE static uint32 __PPO__m_ItemInfo() { return STRUCT_OFFSET(UELCareerGameParam, m_ItemInfo); } \
	FORCEINLINE static uint32 __PPO__m_CareerModeDifficulty() { return STRUCT_OFFSET(UELCareerGameParam, m_CareerModeDifficulty); } \
	FORCEINLINE static uint32 __PPO__m_bVegetarian() { return STRUCT_OFFSET(UELCareerGameParam, m_bVegetarian); } \
	FORCEINLINE static uint32 __PPO__m_bDispSubtitles() { return STRUCT_OFFSET(UELCareerGameParam, m_bDispSubtitles); } \
	FORCEINLINE static uint32 __PPO__m_bInjury() { return STRUCT_OFFSET(UELCareerGameParam, m_bInjury); } \
	FORCEINLINE static uint32 __PPO__m_MomentumUpRate() { return STRUCT_OFFSET(UELCareerGameParam, m_MomentumUpRate); } \
	FORCEINLINE static uint32 __PPO__m_SkillPointUpRate() { return STRUCT_OFFSET(UELCareerGameParam, m_SkillPointUpRate); } \
	FORCEINLINE static uint32 __PPO__m_ParameterSkillState() { return STRUCT_OFFSET(UELCareerGameParam, m_ParameterSkillState); } \
	FORCEINLINE static uint32 __PPO__m_ActionSkillState() { return STRUCT_OFFSET(UELCareerGameParam, m_ActionSkillState); } \
	FORCEINLINE static uint32 __PPO__m_PassiveSkillState() { return STRUCT_OFFSET(UELCareerGameParam, m_PassiveSkillState); } \
	FORCEINLINE static uint32 __PPO__m_LongStoryCard() { return STRUCT_OFFSET(UELCareerGameParam, m_LongStoryCard); } \
	FORCEINLINE static uint32 __PPO__m_SingleStoryCard() { return STRUCT_OFFSET(UELCareerGameParam, m_SingleStoryCard); } \
	FORCEINLINE static uint32 __PPO__m_NextStoryKey() { return STRUCT_OFFSET(UELCareerGameParam, m_NextStoryKey); } \
	FORCEINLINE static uint32 __PPO__m_PostCommandEventList() { return STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventList); } \
	FORCEINLINE static uint32 __PPO__m_EventStockList() { return STRUCT_OFFSET(UELCareerGameParam, m_EventStockList); } \
	FORCEINLINE static uint32 __PPO__m_PostCommandEventType() { return STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventType); } \
	FORCEINLINE static uint32 __PPO__m_PostCommandEventResult() { return STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventResult); } \
	FORCEINLINE static uint32 __PPO__m_ChoicesSelectionInfo() { return STRUCT_OFFSET(UELCareerGameParam, m_ChoicesSelectionInfo); } \
	FORCEINLINE static uint32 __PPO__m_bPlayDarkMatch() { return STRUCT_OFFSET(UELCareerGameParam, m_bPlayDarkMatch); } \
	FORCEINLINE static uint32 __PPO__m_DarkMatchStoryCards() { return STRUCT_OFFSET(UELCareerGameParam, m_DarkMatchStoryCards); } \
	FORCEINLINE static uint32 __PPO__m_DarkMatchCardInfos() { return STRUCT_OFFSET(UELCareerGameParam, m_DarkMatchCardInfos); } \
	FORCEINLINE static uint32 __PPO__m_MinigameStoryCard() { return STRUCT_OFFSET(UELCareerGameParam, m_MinigameStoryCard); } \
	FORCEINLINE static uint32 __PPO__m_Scenario() { return STRUCT_OFFSET(UELCareerGameParam, m_Scenario); } \
	FORCEINLINE static uint32 __PPO__m_CurrentWeek() { return STRUCT_OFFSET(UELCareerGameParam, m_CurrentWeek); } \
	FORCEINLINE static uint32 __PPO__m_CurrentTurn() { return STRUCT_OFFSET(UELCareerGameParam, m_CurrentTurn); } \
	FORCEINLINE static uint32 __PPO__m_MaxTurn() { return STRUCT_OFFSET(UELCareerGameParam, m_MaxTurn); } \
	FORCEINLINE static uint32 __PPO__m_TotalScenarioTurn() { return STRUCT_OFFSET(UELCareerGameParam, m_TotalScenarioTurn); } \
	FORCEINLINE static uint32 __PPO__m_MatchVenue() { return STRUCT_OFFSET(UELCareerGameParam, m_MatchVenue); } \
	FORCEINLINE static uint32 __PPO__m_bUseTurnEnding() { return STRUCT_OFFSET(UELCareerGameParam, m_bUseTurnEnding); } \
	FORCEINLINE static uint32 __PPO__m_MainMatchResult() { return STRUCT_OFFSET(UELCareerGameParam, m_MainMatchResult); } \
	FORCEINLINE static uint32 __PPO__m_ChampionshipHolder() { return STRUCT_OFFSET(UELCareerGameParam, m_ChampionshipHolder); } \
	FORCEINLINE static uint32 __PPO__m_TookSnapshots() { return STRUCT_OFFSET(UELCareerGameParam, m_TookSnapshots); } \
	FORCEINLINE static uint32 __PPO__m_SpecialRewardParams() { return STRUCT_OFFSET(UELCareerGameParam, m_SpecialRewardParams); } \
	FORCEINLINE static uint32 __PPO__m_bOuting() { return STRUCT_OFFSET(UELCareerGameParam, m_bOuting); } \
	FORCEINLINE static uint32 __PPO__m_MenuActionSelectedFlag() { return STRUCT_OFFSET(UELCareerGameParam, m_MenuActionSelectedFlag); } \
	FORCEINLINE static uint32 __PPO__m_pCareerMyRosterData() { return STRUCT_OFFSET(UELCareerGameParam, m_pCareerMyRosterData); } \
	FORCEINLINE static uint32 __PPO__m_pCareerMyScoutData() { return STRUCT_OFFSET(UELCareerGameParam, m_pCareerMyScoutData); } \
	FORCEINLINE static uint32 __PPO__m_bInitLoaded() { return STRUCT_OFFSET(UELCareerGameParam, m_bInitLoaded); } \
	FORCEINLINE static uint32 __PPO__m_ClearCountWrestler() { return STRUCT_OFFSET(UELCareerGameParam, m_ClearCountWrestler); } \
	FORCEINLINE static uint32 __PPO__m_TutorialUseFlag() { return STRUCT_OFFSET(UELCareerGameParam, m_TutorialUseFlag); } \
	FORCEINLINE static uint32 __PPO__m_AutoPlayManager() { return STRUCT_OFFSET(UELCareerGameParam, m_AutoPlayManager); } \
	FORCEINLINE static uint32 __PPO__m_AutoEventManager() { return STRUCT_OFFSET(UELCareerGameParam, m_AutoEventManager); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_47_PROLOG
#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h_49_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELCareerGameParam>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELCareerGameParam_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
