// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
enum class EELAchievementList : uint8;
class UObject;
class UELGameInstance;
class UDataTable;
struct FAIAutoMatchParam;
struct FDateTime;
struct FAutoPlayParam;
class UELBattlePassManager;
struct FCareerCutsceneParam;
class UELCareerDelivery;
struct FCareerEventMemberInfo;
class UELCareerGameParam;
enum class ECareerLevelInfo : uint8;
struct FCareerMatchCardCore;
enum class ECareerCutsceneBeltType : uint8;
enum class EELBelt : uint8;
enum class ECareerCutsceneCastType : uint8;
enum class EWrestlerID_N : uint8;
struct FCareerEvent;
struct FCareerMatch;
struct FCareerMiniGame;
enum class ECareerStoryResultCondition : uint8;
struct FCareerMovieSceneParam;
struct FCareerStory;
struct FCareerStoryCard;
class UELChallengeManager;
class UELCommentaryLoadingManager;
class UELCrateManager;
struct FKey;
class AyDebugCamera;
struct FDebugCareerParam_All;
class UELEOSManager;
class UELLeaderboards;
class UELLocalPlayer;
class UELStats;
class UELGameOptionManager;
class AELCharacter_Native;
class UELGoldCoinPossessManager;
class UELInputDeviceObserveManager;
class UELKeyConfigManager;
struct FELMatchResultParam;
enum class EELMatchResultType : uint8;
class AELMenuOperationalWidgetManagerBase;
struct FMiniGameDataMining;
enum class EMiniGameID : uint8;
class UELPossessedItemManager;
class UELSaveIconScreenManager;
class UELScoreRankingManager;
class UELSoundInfo;
struct FSSDebugParam;
struct FELSSMatchResultSpareDataParam;
class UELTipsLoadingManager;
class UELTitleHolderSaveDataManager;
struct FELTmpJukeboxSaveData;
class UELTutorialManager;
class UELUnlockableItemManagerBase;
class UELUserProfileManager;
struct FELWrestlerSelectParam;
class UELYGS2Manager;
class APlayerController;
enum class EELEOSEventType : uint8;
enum class EELEOSEventResult : uint8;
struct FStMatchRule;
struct FELWrestlerSelectParamForNative;
#ifdef ABP_200508_ELGameInstance_generated_h
#error "ELGameInstance.generated.h already included, missing '#pragma once' in ELGameInstance.h"
#endif
#define ABP_200508_ELGameInstance_generated_h

#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_SPARSE_DATA
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_RPC_WRAPPERS \
	virtual void ExecGotoMainMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAchievementLocalCountArray); \
	DECLARE_FUNCTION(execCareerBackToLevel); \
	DECLARE_FUNCTION(execCareerChangeToHubLevel); \
	DECLARE_FUNCTION(execClearWrestlerSelectParams); \
	DECLARE_FUNCTION(execDebugChangeCurrentLanguage); \
	DECLARE_FUNCTION(execDestroyDebugCamera); \
	DECLARE_FUNCTION(execDisableLookAtWrestler); \
	DECLARE_FUNCTION(execExecGotoLevel); \
	DECLARE_FUNCTION(execExecGotoMainMenu); \
	DECLARE_FUNCTION(execFindControllerId); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetAchievementLocalCountArray); \
	DECLARE_FUNCTION(execGetAchievementParam); \
	DECLARE_FUNCTION(execGetAllAchievementLocalCount); \
	DECLARE_FUNCTION(execGetAOnDataTable_N); \
	DECLARE_FUNCTION(execGetAOnKeys_N); \
	DECLARE_FUNCTION(execGetAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execGetAutoMatchMailError); \
	DECLARE_FUNCTION(execGetAutoMatchMailSuccess); \
	DECLARE_FUNCTION(execGetAutoMatchParam); \
	DECLARE_FUNCTION(execGetAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execGetAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execGetAutoPlayErrorCount); \
	DECLARE_FUNCTION(execGetAutoPlayErrorCountMax); \
	DECLARE_FUNCTION(execGetAutoPlayFileIndex); \
	DECLARE_FUNCTION(execGetAutoPlayFileString); \
	DECLARE_FUNCTION(execGetAutoPlayKeyInterval); \
	DECLARE_FUNCTION(execGetAutoPlayLineIndex); \
	DECLARE_FUNCTION(execGetAutoPlayLoop); \
	DECLARE_FUNCTION(execGetAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execGetAutoPlayMailError); \
	DECLARE_FUNCTION(execGetAutoPlayMailSuccess); \
	DECLARE_FUNCTION(execGetAutoPlayMultiIndex); \
	DECLARE_FUNCTION(execGetAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execGetAutoPlayParam); \
	DECLARE_FUNCTION(execGetAutoPlayRecFileIndex); \
	DECLARE_FUNCTION(execGetAutoPlayRecordingFileString); \
	DECLARE_FUNCTION(execGetBattlePassManager); \
	DECLARE_FUNCTION(execGetCareerCutsceneParam); \
	DECLARE_FUNCTION(execGetCareerDelivery); \
	DECLARE_FUNCTION(execGetCareerEventMembersInfo); \
	DECLARE_FUNCTION(execGetCareerGameParam); \
	DECLARE_FUNCTION(execGetCareerLevelInfo); \
	DECLARE_FUNCTION(execGetCareerMatchCardInfo); \
	DECLARE_FUNCTION(execGetCareerModeCutsceneBelt); \
	DECLARE_FUNCTION(execGetCareerModeCutsceneCast); \
	DECLARE_FUNCTION(execGetCareerModeEventInfo); \
	DECLARE_FUNCTION(execGetCareerModeMatchInfo); \
	DECLARE_FUNCTION(execGetCareerModeMiniGameInfo); \
	DECLARE_FUNCTION(execGetCareerModeStoryResult); \
	DECLARE_FUNCTION(execGetCareerMovieSceneParam); \
	DECLARE_FUNCTION(execGetCareerStackAchievementCount); \
	DECLARE_FUNCTION(execGetCareerStackAchievementCountArray); \
	DECLARE_FUNCTION(execGetCareerStackAchievementInfoArray); \
	DECLARE_FUNCTION(execGetCareerStory); \
	DECLARE_FUNCTION(execGetCareerStoryDataTable); \
	DECLARE_FUNCTION(execGetCareerStotyCard); \
	DECLARE_FUNCTION(execGetChallengeManager); \
	DECLARE_FUNCTION(execGetCommentaryLoadingManager); \
	DECLARE_FUNCTION(execGetCrateManager); \
	DECLARE_FUNCTION(execGetCurrentJukeboxPlayID); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInfo); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInfoArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInput); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInputArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayMultiFileNo); \
	DECLARE_FUNCTION(execGetDebugAutoPlayMultiFileNoArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayPath); \
	DECLARE_FUNCTION(execGetDebugAutoPlayPathArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayTime); \
	DECLARE_FUNCTION(execGetDebugAutoPlayTimeArray); \
	DECLARE_FUNCTION(execGetDebugCamera); \
	DECLARE_FUNCTION(execGetDebugCareerParam_All); \
	DECLARE_FUNCTION(execGetDebugGameplayEffectOff_N); \
	DECLARE_FUNCTION(execGetDebugGameplayEnableAllActionSkill_N); \
	DECLARE_FUNCTION(execGetDebugGameplayHUDOff_N); \
	DECLARE_FUNCTION(execGetDispPlayerStatus_N); \
	DECLARE_FUNCTION(execGetELEOSManager); \
	DECLARE_FUNCTION(execGetELLeaderboards); \
	DECLARE_FUNCTION(execGetELLocalPlayer); \
	DECLARE_FUNCTION(execGetELStats); \
	DECLARE_FUNCTION(execGetEmoteCutscene); \
	DECLARE_FUNCTION(execGetFPS); \
	DECLARE_FUNCTION(execGetGameOptionManager); \
	DECLARE_FUNCTION(execGetGameplayManagerArray_N); \
	DECLARE_FUNCTION(execGetGameplayPlayerArray_N); \
	DECLARE_FUNCTION(execGetGameplayPlayerNum_N); \
	DECLARE_FUNCTION(execGetGoldCoinPossessManager); \
	DECLARE_FUNCTION(execGetInputDeviceObserveManager); \
	DECLARE_FUNCTION(execGetInteractiveWinscene); \
	DECLARE_FUNCTION(execGetJukeBoxParam); \
	DECLARE_FUNCTION(execGetKeyConfigManager); \
	DECLARE_FUNCTION(execGetMatchResult); \
	DECLARE_FUNCTION(execGetMatchResultType_N); \
	DECLARE_FUNCTION(execGetMaxMiniGameNum); \
	DECLARE_FUNCTION(execGetMenuOperationalWidgetManager); \
	DECLARE_FUNCTION(execGetMiniGameMiningInfo); \
	DECLARE_FUNCTION(execGetMiniGameScores); \
	DECLARE_FUNCTION(execGetNextJukeboxPlayID); \
	DECLARE_FUNCTION(execGetNextLevelName); \
	DECLARE_FUNCTION(execGetNextLevelOption); \
	DECLARE_FUNCTION(execGetNowMiniGameCount); \
	DECLARE_FUNCTION(execGetNowMiniGameID); \
	DECLARE_FUNCTION(execGetPlayNewGameFlg); \
	DECLARE_FUNCTION(execGetPossessedItemManager); \
	DECLARE_FUNCTION(execGetSaveIconScreenManager); \
	DECLARE_FUNCTION(execGetScoreRankingManager); \
	DECLARE_FUNCTION(execGetSfxListDatatable); \
	DECLARE_FUNCTION(execGetSoundInfo); \
	DECLARE_FUNCTION(execGetSSDebugParam); \
	DECLARE_FUNCTION(execGetSSMatchResultSpareDataParam); \
	DECLARE_FUNCTION(execGetStackAchievementCount); \
	DECLARE_FUNCTION(execGetStackAchievementCountArray); \
	DECLARE_FUNCTION(execGetStackSaveAchievementArray); \
	DECLARE_FUNCTION(execGetTipsLoadingManager); \
	DECLARE_FUNCTION(execGetTitleHolderSaveDataManager); \
	DECLARE_FUNCTION(execGetTmpJukeboxSavedata); \
	DECLARE_FUNCTION(execGetTutorialManager); \
	DECLARE_FUNCTION(execGetUnlockableItemManager); \
	DECLARE_FUNCTION(execGetUserProfileManager); \
	DECLARE_FUNCTION(execGetVictoryCutscene); \
	DECLARE_FUNCTION(execGetWholeLevelBGMID); \
	DECLARE_FUNCTION(execGetWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execGetWrestlerSelectParam); \
	DECLARE_FUNCTION(execGetYGS2Manager); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execInitAchievementLocalCountArray); \
	DECLARE_FUNCTION(execInitAddWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execInitDebugCamera); \
	DECLARE_FUNCTION(execInitStackAchievementCount); \
	DECLARE_FUNCTION(execInitWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execIsAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execIsAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execIsAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execIsAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execIsAutoMatchSendMail); \
	DECLARE_FUNCTION(execIsAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execIsAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execIsAutoPlayError); \
	DECLARE_FUNCTION(execIsAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execIsAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execIsAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execIsAutoPlayStartFirst); \
	DECLARE_FUNCTION(execIsAutoPlaySuspensionEvent); \
	DECLARE_FUNCTION(execIsAutoPlayUseFixDT); \
	DECLARE_FUNCTION(execIsCareerAutoEvent); \
	DECLARE_FUNCTION(execIsCareerAutoPlay); \
	DECLARE_FUNCTION(execIsCareerMode); \
	DECLARE_FUNCTION(execIsCareerStopAchievement); \
	DECLARE_FUNCTION(execIsDebugAutoPlay); \
	DECLARE_FUNCTION(execIsDebugStartRecPad); \
	DECLARE_FUNCTION(execIsDispDebugUnlockItemId); \
	DECLARE_FUNCTION(execIsEntranceCutscene); \
	DECLARE_FUNCTION(execIsInputKeybord); \
	DECLARE_FUNCTION(execIsLastSelectedMenuByGamepad); \
	DECLARE_FUNCTION(execIsMiniGameEnd); \
	DECLARE_FUNCTION(execIsPlayCareerMatch); \
	DECLARE_FUNCTION(execIsPlayCareerMiniGame); \
	DECLARE_FUNCTION(execIsShowBuldFlow); \
	DECLARE_FUNCTION(execIsShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execIsStackAchievementCount); \
	DECLARE_FUNCTION(execIsStackSaveAchievement); \
	DECLARE_FUNCTION(execIsStartAutoMatch); \
	DECLARE_FUNCTION(execIsStopAutoPlay); \
	DECLARE_FUNCTION(execIsUseEntrance_N); \
	DECLARE_FUNCTION(execIsUseVictory_N); \
	DECLARE_FUNCTION(execIsValidNewWrestlerSelect); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnOpenPause); \
	DECLARE_FUNCTION(execOnQueryStatsInternal); \
	DECLARE_FUNCTION(execResetTextureStreamingPoolSize); \
	DECLARE_FUNCTION(execResizeTextureStreamingPool); \
	DECLARE_FUNCTION(execSetAchievementLocalCountArray); \
	DECLARE_FUNCTION(execSetAchievementParam); \
	DECLARE_FUNCTION(execSetAllAchievementLocalCount); \
	DECLARE_FUNCTION(execSetAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execSetAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execSetAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execSetAutoMatchMailError); \
	DECLARE_FUNCTION(execSetAutoMatchMailSuccess); \
	DECLARE_FUNCTION(execSetAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execSetAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execSetAutoMatchParam); \
	DECLARE_FUNCTION(execSetAutoMatchSendMail); \
	DECLARE_FUNCTION(execSetAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execSetAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execSetAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execSetAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execSetAutoPlayError); \
	DECLARE_FUNCTION(execSetAutoPlayErrorCount); \
	DECLARE_FUNCTION(execSetAutoPlayErrorCountMax); \
	DECLARE_FUNCTION(execSetAutoPlayFileIndex); \
	DECLARE_FUNCTION(execSetAutoPlayFileString); \
	DECLARE_FUNCTION(execSetAutoPlayKeyInterval); \
	DECLARE_FUNCTION(execSetAutoPlayLineIndex); \
	DECLARE_FUNCTION(execSetAutoPlayLoop); \
	DECLARE_FUNCTION(execSetAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execSetAutoPlayMailError); \
	DECLARE_FUNCTION(execSetAutoPlayMailSuccess); \
	DECLARE_FUNCTION(execSetAutoPlayMultiIndex); \
	DECLARE_FUNCTION(execSetAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execSetAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execSetAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execSetAutoPlayParam); \
	DECLARE_FUNCTION(execSetAutoPlayRecFileIndex); \
	DECLARE_FUNCTION(execSetAutoPlayRecordingFileString); \
	DECLARE_FUNCTION(execSetAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execSetAutoPlayStartFirst); \
	DECLARE_FUNCTION(execSetAutoPlaySuspensionEvent); \
	DECLARE_FUNCTION(execSetAutoPlayUseFixDT); \
	DECLARE_FUNCTION(execSetCareerCutsceneParam); \
	DECLARE_FUNCTION(execSetCareerEventMembersInfo); \
	DECLARE_FUNCTION(execSetCareerGameParam); \
	DECLARE_FUNCTION(execSetCareerLevelInfo); \
	DECLARE_FUNCTION(execSetCareerMatchCardInfo); \
	DECLARE_FUNCTION(execSetCareerModeEventInfo); \
	DECLARE_FUNCTION(execSetCareerModeFlg); \
	DECLARE_FUNCTION(execSetCareerModeMatchInfo); \
	DECLARE_FUNCTION(execSetCareerModeMiniGameInfo); \
	DECLARE_FUNCTION(execSetCareerModeStoryResult); \
	DECLARE_FUNCTION(execSetCareerMovieSceneParam); \
	DECLARE_FUNCTION(execSetCareerStackAchievementCount); \
	DECLARE_FUNCTION(execSetCareerStackAchievementInfoArray); \
	DECLARE_FUNCTION(execSetCareerStopAchievement); \
	DECLARE_FUNCTION(execSetCareerStory); \
	DECLARE_FUNCTION(execSetCareerStoryCard); \
	DECLARE_FUNCTION(execSetCareerStoryDataTable); \
	DECLARE_FUNCTION(execSetCurrentJukeboxPlayID); \
	DECLARE_FUNCTION(execSetDebugAutoPlay); \
	DECLARE_FUNCTION(execSetDebugAutoPlayInfoArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayInputArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayMultiFileNoArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayPathArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayTimeArray); \
	DECLARE_FUNCTION(execSetDebugGameplayEffectOff_N); \
	DECLARE_FUNCTION(execSetDebugGameplayEnableAllActionSkill_N); \
	DECLARE_FUNCTION(execSetDebugGameplayHUDOff_N); \
	DECLARE_FUNCTION(execSetDebugStartRecPad); \
	DECLARE_FUNCTION(execSetDispDebugUnlockItemId); \
	DECLARE_FUNCTION(execSetDispPlayerStatus_N); \
	DECLARE_FUNCTION(execSetFullScreenTitantron); \
	DECLARE_FUNCTION(execSetGameplayManagerArray_N); \
	DECLARE_FUNCTION(execSetGameplayPlayerArray_N); \
	DECLARE_FUNCTION(execSetGameplayReferee_N); \
	DECLARE_FUNCTION(execSetInputKeybord); \
	DECLARE_FUNCTION(execSetIsStackAchievementCount); \
	DECLARE_FUNCTION(execSetIsStackSaveAchievement); \
	DECLARE_FUNCTION(execSetJukeBoxParam); \
	DECLARE_FUNCTION(execSetLastSelectedMenuByDevice); \
	DECLARE_FUNCTION(execSetMatchResult); \
	DECLARE_FUNCTION(execSetMatchResultType_N); \
	DECLARE_FUNCTION(execSetMaxMiniGameNum); \
	DECLARE_FUNCTION(execSetMenuOperationalWidgetManager); \
	DECLARE_FUNCTION(execSetMiniGameEnd); \
	DECLARE_FUNCTION(execSetMiniGameMiningInfo); \
	DECLARE_FUNCTION(execSetMiniGameScores); \
	DECLARE_FUNCTION(execSetNextJukeboxPlayID); \
	DECLARE_FUNCTION(execSetNextLevelName); \
	DECLARE_FUNCTION(execSetNextLevelOption); \
	DECLARE_FUNCTION(execSetNowMiniGameCount); \
	DECLARE_FUNCTION(execSetNowMiniGameID); \
	DECLARE_FUNCTION(execSetPlayCareerMatch); \
	DECLARE_FUNCTION(execSetPlayCareerMiniGame); \
	DECLARE_FUNCTION(execSetPlayNewGameFlg); \
	DECLARE_FUNCTION(execSetSfxListDatatable); \
	DECLARE_FUNCTION(execSetShowBuldFlowFlag); \
	DECLARE_FUNCTION(execSetShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetSoundInfo); \
	DECLARE_FUNCTION(execSetSSDebugParam); \
	DECLARE_FUNCTION(execSetSSMatchResultSpareData); \
	DECLARE_FUNCTION(execSetStackAchievementCount); \
	DECLARE_FUNCTION(execSetStackSaveAchievementInfo); \
	DECLARE_FUNCTION(execSetStartAutoMatch); \
	DECLARE_FUNCTION(execSetStopAutoPlay); \
	DECLARE_FUNCTION(execSetTmpJukeboxSavedata); \
	DECLARE_FUNCTION(execSetTurnCheckFlg); \
	DECLARE_FUNCTION(execSetupBattlePassManager); \
	DECLARE_FUNCTION(execSetupChallengeManager); \
	DECLARE_FUNCTION(execSetupCrateManager); \
	DECLARE_FUNCTION(execSetupMatchRecordsInfoSaveDataManager); \
	DECLARE_FUNCTION(execSetupPossessedItemManager); \
	DECLARE_FUNCTION(execSetupTitleHolderSaveDataManager); \
	DECLARE_FUNCTION(execSetupTutorialManager); \
	DECLARE_FUNCTION(execSetupUnlockableItemManager); \
	DECLARE_FUNCTION(execSetUseEntrance_N); \
	DECLARE_FUNCTION(execSetUseVictory_N); \
	DECLARE_FUNCTION(execSetValidNewWrestlerSelect); \
	DECLARE_FUNCTION(execSetWholeLevelBGMID); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execWrestlerSelectEnd); \
	DECLARE_FUNCTION(execWrestlerSelectStart);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ExecGotoMainMenu_Implementation(); \
 \
	DECLARE_FUNCTION(execAddAchievementLocalCountArray); \
	DECLARE_FUNCTION(execCareerBackToLevel); \
	DECLARE_FUNCTION(execCareerChangeToHubLevel); \
	DECLARE_FUNCTION(execClearWrestlerSelectParams); \
	DECLARE_FUNCTION(execDebugChangeCurrentLanguage); \
	DECLARE_FUNCTION(execDestroyDebugCamera); \
	DECLARE_FUNCTION(execDisableLookAtWrestler); \
	DECLARE_FUNCTION(execExecGotoLevel); \
	DECLARE_FUNCTION(execExecGotoMainMenu); \
	DECLARE_FUNCTION(execFindControllerId); \
	DECLARE_FUNCTION(execGet); \
	DECLARE_FUNCTION(execGetAchievementLocalCountArray); \
	DECLARE_FUNCTION(execGetAchievementParam); \
	DECLARE_FUNCTION(execGetAllAchievementLocalCount); \
	DECLARE_FUNCTION(execGetAOnDataTable_N); \
	DECLARE_FUNCTION(execGetAOnKeys_N); \
	DECLARE_FUNCTION(execGetAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execGetAutoMatchMailError); \
	DECLARE_FUNCTION(execGetAutoMatchMailSuccess); \
	DECLARE_FUNCTION(execGetAutoMatchParam); \
	DECLARE_FUNCTION(execGetAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execGetAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execGetAutoPlayErrorCount); \
	DECLARE_FUNCTION(execGetAutoPlayErrorCountMax); \
	DECLARE_FUNCTION(execGetAutoPlayFileIndex); \
	DECLARE_FUNCTION(execGetAutoPlayFileString); \
	DECLARE_FUNCTION(execGetAutoPlayKeyInterval); \
	DECLARE_FUNCTION(execGetAutoPlayLineIndex); \
	DECLARE_FUNCTION(execGetAutoPlayLoop); \
	DECLARE_FUNCTION(execGetAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execGetAutoPlayMailError); \
	DECLARE_FUNCTION(execGetAutoPlayMailSuccess); \
	DECLARE_FUNCTION(execGetAutoPlayMultiIndex); \
	DECLARE_FUNCTION(execGetAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execGetAutoPlayParam); \
	DECLARE_FUNCTION(execGetAutoPlayRecFileIndex); \
	DECLARE_FUNCTION(execGetAutoPlayRecordingFileString); \
	DECLARE_FUNCTION(execGetBattlePassManager); \
	DECLARE_FUNCTION(execGetCareerCutsceneParam); \
	DECLARE_FUNCTION(execGetCareerDelivery); \
	DECLARE_FUNCTION(execGetCareerEventMembersInfo); \
	DECLARE_FUNCTION(execGetCareerGameParam); \
	DECLARE_FUNCTION(execGetCareerLevelInfo); \
	DECLARE_FUNCTION(execGetCareerMatchCardInfo); \
	DECLARE_FUNCTION(execGetCareerModeCutsceneBelt); \
	DECLARE_FUNCTION(execGetCareerModeCutsceneCast); \
	DECLARE_FUNCTION(execGetCareerModeEventInfo); \
	DECLARE_FUNCTION(execGetCareerModeMatchInfo); \
	DECLARE_FUNCTION(execGetCareerModeMiniGameInfo); \
	DECLARE_FUNCTION(execGetCareerModeStoryResult); \
	DECLARE_FUNCTION(execGetCareerMovieSceneParam); \
	DECLARE_FUNCTION(execGetCareerStackAchievementCount); \
	DECLARE_FUNCTION(execGetCareerStackAchievementCountArray); \
	DECLARE_FUNCTION(execGetCareerStackAchievementInfoArray); \
	DECLARE_FUNCTION(execGetCareerStory); \
	DECLARE_FUNCTION(execGetCareerStoryDataTable); \
	DECLARE_FUNCTION(execGetCareerStotyCard); \
	DECLARE_FUNCTION(execGetChallengeManager); \
	DECLARE_FUNCTION(execGetCommentaryLoadingManager); \
	DECLARE_FUNCTION(execGetCrateManager); \
	DECLARE_FUNCTION(execGetCurrentJukeboxPlayID); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInfo); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInfoArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInput); \
	DECLARE_FUNCTION(execGetDebugAutoPlayInputArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayMultiFileNo); \
	DECLARE_FUNCTION(execGetDebugAutoPlayMultiFileNoArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayPath); \
	DECLARE_FUNCTION(execGetDebugAutoPlayPathArray); \
	DECLARE_FUNCTION(execGetDebugAutoPlayTime); \
	DECLARE_FUNCTION(execGetDebugAutoPlayTimeArray); \
	DECLARE_FUNCTION(execGetDebugCamera); \
	DECLARE_FUNCTION(execGetDebugCareerParam_All); \
	DECLARE_FUNCTION(execGetDebugGameplayEffectOff_N); \
	DECLARE_FUNCTION(execGetDebugGameplayEnableAllActionSkill_N); \
	DECLARE_FUNCTION(execGetDebugGameplayHUDOff_N); \
	DECLARE_FUNCTION(execGetDispPlayerStatus_N); \
	DECLARE_FUNCTION(execGetELEOSManager); \
	DECLARE_FUNCTION(execGetELLeaderboards); \
	DECLARE_FUNCTION(execGetELLocalPlayer); \
	DECLARE_FUNCTION(execGetELStats); \
	DECLARE_FUNCTION(execGetEmoteCutscene); \
	DECLARE_FUNCTION(execGetFPS); \
	DECLARE_FUNCTION(execGetGameOptionManager); \
	DECLARE_FUNCTION(execGetGameplayManagerArray_N); \
	DECLARE_FUNCTION(execGetGameplayPlayerArray_N); \
	DECLARE_FUNCTION(execGetGameplayPlayerNum_N); \
	DECLARE_FUNCTION(execGetGoldCoinPossessManager); \
	DECLARE_FUNCTION(execGetInputDeviceObserveManager); \
	DECLARE_FUNCTION(execGetInteractiveWinscene); \
	DECLARE_FUNCTION(execGetJukeBoxParam); \
	DECLARE_FUNCTION(execGetKeyConfigManager); \
	DECLARE_FUNCTION(execGetMatchResult); \
	DECLARE_FUNCTION(execGetMatchResultType_N); \
	DECLARE_FUNCTION(execGetMaxMiniGameNum); \
	DECLARE_FUNCTION(execGetMenuOperationalWidgetManager); \
	DECLARE_FUNCTION(execGetMiniGameMiningInfo); \
	DECLARE_FUNCTION(execGetMiniGameScores); \
	DECLARE_FUNCTION(execGetNextJukeboxPlayID); \
	DECLARE_FUNCTION(execGetNextLevelName); \
	DECLARE_FUNCTION(execGetNextLevelOption); \
	DECLARE_FUNCTION(execGetNowMiniGameCount); \
	DECLARE_FUNCTION(execGetNowMiniGameID); \
	DECLARE_FUNCTION(execGetPlayNewGameFlg); \
	DECLARE_FUNCTION(execGetPossessedItemManager); \
	DECLARE_FUNCTION(execGetSaveIconScreenManager); \
	DECLARE_FUNCTION(execGetScoreRankingManager); \
	DECLARE_FUNCTION(execGetSfxListDatatable); \
	DECLARE_FUNCTION(execGetSoundInfo); \
	DECLARE_FUNCTION(execGetSSDebugParam); \
	DECLARE_FUNCTION(execGetSSMatchResultSpareDataParam); \
	DECLARE_FUNCTION(execGetStackAchievementCount); \
	DECLARE_FUNCTION(execGetStackAchievementCountArray); \
	DECLARE_FUNCTION(execGetStackSaveAchievementArray); \
	DECLARE_FUNCTION(execGetTipsLoadingManager); \
	DECLARE_FUNCTION(execGetTitleHolderSaveDataManager); \
	DECLARE_FUNCTION(execGetTmpJukeboxSavedata); \
	DECLARE_FUNCTION(execGetTutorialManager); \
	DECLARE_FUNCTION(execGetUnlockableItemManager); \
	DECLARE_FUNCTION(execGetUserProfileManager); \
	DECLARE_FUNCTION(execGetVictoryCutscene); \
	DECLARE_FUNCTION(execGetWholeLevelBGMID); \
	DECLARE_FUNCTION(execGetWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execGetWrestlerSelectParam); \
	DECLARE_FUNCTION(execGetYGS2Manager); \
	DECLARE_FUNCTION(execInit); \
	DECLARE_FUNCTION(execInitAchievementLocalCountArray); \
	DECLARE_FUNCTION(execInitAddWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execInitDebugCamera); \
	DECLARE_FUNCTION(execInitStackAchievementCount); \
	DECLARE_FUNCTION(execInitWholeLevelBGMIDArray); \
	DECLARE_FUNCTION(execIsAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execIsAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execIsAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execIsAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execIsAutoMatchSendMail); \
	DECLARE_FUNCTION(execIsAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execIsAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execIsAutoPlayError); \
	DECLARE_FUNCTION(execIsAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execIsAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execIsAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execIsAutoPlayStartFirst); \
	DECLARE_FUNCTION(execIsAutoPlaySuspensionEvent); \
	DECLARE_FUNCTION(execIsAutoPlayUseFixDT); \
	DECLARE_FUNCTION(execIsCareerAutoEvent); \
	DECLARE_FUNCTION(execIsCareerAutoPlay); \
	DECLARE_FUNCTION(execIsCareerMode); \
	DECLARE_FUNCTION(execIsCareerStopAchievement); \
	DECLARE_FUNCTION(execIsDebugAutoPlay); \
	DECLARE_FUNCTION(execIsDebugStartRecPad); \
	DECLARE_FUNCTION(execIsDispDebugUnlockItemId); \
	DECLARE_FUNCTION(execIsEntranceCutscene); \
	DECLARE_FUNCTION(execIsInputKeybord); \
	DECLARE_FUNCTION(execIsLastSelectedMenuByGamepad); \
	DECLARE_FUNCTION(execIsMiniGameEnd); \
	DECLARE_FUNCTION(execIsPlayCareerMatch); \
	DECLARE_FUNCTION(execIsPlayCareerMiniGame); \
	DECLARE_FUNCTION(execIsShowBuldFlow); \
	DECLARE_FUNCTION(execIsShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execIsStackAchievementCount); \
	DECLARE_FUNCTION(execIsStackSaveAchievement); \
	DECLARE_FUNCTION(execIsStartAutoMatch); \
	DECLARE_FUNCTION(execIsStopAutoPlay); \
	DECLARE_FUNCTION(execIsUseEntrance_N); \
	DECLARE_FUNCTION(execIsUseVictory_N); \
	DECLARE_FUNCTION(execIsValidNewWrestlerSelect); \
	DECLARE_FUNCTION(execOnEOSEvent); \
	DECLARE_FUNCTION(execOnOpenPause); \
	DECLARE_FUNCTION(execOnQueryStatsInternal); \
	DECLARE_FUNCTION(execResetTextureStreamingPoolSize); \
	DECLARE_FUNCTION(execResizeTextureStreamingPool); \
	DECLARE_FUNCTION(execSetAchievementLocalCountArray); \
	DECLARE_FUNCTION(execSetAchievementParam); \
	DECLARE_FUNCTION(execSetAllAchievementLocalCount); \
	DECLARE_FUNCTION(execSetAutoMatchAnimationDebugView); \
	DECLARE_FUNCTION(execSetAutoMatchErrorCheck); \
	DECLARE_FUNCTION(execSetAutoMatchLoopMaxCount); \
	DECLARE_FUNCTION(execSetAutoMatchMailError); \
	DECLARE_FUNCTION(execSetAutoMatchMailSuccess); \
	DECLARE_FUNCTION(execSetAutoMatchOutputFaildResult); \
	DECLARE_FUNCTION(execSetAutoMatchOutputSuccessResult); \
	DECLARE_FUNCTION(execSetAutoMatchParam); \
	DECLARE_FUNCTION(execSetAutoMatchSendMail); \
	DECLARE_FUNCTION(execSetAutoMatchSkipEntrance); \
	DECLARE_FUNCTION(execSetAutoMatchSkipEntranceSecond); \
	DECLARE_FUNCTION(execSetAutoMatchVictorySceneMode); \
	DECLARE_FUNCTION(execSetAutoPlayCreateNewRecordingFile); \
	DECLARE_FUNCTION(execSetAutoPlayError); \
	DECLARE_FUNCTION(execSetAutoPlayErrorCount); \
	DECLARE_FUNCTION(execSetAutoPlayErrorCountMax); \
	DECLARE_FUNCTION(execSetAutoPlayFileIndex); \
	DECLARE_FUNCTION(execSetAutoPlayFileString); \
	DECLARE_FUNCTION(execSetAutoPlayKeyInterval); \
	DECLARE_FUNCTION(execSetAutoPlayLineIndex); \
	DECLARE_FUNCTION(execSetAutoPlayLoop); \
	DECLARE_FUNCTION(execSetAutoPlayLoopMaxCount); \
	DECLARE_FUNCTION(execSetAutoPlayMailError); \
	DECLARE_FUNCTION(execSetAutoPlayMailSuccess); \
	DECLARE_FUNCTION(execSetAutoPlayMultiIndex); \
	DECLARE_FUNCTION(execSetAutoPlayMultipleFile); \
	DECLARE_FUNCTION(execSetAutoPlayOutputFaildResult); \
	DECLARE_FUNCTION(execSetAutoPlayOutputSuccessResult); \
	DECLARE_FUNCTION(execSetAutoPlayParam); \
	DECLARE_FUNCTION(execSetAutoPlayRecFileIndex); \
	DECLARE_FUNCTION(execSetAutoPlayRecordingFileString); \
	DECLARE_FUNCTION(execSetAutoPlayShowTutorial); \
	DECLARE_FUNCTION(execSetAutoPlayStartFirst); \
	DECLARE_FUNCTION(execSetAutoPlaySuspensionEvent); \
	DECLARE_FUNCTION(execSetAutoPlayUseFixDT); \
	DECLARE_FUNCTION(execSetCareerCutsceneParam); \
	DECLARE_FUNCTION(execSetCareerEventMembersInfo); \
	DECLARE_FUNCTION(execSetCareerGameParam); \
	DECLARE_FUNCTION(execSetCareerLevelInfo); \
	DECLARE_FUNCTION(execSetCareerMatchCardInfo); \
	DECLARE_FUNCTION(execSetCareerModeEventInfo); \
	DECLARE_FUNCTION(execSetCareerModeFlg); \
	DECLARE_FUNCTION(execSetCareerModeMatchInfo); \
	DECLARE_FUNCTION(execSetCareerModeMiniGameInfo); \
	DECLARE_FUNCTION(execSetCareerModeStoryResult); \
	DECLARE_FUNCTION(execSetCareerMovieSceneParam); \
	DECLARE_FUNCTION(execSetCareerStackAchievementCount); \
	DECLARE_FUNCTION(execSetCareerStackAchievementInfoArray); \
	DECLARE_FUNCTION(execSetCareerStopAchievement); \
	DECLARE_FUNCTION(execSetCareerStory); \
	DECLARE_FUNCTION(execSetCareerStoryCard); \
	DECLARE_FUNCTION(execSetCareerStoryDataTable); \
	DECLARE_FUNCTION(execSetCurrentJukeboxPlayID); \
	DECLARE_FUNCTION(execSetDebugAutoPlay); \
	DECLARE_FUNCTION(execSetDebugAutoPlayInfoArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayInputArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayMultiFileNoArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayPathArray); \
	DECLARE_FUNCTION(execSetDebugAutoPlayTimeArray); \
	DECLARE_FUNCTION(execSetDebugGameplayEffectOff_N); \
	DECLARE_FUNCTION(execSetDebugGameplayEnableAllActionSkill_N); \
	DECLARE_FUNCTION(execSetDebugGameplayHUDOff_N); \
	DECLARE_FUNCTION(execSetDebugStartRecPad); \
	DECLARE_FUNCTION(execSetDispDebugUnlockItemId); \
	DECLARE_FUNCTION(execSetDispPlayerStatus_N); \
	DECLARE_FUNCTION(execSetFullScreenTitantron); \
	DECLARE_FUNCTION(execSetGameplayManagerArray_N); \
	DECLARE_FUNCTION(execSetGameplayPlayerArray_N); \
	DECLARE_FUNCTION(execSetGameplayReferee_N); \
	DECLARE_FUNCTION(execSetInputKeybord); \
	DECLARE_FUNCTION(execSetIsStackAchievementCount); \
	DECLARE_FUNCTION(execSetIsStackSaveAchievement); \
	DECLARE_FUNCTION(execSetJukeBoxParam); \
	DECLARE_FUNCTION(execSetLastSelectedMenuByDevice); \
	DECLARE_FUNCTION(execSetMatchResult); \
	DECLARE_FUNCTION(execSetMatchResultType_N); \
	DECLARE_FUNCTION(execSetMaxMiniGameNum); \
	DECLARE_FUNCTION(execSetMenuOperationalWidgetManager); \
	DECLARE_FUNCTION(execSetMiniGameEnd); \
	DECLARE_FUNCTION(execSetMiniGameMiningInfo); \
	DECLARE_FUNCTION(execSetMiniGameScores); \
	DECLARE_FUNCTION(execSetNextJukeboxPlayID); \
	DECLARE_FUNCTION(execSetNextLevelName); \
	DECLARE_FUNCTION(execSetNextLevelOption); \
	DECLARE_FUNCTION(execSetNowMiniGameCount); \
	DECLARE_FUNCTION(execSetNowMiniGameID); \
	DECLARE_FUNCTION(execSetPlayCareerMatch); \
	DECLARE_FUNCTION(execSetPlayCareerMiniGame); \
	DECLARE_FUNCTION(execSetPlayNewGameFlg); \
	DECLARE_FUNCTION(execSetSfxListDatatable); \
	DECLARE_FUNCTION(execSetShowBuldFlowFlag); \
	DECLARE_FUNCTION(execSetShowCommonLayoutWidget); \
	DECLARE_FUNCTION(execSetSoundInfo); \
	DECLARE_FUNCTION(execSetSSDebugParam); \
	DECLARE_FUNCTION(execSetSSMatchResultSpareData); \
	DECLARE_FUNCTION(execSetStackAchievementCount); \
	DECLARE_FUNCTION(execSetStackSaveAchievementInfo); \
	DECLARE_FUNCTION(execSetStartAutoMatch); \
	DECLARE_FUNCTION(execSetStopAutoPlay); \
	DECLARE_FUNCTION(execSetTmpJukeboxSavedata); \
	DECLARE_FUNCTION(execSetTurnCheckFlg); \
	DECLARE_FUNCTION(execSetupBattlePassManager); \
	DECLARE_FUNCTION(execSetupChallengeManager); \
	DECLARE_FUNCTION(execSetupCrateManager); \
	DECLARE_FUNCTION(execSetupMatchRecordsInfoSaveDataManager); \
	DECLARE_FUNCTION(execSetupPossessedItemManager); \
	DECLARE_FUNCTION(execSetupTitleHolderSaveDataManager); \
	DECLARE_FUNCTION(execSetupTutorialManager); \
	DECLARE_FUNCTION(execSetupUnlockableItemManager); \
	DECLARE_FUNCTION(execSetUseEntrance_N); \
	DECLARE_FUNCTION(execSetUseVictory_N); \
	DECLARE_FUNCTION(execSetValidNewWrestlerSelect); \
	DECLARE_FUNCTION(execSetWholeLevelBGMID); \
	DECLARE_FUNCTION(execShutdown); \
	DECLARE_FUNCTION(execWrestlerSelectEnd); \
	DECLARE_FUNCTION(execWrestlerSelectStart);


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_EVENT_PARMS \
	struct ELGameInstance_eventChangeWorldRequested_Parms \
	{ \
		FString LevelName; \
	}; \
	struct ELGameInstance_eventGetBodyScale_Parms \
	{ \
		EWrestlerID_N WrestlerID; \
		float ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventGetBodyScale_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventGetMainMenuDecideControllerID_Impl_Parms \
	{ \
		int32 ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventGetMainMenuDecideControllerID_Impl_Parms() \
			: ReturnValue(0) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventGetMatchRule_Impl_Parms \
	{ \
		FStMatchRule MatchRule; \
	}; \
	struct ELGameInstance_eventGetWrestlerSelectParamForNative_Parms \
	{ \
		TArray<FELWrestlerSelectParamForNative> List; \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventGetWrestlerSelectParamForNative_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventMatchRule_IsEnablePin_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventMatchRule_IsEnablePin_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventMatchRule_IsEnableRingsidePin_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventMatchRule_IsEnableRingsidePin_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventMatchRule_IsEnableRingsideSubmission_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventMatchRule_IsEnableRingsideSubmission_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	}; \
	struct ELGameInstance_eventMatchRule_IsEnableSubmission_Parms \
	{ \
		bool ReturnValue; \
 \
		/** Constructor, initializes return property only **/ \
		ELGameInstance_eventMatchRule_IsEnableSubmission_Parms() \
			: ReturnValue(false) \
		{ \
		} \
	};


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_CALLBACK_WRAPPERS
#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUELGameInstance(); \
	friend struct Z_Construct_UClass_UELGameInstance_Statics; \
public: \
	DECLARE_CLASS(UELGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_INCLASS \
private: \
	static void StaticRegisterNativesUELGameInstance(); \
	friend struct Z_Construct_UClass_UELGameInstance_Statics; \
public: \
	DECLARE_CLASS(UELGameInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/ABP_200508"), NO_API) \
	DECLARE_SERIALIZER(UELGameInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UELGameInstance(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UELGameInstance) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameInstance); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameInstance(UELGameInstance&&); \
	NO_API UELGameInstance(const UELGameInstance&); \
public:


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UELGameInstance(UELGameInstance&&); \
	NO_API UELGameInstance(const UELGameInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UELGameInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UELGameInstance); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UELGameInstance)


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ELEOSManager() { return STRUCT_OFFSET(UELGameInstance, ELEOSManager); } \
	FORCEINLINE static uint32 __PPO__ELStats() { return STRUCT_OFFSET(UELGameInstance, ELStats); } \
	FORCEINLINE static uint32 __PPO__ELLeaderboards() { return STRUCT_OFFSET(UELGameInstance, ELLeaderboards); } \
	FORCEINLINE static uint32 __PPO__ELYGS2Manager() { return STRUCT_OFFSET(UELGameInstance, ELYGS2Manager); } \
	FORCEINLINE static uint32 __PPO__AOnKeys_N() { return STRUCT_OFFSET(UELGameInstance, AOnKeys_N); } \
	FORCEINLINE static uint32 __PPO__AOnDataTable_N() { return STRUCT_OFFSET(UELGameInstance, AOnDataTable_N); } \
	FORCEINLINE static uint32 __PPO__bUseVictory_N() { return STRUCT_OFFSET(UELGameInstance, bUseVictory_N); } \
	FORCEINLINE static uint32 __PPO__MatchResultType_N() { return STRUCT_OFFSET(UELGameInstance, MatchResultType_N); } \
	FORCEINLINE static uint32 __PPO__m_pMusicList() { return STRUCT_OFFSET(UELGameInstance, m_pMusicList); } \
	FORCEINLINE static uint32 __PPO__m_pAchievement() { return STRUCT_OFFSET(UELGameInstance, m_pAchievement); } \
	FORCEINLINE static uint32 __PPO__m_pCareerGameParam() { return STRUCT_OFFSET(UELGameInstance, m_pCareerGameParam); } \
	FORCEINLINE static uint32 __PPO__m_pCareerDelivery() { return STRUCT_OFFSET(UELGameInstance, m_pCareerDelivery); } \
	FORCEINLINE static uint32 __PPO__MenuOperationalWidgetManager() { return STRUCT_OFFSET(UELGameInstance, MenuOperationalWidgetManager); } \
	FORCEINLINE static uint32 __PPO__m_UnlockableItemManager() { return STRUCT_OFFSET(UELGameInstance, m_UnlockableItemManager); } \
	FORCEINLINE static uint32 __PPO__m_BattlePassManager() { return STRUCT_OFFSET(UELGameInstance, m_BattlePassManager); } \
	FORCEINLINE static uint32 __PPO__m_ChallengeManager() { return STRUCT_OFFSET(UELGameInstance, m_ChallengeManager); } \
	FORCEINLINE static uint32 __PPO__m_PossessedItemManager() { return STRUCT_OFFSET(UELGameInstance, m_PossessedItemManager); } \
	FORCEINLINE static uint32 __PPO__bDebugGameplayEnableAllActionSkill_N() { return STRUCT_OFFSET(UELGameInstance, bDebugGameplayEnableAllActionSkill_N); } \
	FORCEINLINE static uint32 __PPO__bDebugGameplayHUDOff_N() { return STRUCT_OFFSET(UELGameInstance, bDebugGameplayHUDOff_N); } \
	FORCEINLINE static uint32 __PPO__bDebugGameplayEffectOff_N() { return STRUCT_OFFSET(UELGameInstance, bDebugGameplayEffectOff_N); } \
	FORCEINLINE static uint32 __PPO__DebugMenu_DispPlayerStatus_N() { return STRUCT_OFFSET(UELGameInstance, DebugMenu_DispPlayerStatus_N); } \
	FORCEINLINE static uint32 __PPO__m_GoldCoinPossessManager() { return STRUCT_OFFSET(UELGameInstance, m_GoldCoinPossessManager); } \
	FORCEINLINE static uint32 __PPO__m_ELSoundInfo() { return STRUCT_OFFSET(UELGameInstance, m_ELSoundInfo); } \
	FORCEINLINE static uint32 __PPO__m_ELSfxListDatatable() { return STRUCT_OFFSET(UELGameInstance, m_ELSfxListDatatable); } \
	FORCEINLINE static uint32 __PPO__m_CrateManager() { return STRUCT_OFFSET(UELGameInstance, m_CrateManager); } \
	FORCEINLINE static uint32 __PPO__m_KeyConfigManager() { return STRUCT_OFFSET(UELGameInstance, m_KeyConfigManager); } \
	FORCEINLINE static uint32 __PPO__m_TutorialManager() { return STRUCT_OFFSET(UELGameInstance, m_TutorialManager); } \
	FORCEINLINE static uint32 __PPO__PlatformFPS() { return STRUCT_OFFSET(UELGameInstance, PlatformFPS); } \
	FORCEINLINE static uint32 __PPO__m_GameOptionManager() { return STRUCT_OFFSET(UELGameInstance, m_GameOptionManager); } \
	FORCEINLINE static uint32 __PPO__m_UserProfileManager() { return STRUCT_OFFSET(UELGameInstance, m_UserProfileManager); } \
	FORCEINLINE static uint32 __PPO__TitleHolderSaveDataManager() { return STRUCT_OFFSET(UELGameInstance, TitleHolderSaveDataManager); } \
	FORCEINLINE static uint32 __PPO__m_ScoreRankingManager() { return STRUCT_OFFSET(UELGameInstance, m_ScoreRankingManager); } \
	FORCEINLINE static uint32 __PPO__m_InputDeviceObserveManager() { return STRUCT_OFFSET(UELGameInstance, m_InputDeviceObserveManager); } \
	FORCEINLINE static uint32 __PPO__m_CommentaryLoadingManager() { return STRUCT_OFFSET(UELGameInstance, m_CommentaryLoadingManager); } \
	FORCEINLINE static uint32 __PPO__m_TipsLoadingManager() { return STRUCT_OFFSET(UELGameInstance, m_TipsLoadingManager); } \
	FORCEINLINE static uint32 __PPO__m_SaveIconScreenManager() { return STRUCT_OFFSET(UELGameInstance, m_SaveIconScreenManager); } \
	FORCEINLINE static uint32 __PPO__MatchRecordsInfoSaveDataManager() { return STRUCT_OFFSET(UELGameInstance, MatchRecordsInfoSaveDataManager); } \
	FORCEINLINE static uint32 __PPO__SSRootObject() { return STRUCT_OFFSET(UELGameInstance, SSRootObject); } \
	FORCEINLINE static uint32 __PPO__SSMasterData() { return STRUCT_OFFSET(UELGameInstance, SSMasterData); } \
	FORCEINLINE static uint32 __PPO__SSLevelTransitionEvent() { return STRUCT_OFFSET(UELGameInstance, SSLevelTransitionEvent); } \
	FORCEINLINE static uint32 __PPO__SSEndGameReason() { return STRUCT_OFFSET(UELGameInstance, SSEndGameReason); } \
	FORCEINLINE static uint32 __PPO__m_pSSDebugParam() { return STRUCT_OFFSET(UELGameInstance, m_pSSDebugParam); } \
	FORCEINLINE static uint32 __PPO__m_pSSMatchResultSpareDataParam() { return STRUCT_OFFSET(UELGameInstance, m_pSSMatchResultSpareDataParam); } \
	FORCEINLINE static uint32 __PPO__m_pSSGameDataManager() { return STRUCT_OFFSET(UELGameInstance, m_pSSGameDataManager); } \
	FORCEINLINE static uint32 __PPO__ELMovieControlBase() { return STRUCT_OFFSET(UELGameInstance, ELMovieControlBase); } \
	FORCEINLINE static uint32 __PPO__BackUpCVarPoolSize() { return STRUCT_OFFSET(UELGameInstance, BackUpCVarPoolSize); } \
	FORCEINLINE static uint32 __PPO__BackUpCVarMaxTempMemoryAllowed() { return STRUCT_OFFSET(UELGameInstance, BackUpCVarMaxTempMemoryAllowed); } \
	FORCEINLINE static uint32 __PPO__bTexturePoolResized() { return STRUCT_OFFSET(UELGameInstance, bTexturePoolResized); }


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_82_PROLOG \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_EVENT_PARMS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_RPC_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_INCLASS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_PRIVATE_PROPERTY_OFFSET \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_SPARSE_DATA \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_RPC_WRAPPERS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_CALLBACK_WRAPPERS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_INCLASS_NO_PURE_DECLS \
	AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h_84_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ABP_200508_API UClass* StaticClass<class UELGameInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID AewFFCustomUProj_Source_ABP_200508_Public_ELGameInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
