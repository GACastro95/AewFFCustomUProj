// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELCareerGameParam.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELCareerGameParam() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerGameParam_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerGameParam();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMatchCardCore();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryCard();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerItemNo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerTutorialCheckList();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerActionSkillNo();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoEventManager_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayDataInfo();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipCore();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipHolder();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayerItemInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMainMatchResult();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPostCommandEventList();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordInfo();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSnapshotParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerSpecialRewardParam();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerMenuItem();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerTutorialTemporary();
	ELITE_GAME_API UScriptStruct* Z_Construct_UScriptStruct_FELWrestlerProfile_Skill();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuActionAlreadySelectedFlag();
	ABP_200508_API UClass* Z_Construct_UClass_UCareerSnapshot_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult();
// End Cross Module References
	DEFINE_FUNCTION(UELCareerGameParam::execAddDarkMatchCardInfo)
	{
		P_GET_STRUCT(FCareerMatchCardCore,Z_Param__MatchCardInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDarkMatchCardInfo(Z_Param__MatchCardInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execAddDarkMatchStoryCard)
	{
		P_GET_STRUCT(FCareerStoryCard,Z_Param__StoryCardInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddDarkMatchStoryCard(Z_Param__StoryCardInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execAddItemNum)
	{
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddItemNum(ECareerItemNo(Z_Param__ItemNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execCheckTutorialUseFlag)
	{
		P_GET_ENUM(ECareerTutorialCheckList,Z_Param_eCheckList);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckTutorialUseFlag(ECareerTutorialCheckList(Z_Param_eCheckList));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearDarkMatchCardInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDarkMatchCardInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearDarkMatchStoryCards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearDarkMatchStoryCards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearEventStockList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearEventStockList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearMainMatchResult)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearMainMatchResult();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearPostCommandEventList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearPostCommandEventList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearTonyKhanTweetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTonyKhanTweetKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execClearTutorialTemporary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearTutorialTemporary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execDecrementItemNum)
	{
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DecrementItemNum(ECareerItemNo(Z_Param__ItemNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execFindUnusedSnapshotIndex)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->FindUnusedSnapshotIndex();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetActionSkillState)
	{
		P_GET_ENUM(ECareerActionSkillNo,Z_Param__SkillNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetActionSkillState(ECareerActionSkillNo(Z_Param__SkillNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetActionSkillStateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetActionSkillStateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetAutoEventManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELCareerAutoEventManager**)Z_Param__Result=P_THIS->GetAutoEventManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetAutoPlayManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UELCareerAutoPlayManager**)Z_Param__Result=P_THIS->GetAutoPlayManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerModeDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerModeDifficulty*)Z_Param__Result=P_THIS->GetCareerModeDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerMoney();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerMyRosterData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetCareerMyRosterData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerMyScoutData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetCareerMyScoutData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerPlayDataInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPlayDataInfo*)Z_Param__Result=P_THIS->GetCareerPlayDataInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCareerWrestlerClearCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetCareerWrestlerClearCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetChampionship)
	{
		P_GET_ENUM(EELBelt,Z_Param_eChampionshipType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerChampionshipCore*)Z_Param__Result=P_THIS->GetChampionship(EELBelt(Z_Param_eChampionshipType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetChampionshipHolder)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerChampionshipHolder*)Z_Param__Result=P_THIS->GetChampionshipHolder();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetChoicesSelectionInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<ECareerChoicesPattern>*)Z_Param__Result=P_THIS->GetChoicesSelectionInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetChoicesSelectionInfoByIndex)
	{
		P_GET_ENUM(ECareerChoicesSelectionResult,Z_Param__SaveSelection);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerChoicesPattern*)Z_Param__Result=P_THIS->GetChoicesSelectionInfoByIndex(ECareerChoicesSelectionResult(Z_Param__SaveSelection));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCondition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCurrentTotalScenarioTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentTotalScenarioTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCurrentTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCurrentWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCurrentWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetCutsceneWrestler)
	{
		P_GET_ENUM(ECareerCutsceneCastType,Z_Param_CastType);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(AActor**)Z_Param__Result=P_THIS->GetCutsceneWrestler(ECareerCutsceneCastType(Z_Param_CastType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetDarkMatchCardInfos)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerMatchCardCore>*)Z_Param__Result=P_THIS->GetDarkMatchCardInfos();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetDarkMatchStoryCards)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerStoryCard>*)Z_Param__Result=P_THIS->GetDarkMatchStoryCards();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetDateID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetDateID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetEventStockList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerVeryShortEventStockInfo>*)Z_Param__Result=P_THIS->GetEventStockList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetItemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPlayerItemInfo*)Z_Param__Result=P_THIS->GetItemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetItemInfoRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPlayerItemInfo*)Z_Param__Result=P_THIS->GetItemInfoRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetItemNum)
	{
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetItemNum(ECareerItemNo(Z_Param__ItemNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetLongStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStoryCard*)Z_Param__Result=P_THIS->GetLongStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetLoserWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetLoserWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMainMatchResultByScenarioPart)
	{
		P_GET_ENUM(ECareerScenarioPart,Z_Param__Part);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerMainMatchResult*)Z_Param__Result=P_THIS->GetMainMatchResultByScenarioPart(ECareerScenarioPart(Z_Param__Part));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMainMatchResultByTiming)
	{
		P_GET_ENUM(ECareerScenarioMatchTiming,Z_Param__Timing);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerMainMatchResult*)Z_Param__Result=P_THIS->GetMainMatchResultByTiming(ECareerScenarioMatchTiming(Z_Param__Timing));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMainMatchResults)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerMainMatchResult>*)Z_Param__Result=P_THIS->GetMainMatchResults();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMatchRestHPRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMatchRestHPRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMatchScore)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMatchScore();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMatchVenue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerCity*)Z_Param__Result=P_THIS->GetMatchVenue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMaxTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMaxTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMinigameStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStoryCard*)Z_Param__Result=P_THIS->GetMinigameStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMomentumUpRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetMomentumUpRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetMotivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetMotivation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetNextStoryKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetNextStoryKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetParameterSkillState)
	{
		P_GET_ENUM(ECareerParameterSkillItem,Z_Param__SkillNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetParameterSkillState(ECareerParameterSkillItem(Z_Param__SkillNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetParameterSkillStateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetParameterSkillStateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPartnerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetPartnerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPassiveSkillState)
	{
		P_GET_ENUM(ECareerPassiveSkillNo,Z_Param__SkillNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPassiveSkillState(ECareerPassiveSkillNo(Z_Param__SkillNo));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPassiveSkillStateList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<int32>*)Z_Param__Result=P_THIS->GetPassiveSkillStateList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPlayDarkMatchFlg)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetPlayDarkMatchFlg();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPlayerEditWrestlerGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetPlayerEditWrestlerGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPlayerEditWrestlerPersonality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPersonalityType*)Z_Param__Result=P_THIS->GetPlayerEditWrestlerPersonality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPlayerWrestlerID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetPlayerWrestlerID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPostCommandEventList)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerPostCommandEventList>*)Z_Param__Result=P_THIS->GetPostCommandEventList();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPostCommandEventListWithTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Turn);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPostCommandEventList*)Z_Param__Result=P_THIS->GetPostCommandEventListWithTurn(Z_Param__Turn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetPresetNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetPresetNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetRecordInfoLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerRecordInfo*)Z_Param__Result=P_THIS->GetRecordInfoLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetRecordInfoTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerRecordInfo*)Z_Param__Result=P_THIS->GetRecordInfoTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetRivalID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetRivalID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetScenarioID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenario*)Z_Param__Result=P_THIS->GetScenarioID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetScenarioPart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenarioPart*)Z_Param__Result=P_THIS->GetScenarioPart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSingleStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStoryCard*)Z_Param__Result=P_THIS->GetSingleStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSkillPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSkillPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSkillPointUpRate)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=P_THIS->GetSkillPointUpRate();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSnapshotParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerSnapshotParam*)Z_Param__Result=P_THIS->GetSnapshotParam(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSnapshotParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerSnapshotParam>*)Z_Param__Result=P_THIS->GetSnapshotParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSpecialRewardParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerSpecialRewardParam*)Z_Param__Result=P_THIS->GetSpecialRewardParam(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSpecialRewardParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<FCareerSpecialRewardParam>*)Z_Param__Result=P_THIS->GetSpecialRewardParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetSuccessRate)
	{
		P_GET_STRUCT(FCareerMenuItem,Z_Param__Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetSuccessRate(Z_Param__Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetTonyKhanTweetKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetTonyKhanTweetKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetTutorialTemporary)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerTutorialTemporary*)Z_Param__Result=P_THIS->GetTutorialTemporary();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetTutorialUseFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<uint8>*)Z_Param__Result=P_THIS->GetTutorialUseFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetUseTurnEnding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetUseTurnEnding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetWinnerWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetWinnerWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetWrestlerClearCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_wrestlerNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetWrestlerClearCount(Z_Param_wrestlerNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execGetWrestlerProfileSkill)
	{
		P_GET_STRUCT_REF(FELWrestlerProfile_Skill,Z_Param_Out_OutResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetWrestlerProfileSkill(Z_Param_Out_OutResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execHasSpecialRewardParams)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasSpecialRewardParams();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execHasTookSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->HasTookSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIncrementWrestlerClearCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_wrestlerNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->IncrementWrestlerClearCount(Z_Param_wrestlerNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execInit)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Init();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsAttackedManager)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsAttackedManager();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsCAWtoHUB)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsCAWtoHUB();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsChallengeAddPlayedCareerMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChallengeAddPlayedCareerMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsChampionshipHolder)
	{
		P_GET_ENUM(EELBelt,Z_Param_eChampionshipType);
		P_GET_ENUM(EWrestlerID_N,Z_Param_in_Wrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsChampionshipHolder(EELBelt(Z_Param_eChampionshipType),EWrestlerID_N(Z_Param_in_Wrestler));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsDispSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDispSubtitles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsDispTutorialDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsDispTutorialDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsInjury)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsInjury();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsMatchInjury)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchInjury();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsMatchOperationKeyboard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchOperationKeyboard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsMatchWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMatchWin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsMenuActionSelectedFlag)
	{
		P_GET_ENUM(ECareerMenuActionAlreadySelectedFlag,Z_Param__Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag(Z_Param__Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsOuting)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->IsOuting();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsUnlockDark)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnlockDark();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsUnlockRampage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsUnlockRampage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execIsVegetarian)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsVegetarian();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execPopTookSnapshot)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UCareerSnapshot**)Z_Param__Result=P_THIS->PopTookSnapshot();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execPushTookSnapshot)
	{
		P_GET_OBJECT(UCareerSnapshot,Z_Param_Snapshot);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PushTookSnapshot(Z_Param_Snapshot);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetActionSkillState)
	{
		P_GET_ENUM(ECareerActionSkillNo,Z_Param__SkillNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetActionSkillState(ECareerActionSkillNo(Z_Param__SkillNo),Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetAllDisableMenuActionSelectedFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAllDisableMenuActionSelectedFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetAttackedManager)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetAttackedManager(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCareerModeDifficulty)
	{
		P_GET_ENUM(ECareerModeDifficulty,Z_Param__Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerModeDifficulty(ECareerModeDifficulty(Z_Param__Difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCareerMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMoney(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCareerMyRosterData)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__CareeMyRosterData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMyRosterData(Z_Param__CareeMyRosterData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCareerMyScoutData)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__CareeMyScoutData);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMyScoutData(Z_Param__CareeMyScoutData);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCareerPlayDataInfo)
	{
		P_GET_STRUCT(FCareerPlayDataInfo,Z_Param__Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerPlayDataInfo(Z_Param__Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCAWtoHUB)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCAWtoHUB(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetChallengeAddPlayedCareerMode)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChallengeAddPlayedCareerMode(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetChampionship1st)
	{
		P_GET_ENUM(EELBelt,Z_Param_eChampionshipType);
		P_GET_ENUM(EWrestlerID_N,Z_Param_in_WrestlerA);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChampionship1st(EELBelt(Z_Param_eChampionshipType),EWrestlerID_N(Z_Param_in_WrestlerA));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetChampionship2nd)
	{
		P_GET_ENUM(EELBelt,Z_Param_eChampionshipType);
		P_GET_ENUM(EWrestlerID_N,Z_Param_in_WrestlerB);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChampionship2nd(EELBelt(Z_Param_eChampionshipType),EWrestlerID_N(Z_Param_in_WrestlerB));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetChampionshipHolder)
	{
		P_GET_STRUCT(FCareerChampionshipHolder,Z_Param_eChampionshipHolder);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChampionshipHolder(Z_Param_eChampionshipHolder);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetChoicesSelectionInfo)
	{
		P_GET_ENUM(ECareerChoicesSelectionResult,Z_Param__SaveSelection);
		P_GET_ENUM(ECareerChoicesPattern,Z_Param__Pattern);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetChoicesSelectionInfo(ECareerChoicesSelectionResult(Z_Param__SaveSelection),ECareerChoicesPattern(Z_Param__Pattern));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCondition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCondition(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCurrentTotalScenarioTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTotalScenarioTurn(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCurrentTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentTurn(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCurrentWeek)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCurrentWeek(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetCutsceneWrestler)
	{
		P_GET_ENUM(ECareerCutsceneCastType,Z_Param_CastType);
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCutsceneWrestler(ECareerCutsceneCastType(Z_Param_CastType),Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetDateID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDateID(EWrestlerID_N(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetDisableMenuActionSelectedFlag)
	{
		P_GET_ENUM(ECareerMenuActionAlreadySelectedFlag,Z_Param__Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDisableMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag(Z_Param__Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetDispSubtitles)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDispSubtitles(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetDispTutorialDialog)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetDispTutorialDialog(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetEnableMenuActionSelectedFlag)
	{
		P_GET_ENUM(ECareerMenuActionAlreadySelectedFlag,Z_Param__Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEnableMenuActionSelectedFlag(ECareerMenuActionAlreadySelectedFlag(Z_Param__Flag));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetEventStockList)
	{
		P_GET_TARRAY(FCareerVeryShortEventStockInfo,Z_Param__EventList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetEventStockList(Z_Param__EventList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetInjury)
	{
		P_GET_UBOOL(Z_Param__bInjury);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInjury(Z_Param__bInjury);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetItemInfo)
	{
		P_GET_STRUCT(FCareerPlayerItemInfo,Z_Param__ItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemInfo(Z_Param__ItemInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetItemNum)
	{
		P_GET_ENUM(ECareerItemNo,Z_Param__ItemNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__num);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetItemNum(ECareerItemNo(Z_Param__ItemNo),Z_Param__num);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetLongStoryCard)
	{
		P_GET_STRUCT(FCareerStoryCard,Z_Param__StoryCard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLongStoryCard(Z_Param__StoryCard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetLoserWrestler)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_eWrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetLoserWrestler(EWrestlerID_N(Z_Param_eWrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMainMatchResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Index);
		P_GET_STRUCT(FCareerMainMatchResult,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMainMatchResult(Z_Param__Index,Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchInjury)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchInjury(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchOperationKeyboard)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchOperationKeyboard(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchRestHPRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_fHP);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchRestHPRate(Z_Param_fHP);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchScore(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchVenue)
	{
		P_GET_ENUM(ECareerCity,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchVenue(ECareerCity(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMatchWin)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMatchWin(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMaxTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMaxTurn(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMinigameStoryCard)
	{
		P_GET_STRUCT(FCareerStoryCard,Z_Param__StoryCard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMinigameStoryCard(Z_Param__StoryCard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMomentumUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__MomentumUpRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMomentumUpRate(Z_Param__MomentumUpRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetMotivation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetMotivation(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetNextStoryKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNextStoryKey(Z_Param__key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetOutingFlag)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__bOuting);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetOutingFlag(Z_Param__bOuting);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetParameterSkillState)
	{
		P_GET_ENUM(ECareerParameterSkillItem,Z_Param__SkillNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetParameterSkillState(ECareerParameterSkillItem(Z_Param__SkillNo),Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPartnerID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPartnerID(EWrestlerID_N(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPassiveSkillState)
	{
		P_GET_ENUM(ECareerPassiveSkillNo,Z_Param__SkillNo);
		P_GET_PROPERTY(FIntProperty,Z_Param__state);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPassiveSkillState(ECareerPassiveSkillNo(Z_Param__SkillNo),Z_Param__state);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPlayDarkMatchFlg)
	{
		P_GET_UBOOL(Z_Param__Flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayDarkMatchFlg(Z_Param__Flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPlayerEditWrestlerGUID)
	{
		P_GET_STRUCT(FGuid,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerEditWrestlerGUID(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPlayerEditWrestlerPersonality)
	{
		P_GET_ENUM(EPersonalityType,Z_Param__Personality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerEditWrestlerPersonality(EPersonalityType(Z_Param__Personality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPlayerWrestlerID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPlayerWrestlerID(EWrestlerID_N(Z_Param__WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPostCommandEventList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT(FCareerPostCommandEventList,Z_Param__EventList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPostCommandEventList(Z_Param_Index,Z_Param__EventList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetPresetNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetPresetNo(Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetRecordInfoLocal)
	{
		P_GET_STRUCT(FCareerRecordInfo,Z_Param__Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecordInfoLocal(Z_Param__Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetRecordInfoTotal)
	{
		P_GET_STRUCT(FCareerRecordInfo,Z_Param__Info);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRecordInfoTotal(Z_Param__Info);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetRivalID)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetRivalID(EWrestlerID_N(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetScenarioID)
	{
		P_GET_ENUM(ECareerScenario,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScenarioID(ECareerScenario(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetScenarioPart)
	{
		P_GET_ENUM(ECareerScenarioPart,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetScenarioPart(ECareerScenarioPart(Z_Param__value));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSingleStoryCard)
	{
		P_GET_STRUCT(FCareerStoryCard,Z_Param__StoryCard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSingleStoryCard(Z_Param__StoryCard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSkillPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillPoint(Z_Param__value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSkillPointUpRate)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__SkillPointUpRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSkillPointUpRate(Z_Param__SkillPointUpRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSnapshotParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCareerSnapshotParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSnapshotParams)
	{
		P_GET_TARRAY_REF(FCareerSnapshotParam,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSnapshotParams(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSpecialRewardParam)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_STRUCT_REF(FCareerSpecialRewardParam,Z_Param_Out_Param);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialRewardParam(Z_Param_Index,Z_Param_Out_Param);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSpecialRewardParam_Dialog)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_UBOOL(Z_Param_Flag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialRewardParam_Dialog(Z_Param_Index,Z_Param_Flag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetSpecialRewardParams)
	{
		P_GET_TARRAY_REF(FCareerSpecialRewardParam,Z_Param_Out_Params);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetSpecialRewardParams(Z_Param_Out_Params);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetTonyKhanTweetKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Name);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTonyKhanTweetKey(Z_Param_Name);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetTutorialUseFlag)
	{
		P_GET_ENUM(ECareerTutorialCheckList,Z_Param_eCheckList);
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetTutorialUseFlag(ECareerTutorialCheckList(Z_Param_eCheckList),Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetUnlockDark)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnlockDark(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetUnlockRampage)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUnlockRampage(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetupAutoEventManager)
	{
		P_GET_OBJECT(UELCareerAutoEventManager,Z_Param_pAutoEventManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAutoEventManager(Z_Param_pAutoEventManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetupAutoPlayManager)
	{
		P_GET_OBJECT(UELCareerAutoPlayManager,Z_Param_pAutoPlayManager);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetupAutoPlayManager(Z_Param_pAutoPlayManager);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetUseTurnEnding)
	{
		P_GET_UBOOL(Z_Param__Flg);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUseTurnEnding(Z_Param__Flg);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetVegetarian)
	{
		P_GET_UBOOL(Z_Param_bFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetVegetarian(Z_Param_bFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELCareerGameParam::execSetWinnerWrestler)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param_eWrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetWinnerWrestler(EWrestlerID_N(Z_Param_eWrestlerID));
		P_NATIVE_END;
	}
	void UELCareerGameParam::StaticRegisterNativesUELCareerGameParam()
	{
		UClass* Class = UELCareerGameParam::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddDarkMatchCardInfo", &UELCareerGameParam::execAddDarkMatchCardInfo },
			{ "AddDarkMatchStoryCard", &UELCareerGameParam::execAddDarkMatchStoryCard },
			{ "AddItemNum", &UELCareerGameParam::execAddItemNum },
			{ "CheckTutorialUseFlag", &UELCareerGameParam::execCheckTutorialUseFlag },
			{ "ClearDarkMatchCardInfos", &UELCareerGameParam::execClearDarkMatchCardInfos },
			{ "ClearDarkMatchStoryCards", &UELCareerGameParam::execClearDarkMatchStoryCards },
			{ "ClearEventStockList", &UELCareerGameParam::execClearEventStockList },
			{ "ClearMainMatchResult", &UELCareerGameParam::execClearMainMatchResult },
			{ "ClearPostCommandEventList", &UELCareerGameParam::execClearPostCommandEventList },
			{ "ClearTonyKhanTweetKey", &UELCareerGameParam::execClearTonyKhanTweetKey },
			{ "ClearTutorialTemporary", &UELCareerGameParam::execClearTutorialTemporary },
			{ "DecrementItemNum", &UELCareerGameParam::execDecrementItemNum },
			{ "FindUnusedSnapshotIndex", &UELCareerGameParam::execFindUnusedSnapshotIndex },
			{ "GetActionSkillState", &UELCareerGameParam::execGetActionSkillState },
			{ "GetActionSkillStateList", &UELCareerGameParam::execGetActionSkillStateList },
			{ "GetAutoEventManager", &UELCareerGameParam::execGetAutoEventManager },
			{ "GetAutoPlayManager", &UELCareerGameParam::execGetAutoPlayManager },
			{ "GetCareerModeDifficulty", &UELCareerGameParam::execGetCareerModeDifficulty },
			{ "GetCareerMoney", &UELCareerGameParam::execGetCareerMoney },
			{ "GetCareerMyRosterData", &UELCareerGameParam::execGetCareerMyRosterData },
			{ "GetCareerMyScoutData", &UELCareerGameParam::execGetCareerMyScoutData },
			{ "GetCareerPlayDataInfo", &UELCareerGameParam::execGetCareerPlayDataInfo },
			{ "GetCareerWrestlerClearCount", &UELCareerGameParam::execGetCareerWrestlerClearCount },
			{ "GetChampionship", &UELCareerGameParam::execGetChampionship },
			{ "GetChampionshipHolder", &UELCareerGameParam::execGetChampionshipHolder },
			{ "GetChoicesSelectionInfo", &UELCareerGameParam::execGetChoicesSelectionInfo },
			{ "GetChoicesSelectionInfoByIndex", &UELCareerGameParam::execGetChoicesSelectionInfoByIndex },
			{ "GetCondition", &UELCareerGameParam::execGetCondition },
			{ "GetCurrentTotalScenarioTurn", &UELCareerGameParam::execGetCurrentTotalScenarioTurn },
			{ "GetCurrentTurn", &UELCareerGameParam::execGetCurrentTurn },
			{ "GetCurrentWeek", &UELCareerGameParam::execGetCurrentWeek },
			{ "GetCutsceneWrestler", &UELCareerGameParam::execGetCutsceneWrestler },
			{ "GetDarkMatchCardInfos", &UELCareerGameParam::execGetDarkMatchCardInfos },
			{ "GetDarkMatchStoryCards", &UELCareerGameParam::execGetDarkMatchStoryCards },
			{ "GetDateID", &UELCareerGameParam::execGetDateID },
			{ "GetEventStockList", &UELCareerGameParam::execGetEventStockList },
			{ "GetItemInfo", &UELCareerGameParam::execGetItemInfo },
			{ "GetItemInfoRef", &UELCareerGameParam::execGetItemInfoRef },
			{ "GetItemNum", &UELCareerGameParam::execGetItemNum },
			{ "GetLongStoryCard", &UELCareerGameParam::execGetLongStoryCard },
			{ "GetLoserWrestler", &UELCareerGameParam::execGetLoserWrestler },
			{ "GetMainMatchResultByScenarioPart", &UELCareerGameParam::execGetMainMatchResultByScenarioPart },
			{ "GetMainMatchResultByTiming", &UELCareerGameParam::execGetMainMatchResultByTiming },
			{ "GetMainMatchResults", &UELCareerGameParam::execGetMainMatchResults },
			{ "GetMatchRestHPRate", &UELCareerGameParam::execGetMatchRestHPRate },
			{ "GetMatchScore", &UELCareerGameParam::execGetMatchScore },
			{ "GetMatchVenue", &UELCareerGameParam::execGetMatchVenue },
			{ "GetMaxTurn", &UELCareerGameParam::execGetMaxTurn },
			{ "GetMinigameStoryCard", &UELCareerGameParam::execGetMinigameStoryCard },
			{ "GetMomentumUpRate", &UELCareerGameParam::execGetMomentumUpRate },
			{ "GetMotivation", &UELCareerGameParam::execGetMotivation },
			{ "GetNextStoryKey", &UELCareerGameParam::execGetNextStoryKey },
			{ "GetParameterSkillState", &UELCareerGameParam::execGetParameterSkillState },
			{ "GetParameterSkillStateList", &UELCareerGameParam::execGetParameterSkillStateList },
			{ "GetPartnerID", &UELCareerGameParam::execGetPartnerID },
			{ "GetPassiveSkillState", &UELCareerGameParam::execGetPassiveSkillState },
			{ "GetPassiveSkillStateList", &UELCareerGameParam::execGetPassiveSkillStateList },
			{ "GetPlayDarkMatchFlg", &UELCareerGameParam::execGetPlayDarkMatchFlg },
			{ "GetPlayerEditWrestlerGUID", &UELCareerGameParam::execGetPlayerEditWrestlerGUID },
			{ "GetPlayerEditWrestlerPersonality", &UELCareerGameParam::execGetPlayerEditWrestlerPersonality },
			{ "GetPlayerWrestlerID", &UELCareerGameParam::execGetPlayerWrestlerID },
			{ "GetPostCommandEventList", &UELCareerGameParam::execGetPostCommandEventList },
			{ "GetPostCommandEventListWithTurn", &UELCareerGameParam::execGetPostCommandEventListWithTurn },
			{ "GetPresetNo", &UELCareerGameParam::execGetPresetNo },
			{ "GetRecordInfoLocal", &UELCareerGameParam::execGetRecordInfoLocal },
			{ "GetRecordInfoTotal", &UELCareerGameParam::execGetRecordInfoTotal },
			{ "GetRivalID", &UELCareerGameParam::execGetRivalID },
			{ "GetScenarioID", &UELCareerGameParam::execGetScenarioID },
			{ "GetScenarioPart", &UELCareerGameParam::execGetScenarioPart },
			{ "GetSingleStoryCard", &UELCareerGameParam::execGetSingleStoryCard },
			{ "GetSkillPoint", &UELCareerGameParam::execGetSkillPoint },
			{ "GetSkillPointUpRate", &UELCareerGameParam::execGetSkillPointUpRate },
			{ "GetSnapshotParam", &UELCareerGameParam::execGetSnapshotParam },
			{ "GetSnapshotParams", &UELCareerGameParam::execGetSnapshotParams },
			{ "GetSpecialRewardParam", &UELCareerGameParam::execGetSpecialRewardParam },
			{ "GetSpecialRewardParams", &UELCareerGameParam::execGetSpecialRewardParams },
			{ "GetSuccessRate", &UELCareerGameParam::execGetSuccessRate },
			{ "GetTonyKhanTweetKey", &UELCareerGameParam::execGetTonyKhanTweetKey },
			{ "GetTutorialTemporary", &UELCareerGameParam::execGetTutorialTemporary },
			{ "GetTutorialUseFlag", &UELCareerGameParam::execGetTutorialUseFlag },
			{ "GetUseTurnEnding", &UELCareerGameParam::execGetUseTurnEnding },
			{ "GetWinnerWrestler", &UELCareerGameParam::execGetWinnerWrestler },
			{ "GetWrestlerClearCount", &UELCareerGameParam::execGetWrestlerClearCount },
			{ "GetWrestlerProfileSkill", &UELCareerGameParam::execGetWrestlerProfileSkill },
			{ "HasSpecialRewardParams", &UELCareerGameParam::execHasSpecialRewardParams },
			{ "HasTookSnapshot", &UELCareerGameParam::execHasTookSnapshot },
			{ "IncrementWrestlerClearCount", &UELCareerGameParam::execIncrementWrestlerClearCount },
			{ "Init", &UELCareerGameParam::execInit },
			{ "IsAttackedManager", &UELCareerGameParam::execIsAttackedManager },
			{ "IsCAWtoHUB", &UELCareerGameParam::execIsCAWtoHUB },
			{ "IsChallengeAddPlayedCareerMode", &UELCareerGameParam::execIsChallengeAddPlayedCareerMode },
			{ "IsChampionshipHolder", &UELCareerGameParam::execIsChampionshipHolder },
			{ "IsDispSubtitles", &UELCareerGameParam::execIsDispSubtitles },
			{ "IsDispTutorialDialog", &UELCareerGameParam::execIsDispTutorialDialog },
			{ "IsInjury", &UELCareerGameParam::execIsInjury },
			{ "IsMatchInjury", &UELCareerGameParam::execIsMatchInjury },
			{ "IsMatchOperationKeyboard", &UELCareerGameParam::execIsMatchOperationKeyboard },
			{ "IsMatchWin", &UELCareerGameParam::execIsMatchWin },
			{ "IsMenuActionSelectedFlag", &UELCareerGameParam::execIsMenuActionSelectedFlag },
			{ "IsOuting", &UELCareerGameParam::execIsOuting },
			{ "IsUnlockDark", &UELCareerGameParam::execIsUnlockDark },
			{ "IsUnlockRampage", &UELCareerGameParam::execIsUnlockRampage },
			{ "IsVegetarian", &UELCareerGameParam::execIsVegetarian },
			{ "PopTookSnapshot", &UELCareerGameParam::execPopTookSnapshot },
			{ "PushTookSnapshot", &UELCareerGameParam::execPushTookSnapshot },
			{ "SetActionSkillState", &UELCareerGameParam::execSetActionSkillState },
			{ "SetAllDisableMenuActionSelectedFlag", &UELCareerGameParam::execSetAllDisableMenuActionSelectedFlag },
			{ "SetAttackedManager", &UELCareerGameParam::execSetAttackedManager },
			{ "SetCareerModeDifficulty", &UELCareerGameParam::execSetCareerModeDifficulty },
			{ "SetCareerMoney", &UELCareerGameParam::execSetCareerMoney },
			{ "SetCareerMyRosterData", &UELCareerGameParam::execSetCareerMyRosterData },
			{ "SetCareerMyScoutData", &UELCareerGameParam::execSetCareerMyScoutData },
			{ "SetCareerPlayDataInfo", &UELCareerGameParam::execSetCareerPlayDataInfo },
			{ "SetCAWtoHUB", &UELCareerGameParam::execSetCAWtoHUB },
			{ "SetChallengeAddPlayedCareerMode", &UELCareerGameParam::execSetChallengeAddPlayedCareerMode },
			{ "SetChampionship1st", &UELCareerGameParam::execSetChampionship1st },
			{ "SetChampionship2nd", &UELCareerGameParam::execSetChampionship2nd },
			{ "SetChampionshipHolder", &UELCareerGameParam::execSetChampionshipHolder },
			{ "SetChoicesSelectionInfo", &UELCareerGameParam::execSetChoicesSelectionInfo },
			{ "SetCondition", &UELCareerGameParam::execSetCondition },
			{ "SetCurrentTotalScenarioTurn", &UELCareerGameParam::execSetCurrentTotalScenarioTurn },
			{ "SetCurrentTurn", &UELCareerGameParam::execSetCurrentTurn },
			{ "SetCurrentWeek", &UELCareerGameParam::execSetCurrentWeek },
			{ "SetCutsceneWrestler", &UELCareerGameParam::execSetCutsceneWrestler },
			{ "SetDateID", &UELCareerGameParam::execSetDateID },
			{ "SetDisableMenuActionSelectedFlag", &UELCareerGameParam::execSetDisableMenuActionSelectedFlag },
			{ "SetDispSubtitles", &UELCareerGameParam::execSetDispSubtitles },
			{ "SetDispTutorialDialog", &UELCareerGameParam::execSetDispTutorialDialog },
			{ "SetEnableMenuActionSelectedFlag", &UELCareerGameParam::execSetEnableMenuActionSelectedFlag },
			{ "SetEventStockList", &UELCareerGameParam::execSetEventStockList },
			{ "SetInjury", &UELCareerGameParam::execSetInjury },
			{ "SetItemInfo", &UELCareerGameParam::execSetItemInfo },
			{ "SetItemNum", &UELCareerGameParam::execSetItemNum },
			{ "SetLongStoryCard", &UELCareerGameParam::execSetLongStoryCard },
			{ "SetLoserWrestler", &UELCareerGameParam::execSetLoserWrestler },
			{ "SetMainMatchResult", &UELCareerGameParam::execSetMainMatchResult },
			{ "SetMatchInjury", &UELCareerGameParam::execSetMatchInjury },
			{ "SetMatchOperationKeyboard", &UELCareerGameParam::execSetMatchOperationKeyboard },
			{ "SetMatchRestHPRate", &UELCareerGameParam::execSetMatchRestHPRate },
			{ "SetMatchScore", &UELCareerGameParam::execSetMatchScore },
			{ "SetMatchVenue", &UELCareerGameParam::execSetMatchVenue },
			{ "SetMatchWin", &UELCareerGameParam::execSetMatchWin },
			{ "SetMaxTurn", &UELCareerGameParam::execSetMaxTurn },
			{ "SetMinigameStoryCard", &UELCareerGameParam::execSetMinigameStoryCard },
			{ "SetMomentumUpRate", &UELCareerGameParam::execSetMomentumUpRate },
			{ "SetMotivation", &UELCareerGameParam::execSetMotivation },
			{ "SetNextStoryKey", &UELCareerGameParam::execSetNextStoryKey },
			{ "SetOutingFlag", &UELCareerGameParam::execSetOutingFlag },
			{ "SetParameterSkillState", &UELCareerGameParam::execSetParameterSkillState },
			{ "SetPartnerID", &UELCareerGameParam::execSetPartnerID },
			{ "SetPassiveSkillState", &UELCareerGameParam::execSetPassiveSkillState },
			{ "SetPlayDarkMatchFlg", &UELCareerGameParam::execSetPlayDarkMatchFlg },
			{ "SetPlayerEditWrestlerGUID", &UELCareerGameParam::execSetPlayerEditWrestlerGUID },
			{ "SetPlayerEditWrestlerPersonality", &UELCareerGameParam::execSetPlayerEditWrestlerPersonality },
			{ "SetPlayerWrestlerID", &UELCareerGameParam::execSetPlayerWrestlerID },
			{ "SetPostCommandEventList", &UELCareerGameParam::execSetPostCommandEventList },
			{ "SetPresetNo", &UELCareerGameParam::execSetPresetNo },
			{ "SetRecordInfoLocal", &UELCareerGameParam::execSetRecordInfoLocal },
			{ "SetRecordInfoTotal", &UELCareerGameParam::execSetRecordInfoTotal },
			{ "SetRivalID", &UELCareerGameParam::execSetRivalID },
			{ "SetScenarioID", &UELCareerGameParam::execSetScenarioID },
			{ "SetScenarioPart", &UELCareerGameParam::execSetScenarioPart },
			{ "SetSingleStoryCard", &UELCareerGameParam::execSetSingleStoryCard },
			{ "SetSkillPoint", &UELCareerGameParam::execSetSkillPoint },
			{ "SetSkillPointUpRate", &UELCareerGameParam::execSetSkillPointUpRate },
			{ "SetSnapshotParam", &UELCareerGameParam::execSetSnapshotParam },
			{ "SetSnapshotParams", &UELCareerGameParam::execSetSnapshotParams },
			{ "SetSpecialRewardParam", &UELCareerGameParam::execSetSpecialRewardParam },
			{ "SetSpecialRewardParam_Dialog", &UELCareerGameParam::execSetSpecialRewardParam_Dialog },
			{ "SetSpecialRewardParams", &UELCareerGameParam::execSetSpecialRewardParams },
			{ "SetTonyKhanTweetKey", &UELCareerGameParam::execSetTonyKhanTweetKey },
			{ "SetTutorialUseFlag", &UELCareerGameParam::execSetTutorialUseFlag },
			{ "SetUnlockDark", &UELCareerGameParam::execSetUnlockDark },
			{ "SetUnlockRampage", &UELCareerGameParam::execSetUnlockRampage },
			{ "SetupAutoEventManager", &UELCareerGameParam::execSetupAutoEventManager },
			{ "SetupAutoPlayManager", &UELCareerGameParam::execSetupAutoPlayManager },
			{ "SetUseTurnEnding", &UELCareerGameParam::execSetUseTurnEnding },
			{ "SetVegetarian", &UELCareerGameParam::execSetVegetarian },
			{ "SetWinnerWrestler", &UELCareerGameParam::execSetWinnerWrestler },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics
	{
		struct ELCareerGameParam_eventAddDarkMatchCardInfo_Parms
		{
			FCareerMatchCardCore _MatchCardInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__MatchCardInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::NewProp__MatchCardInfo = { "_MatchCardInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventAddDarkMatchCardInfo_Parms, _MatchCardInfo), Z_Construct_UScriptStruct_FCareerMatchCardCore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::NewProp__MatchCardInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "AddDarkMatchCardInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventAddDarkMatchCardInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics
	{
		struct ELCareerGameParam_eventAddDarkMatchStoryCard_Parms
		{
			FCareerStoryCard _StoryCardInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StoryCardInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::NewProp__StoryCardInfo = { "_StoryCardInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventAddDarkMatchStoryCard_Parms, _StoryCardInfo), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::NewProp__StoryCardInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "AddDarkMatchStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventAddDarkMatchStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics
	{
		struct ELCareerGameParam_eventAddItemNum_Parms
		{
			ECareerItemNo _ItemNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventAddItemNum_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::NewProp__ItemNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "AddItemNum", nullptr, nullptr, sizeof(ELCareerGameParam_eventAddItemNum_Parms), Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_AddItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_AddItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics
	{
		struct ELCareerGameParam_eventCheckTutorialUseFlag_Parms
		{
			ECareerTutorialCheckList eCheckList;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eCheckList_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eCheckList;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_eCheckList_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_eCheckList = { "eCheckList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventCheckTutorialUseFlag_Parms, eCheckList), Z_Construct_UEnum_ABP_200508_ECareerTutorialCheckList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventCheckTutorialUseFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventCheckTutorialUseFlag_Parms), &Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_eCheckList_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_eCheckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "CheckTutorialUseFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventCheckTutorialUseFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearDarkMatchCardInfos", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearDarkMatchStoryCards", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearEventStockList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearMainMatchResult", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearPostCommandEventList", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearTonyKhanTweetKey", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "ClearTutorialTemporary", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics
	{
		struct ELCareerGameParam_eventDecrementItemNum_Parms
		{
			ECareerItemNo _ItemNo;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventDecrementItemNum_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::NewProp__ItemNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "DecrementItemNum", nullptr, nullptr, sizeof(ELCareerGameParam_eventDecrementItemNum_Parms), Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics
	{
		struct ELCareerGameParam_eventFindUnusedSnapshotIndex_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventFindUnusedSnapshotIndex_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "FindUnusedSnapshotIndex", nullptr, nullptr, sizeof(ELCareerGameParam_eventFindUnusedSnapshotIndex_Parms), Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics
	{
		struct ELCareerGameParam_eventGetActionSkillState_Parms
		{
			ECareerActionSkillNo _SkillNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetActionSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerActionSkillNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetActionSkillState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetActionSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetActionSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics
	{
		struct ELCareerGameParam_eventGetActionSkillStateList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetActionSkillStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetActionSkillStateList", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetActionSkillStateList_Parms), Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics
	{
		struct ELCareerGameParam_eventGetAutoEventManager_Parms
		{
			UELCareerAutoEventManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetAutoEventManager_Parms, ReturnValue), Z_Construct_UClass_UELCareerAutoEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetAutoEventManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetAutoEventManager_Parms), Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics
	{
		struct ELCareerGameParam_eventGetAutoPlayManager_Parms
		{
			UELCareerAutoPlayManager* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetAutoPlayManager_Parms, ReturnValue), Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetAutoPlayManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetAutoPlayManager_Parms), Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics
	{
		struct ELCareerGameParam_eventGetCareerModeDifficulty_Parms
		{
			ECareerModeDifficulty ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerModeDifficulty_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerModeDifficulty", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerModeDifficulty_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics
	{
		struct ELCareerGameParam_eventGetCareerMoney_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerMoney", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerMoney_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics
	{
		struct ELCareerGameParam_eventGetCareerMyRosterData_Parms
		{
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerMyRosterData_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerMyRosterData", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerMyRosterData_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics
	{
		struct ELCareerGameParam_eventGetCareerMyScoutData_Parms
		{
			UMyWrestlerDataObject* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerMyScoutData_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerMyScoutData", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerMyScoutData_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics
	{
		struct ELCareerGameParam_eventGetCareerPlayDataInfo_Parms
		{
			FCareerPlayDataInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerPlayDataInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPlayDataInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerPlayDataInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerPlayDataInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics
	{
		struct ELCareerGameParam_eventGetCareerWrestlerClearCount_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCareerWrestlerClearCount_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCareerWrestlerClearCount", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCareerWrestlerClearCount_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics
	{
		struct ELCareerGameParam_eventGetChampionship_Parms
		{
			EELBelt eChampionshipType;
			FCareerChampionshipCore ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eChampionshipType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eChampionshipType;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_eChampionshipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_eChampionshipType = { "eChampionshipType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChampionship_Parms, eChampionshipType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChampionship_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerChampionshipCore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_eChampionshipType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_eChampionshipType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetChampionship", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetChampionship_Parms), Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetChampionship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetChampionship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics
	{
		struct ELCareerGameParam_eventGetChampionshipHolder_Parms
		{
			FCareerChampionshipHolder ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChampionshipHolder_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerChampionshipHolder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetChampionshipHolder", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetChampionshipHolder_Parms), Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics
	{
		struct ELCareerGameParam_eventGetChoicesSelectionInfo_Parms
		{
			TArray<ECareerChoicesPattern> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChoicesSelectionInfo_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetChoicesSelectionInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetChoicesSelectionInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics
	{
		struct ELCareerGameParam_eventGetChoicesSelectionInfoByIndex_Parms
		{
			ECareerChoicesSelectionResult _SaveSelection;
			ECareerChoicesPattern ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SaveSelection_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SaveSelection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp__SaveSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp__SaveSelection = { "_SaveSelection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChoicesSelectionInfoByIndex_Parms, _SaveSelection), Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetChoicesSelectionInfoByIndex_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp__SaveSelection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp__SaveSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetChoicesSelectionInfoByIndex", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetChoicesSelectionInfoByIndex_Parms), Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics
	{
		struct ELCareerGameParam_eventGetCondition_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCondition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCondition", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCondition_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics
	{
		struct ELCareerGameParam_eventGetCurrentTotalScenarioTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCurrentTotalScenarioTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCurrentTotalScenarioTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCurrentTotalScenarioTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics
	{
		struct ELCareerGameParam_eventGetCurrentTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCurrentTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCurrentTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCurrentTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics
	{
		struct ELCareerGameParam_eventGetCurrentWeek_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCurrentWeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCurrentWeek", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCurrentWeek_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics
	{
		struct ELCareerGameParam_eventGetCutsceneWrestler_Parms
		{
			ECareerCutsceneCastType CastType;
			AActor* ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_CastType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_CastType = { "CastType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCutsceneWrestler_Parms, CastType), Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetCutsceneWrestler_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_CastType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_CastType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetCutsceneWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetCutsceneWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics
	{
		struct ELCareerGameParam_eventGetDarkMatchCardInfos_Parms
		{
			TArray<FCareerMatchCardCore> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerMatchCardCore, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetDarkMatchCardInfos_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetDarkMatchCardInfos", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetDarkMatchCardInfos_Parms), Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics
	{
		struct ELCareerGameParam_eventGetDarkMatchStoryCards_Parms
		{
			TArray<FCareerStoryCard> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetDarkMatchStoryCards_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetDarkMatchStoryCards", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetDarkMatchStoryCards_Parms), Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics
	{
		struct ELCareerGameParam_eventGetDateID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetDateID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetDateID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetDateID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetDateID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetDateID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics
	{
		struct ELCareerGameParam_eventGetEventStockList_Parms
		{
			TArray<FCareerVeryShortEventStockInfo> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetEventStockList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetEventStockList", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetEventStockList_Parms), Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetEventStockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetEventStockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics
	{
		struct ELCareerGameParam_eventGetItemInfo_Parms
		{
			FCareerPlayerItemInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetItemInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetItemInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics
	{
		struct ELCareerGameParam_eventGetItemInfoRef_Parms
		{
			FCareerPlayerItemInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetItemInfoRef_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetItemInfoRef", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetItemInfoRef_Parms), Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics
	{
		struct ELCareerGameParam_eventGetItemNum_Parms
		{
			ECareerItemNo _ItemNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetItemNum_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetItemNum_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp__ItemNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetItemNum", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetItemNum_Parms), Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics
	{
		struct ELCareerGameParam_eventGetLongStoryCard_Parms
		{
			FCareerStoryCard ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetLongStoryCard_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetLongStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetLongStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics
	{
		struct ELCareerGameParam_eventGetLoserWrestler_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetLoserWrestler_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetLoserWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetLoserWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics
	{
		struct ELCareerGameParam_eventGetMainMatchResultByScenarioPart_Parms
		{
			ECareerScenarioPart _Part;
			FCareerMainMatchResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Part_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Part;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp__Part_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp__Part = { "_Part", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMainMatchResultByScenarioPart_Parms, _Part), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMainMatchResultByScenarioPart_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerMainMatchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp__Part_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp__Part,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMainMatchResultByScenarioPart", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMainMatchResultByScenarioPart_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics
	{
		struct ELCareerGameParam_eventGetMainMatchResultByTiming_Parms
		{
			ECareerScenarioMatchTiming _Timing;
			FCareerMainMatchResult ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Timing_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Timing;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp__Timing_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp__Timing = { "_Timing", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMainMatchResultByTiming_Parms, _Timing), Z_Construct_UEnum_ABP_200508_ECareerScenarioMatchTiming, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMainMatchResultByTiming_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerMainMatchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp__Timing_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp__Timing,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMainMatchResultByTiming", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMainMatchResultByTiming_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics
	{
		struct ELCareerGameParam_eventGetMainMatchResults_Parms
		{
			TArray<FCareerMainMatchResult> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerMainMatchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMainMatchResults_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMainMatchResults", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMainMatchResults_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics
	{
		struct ELCareerGameParam_eventGetMatchRestHPRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMatchRestHPRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMatchRestHPRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMatchRestHPRate_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics
	{
		struct ELCareerGameParam_eventGetMatchScore_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMatchScore_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMatchScore", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMatchScore_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMatchScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMatchScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics
	{
		struct ELCareerGameParam_eventGetMatchVenue_Parms
		{
			ECareerCity ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMatchVenue_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMatchVenue", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMatchVenue_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics
	{
		struct ELCareerGameParam_eventGetMaxTurn_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMaxTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMaxTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMaxTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics
	{
		struct ELCareerGameParam_eventGetMinigameStoryCard_Parms
		{
			FCareerStoryCard ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMinigameStoryCard_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMinigameStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMinigameStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics
	{
		struct ELCareerGameParam_eventGetMomentumUpRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMomentumUpRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMomentumUpRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMomentumUpRate_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics
	{
		struct ELCareerGameParam_eventGetMotivation_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetMotivation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetMotivation", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetMotivation_Parms), Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics
	{
		struct ELCareerGameParam_eventGetNextStoryKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetNextStoryKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetNextStoryKey", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetNextStoryKey_Parms), Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics
	{
		struct ELCareerGameParam_eventGetParameterSkillState_Parms
		{
			ECareerParameterSkillItem _SkillNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetParameterSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetParameterSkillState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetParameterSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetParameterSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics
	{
		struct ELCareerGameParam_eventGetParameterSkillStateList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetParameterSkillStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetParameterSkillStateList", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetParameterSkillStateList_Parms), Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics
	{
		struct ELCareerGameParam_eventGetPartnerID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPartnerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPartnerID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPartnerID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPartnerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPartnerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics
	{
		struct ELCareerGameParam_eventGetPassiveSkillState_Parms
		{
			ECareerPassiveSkillNo _SkillNo;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPassiveSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPassiveSkillState_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPassiveSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPassiveSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics
	{
		struct ELCareerGameParam_eventGetPassiveSkillStateList_Parms
		{
			TArray<int32> ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPassiveSkillStateList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPassiveSkillStateList", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPassiveSkillStateList_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics
	{
		struct ELCareerGameParam_eventGetPlayDarkMatchFlg_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventGetPlayDarkMatchFlg_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventGetPlayDarkMatchFlg_Parms), &Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPlayDarkMatchFlg", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPlayDarkMatchFlg_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics
	{
		struct ELCareerGameParam_eventGetPlayerEditWrestlerGUID_Parms
		{
			FGuid ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPlayerEditWrestlerGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPlayerEditWrestlerGUID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPlayerEditWrestlerGUID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics
	{
		struct ELCareerGameParam_eventGetPlayerEditWrestlerPersonality_Parms
		{
			EPersonalityType ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPlayerEditWrestlerPersonality_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPlayerEditWrestlerPersonality", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPlayerEditWrestlerPersonality_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics
	{
		struct ELCareerGameParam_eventGetPlayerWrestlerID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPlayerWrestlerID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPlayerWrestlerID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPlayerWrestlerID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics
	{
		struct ELCareerGameParam_eventGetPostCommandEventList_Parms
		{
			TArray<FCareerPostCommandEventList> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPostCommandEventList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPostCommandEventList", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPostCommandEventList_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics
	{
		struct ELCareerGameParam_eventGetPostCommandEventListWithTurn_Parms
		{
			int32 _Turn;
			FCareerPostCommandEventList ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Turn;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::NewProp__Turn = { "_Turn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPostCommandEventListWithTurn_Parms, _Turn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPostCommandEventListWithTurn_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::NewProp__Turn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPostCommandEventListWithTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPostCommandEventListWithTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics
	{
		struct ELCareerGameParam_eventGetPresetNo_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetPresetNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetPresetNo", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetPresetNo_Parms), Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics
	{
		struct ELCareerGameParam_eventGetRecordInfoLocal_Parms
		{
			FCareerRecordInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetRecordInfoLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetRecordInfoLocal", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetRecordInfoLocal_Parms), Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics
	{
		struct ELCareerGameParam_eventGetRecordInfoTotal_Parms
		{
			FCareerRecordInfo ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetRecordInfoTotal_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetRecordInfoTotal", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetRecordInfoTotal_Parms), Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics
	{
		struct ELCareerGameParam_eventGetRivalID_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetRivalID_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetRivalID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetRivalID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetRivalID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetRivalID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics
	{
		struct ELCareerGameParam_eventGetScenarioID_Parms
		{
			ECareerScenario ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetScenarioID_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetScenarioID", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetScenarioID_Parms), Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetScenarioID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetScenarioID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics
	{
		struct ELCareerGameParam_eventGetScenarioPart_Parms
		{
			ECareerScenarioPart ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetScenarioPart_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetScenarioPart", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetScenarioPart_Parms), Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics
	{
		struct ELCareerGameParam_eventGetSingleStoryCard_Parms
		{
			FCareerStoryCard ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSingleStoryCard_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSingleStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSingleStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics
	{
		struct ELCareerGameParam_eventGetSkillPoint_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSkillPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSkillPoint", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSkillPoint_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics
	{
		struct ELCareerGameParam_eventGetSkillPointUpRate_Parms
		{
			float ReturnValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSkillPointUpRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSkillPointUpRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSkillPointUpRate_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics
	{
		struct ELCareerGameParam_eventGetSnapshotParam_Parms
		{
			int32 Index;
			FCareerSnapshotParam ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSnapshotParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSnapshotParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSnapshotParam", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSnapshotParam_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics
	{
		struct ELCareerGameParam_eventGetSnapshotParams_Parms
		{
			TArray<FCareerSnapshotParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSnapshotParams_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSnapshotParams", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSnapshotParams_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics
	{
		struct ELCareerGameParam_eventGetSpecialRewardParam_Parms
		{
			int32 Index;
			FCareerSpecialRewardParam ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSpecialRewardParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSpecialRewardParam_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerSpecialRewardParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSpecialRewardParam", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSpecialRewardParam_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics
	{
		struct ELCareerGameParam_eventGetSpecialRewardParams_Parms
		{
			TArray<FCareerSpecialRewardParam> ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSpecialRewardParam, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSpecialRewardParams_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSpecialRewardParams", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSpecialRewardParams_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics
	{
		struct ELCareerGameParam_eventGetSuccessRate_Parms
		{
			FCareerMenuItem _Param;
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Param;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::NewProp__Param = { "_Param", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSuccessRate_Parms, _Param), Z_Construct_UScriptStruct_FCareerMenuItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetSuccessRate_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::NewProp__Param,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetSuccessRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetSuccessRate_Parms), Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics
	{
		struct ELCareerGameParam_eventGetTonyKhanTweetKey_Parms
		{
			FName ReturnValue;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetTonyKhanTweetKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetTonyKhanTweetKey", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetTonyKhanTweetKey_Parms), Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics
	{
		struct ELCareerGameParam_eventGetTutorialTemporary_Parms
		{
			FCareerTutorialTemporary ReturnValue;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetTutorialTemporary_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerTutorialTemporary, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetTutorialTemporary", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetTutorialTemporary_Parms), Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics
	{
		struct ELCareerGameParam_eventGetTutorialUseFlag_Parms
		{
			TArray<uint8> ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetTutorialUseFlag_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::NewProp_ReturnValue_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetTutorialUseFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetTutorialUseFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics
	{
		struct ELCareerGameParam_eventGetUseTurnEnding_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventGetUseTurnEnding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventGetUseTurnEnding_Parms), &Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetUseTurnEnding", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetUseTurnEnding_Parms), Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics
	{
		struct ELCareerGameParam_eventGetWinnerWrestler_Parms
		{
			EWrestlerID_N ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetWinnerWrestler_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetWinnerWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetWinnerWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics
	{
		struct ELCareerGameParam_eventGetWrestlerClearCount_Parms
		{
			int32 wrestlerNo;
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_wrestlerNo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::NewProp_wrestlerNo = { "wrestlerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetWrestlerClearCount_Parms, wrestlerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetWrestlerClearCount_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::NewProp_wrestlerNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetWrestlerClearCount", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetWrestlerClearCount_Parms), Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics
	{
		struct ELCareerGameParam_eventGetWrestlerProfileSkill_Parms
		{
			FELWrestlerProfile_Skill OutResult;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_OutResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::NewProp_OutResult = { "OutResult", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventGetWrestlerProfileSkill_Parms, OutResult), Z_Construct_UScriptStruct_FELWrestlerProfile_Skill, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::NewProp_OutResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "GetWrestlerProfileSkill", nullptr, nullptr, sizeof(ELCareerGameParam_eventGetWrestlerProfileSkill_Parms), Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics
	{
		struct ELCareerGameParam_eventHasSpecialRewardParams_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventHasSpecialRewardParams_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventHasSpecialRewardParams_Parms), &Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "HasSpecialRewardParams", nullptr, nullptr, sizeof(ELCareerGameParam_eventHasSpecialRewardParams_Parms), Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics
	{
		struct ELCareerGameParam_eventHasTookSnapshot_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventHasTookSnapshot_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventHasTookSnapshot_Parms), &Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "HasTookSnapshot", nullptr, nullptr, sizeof(ELCareerGameParam_eventHasTookSnapshot_Parms), Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics
	{
		struct ELCareerGameParam_eventIncrementWrestlerClearCount_Parms
		{
			int32 wrestlerNo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_wrestlerNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::NewProp_wrestlerNo = { "wrestlerNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventIncrementWrestlerClearCount_Parms, wrestlerNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::NewProp_wrestlerNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IncrementWrestlerClearCount", nullptr, nullptr, sizeof(ELCareerGameParam_eventIncrementWrestlerClearCount_Parms), Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_Init_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_Init_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_Init_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "Init", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_Init_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_Init_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_Init()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_Init_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics
	{
		struct ELCareerGameParam_eventIsAttackedManager_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsAttackedManager_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsAttackedManager_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsAttackedManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsAttackedManager_Parms), Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics
	{
		struct ELCareerGameParam_eventIsCAWtoHUB_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsCAWtoHUB_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsCAWtoHUB_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsCAWtoHUB", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsCAWtoHUB_Parms), Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics
	{
		struct ELCareerGameParam_eventIsChallengeAddPlayedCareerMode_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsChallengeAddPlayedCareerMode_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsChallengeAddPlayedCareerMode_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsChallengeAddPlayedCareerMode", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsChallengeAddPlayedCareerMode_Parms), Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics
	{
		struct ELCareerGameParam_eventIsChampionshipHolder_Parms
		{
			EELBelt eChampionshipType;
			EWrestlerID_N in_Wrestler;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eChampionshipType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eChampionshipType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_Wrestler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_in_Wrestler;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_eChampionshipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_eChampionshipType = { "eChampionshipType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventIsChampionshipHolder_Parms, eChampionshipType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_in_Wrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_in_Wrestler = { "in_Wrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventIsChampionshipHolder_Parms, in_Wrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsChampionshipHolder_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsChampionshipHolder_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_eChampionshipType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_eChampionshipType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_in_Wrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_in_Wrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsChampionshipHolder", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsChampionshipHolder_Parms), Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics
	{
		struct ELCareerGameParam_eventIsDispSubtitles_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsDispSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsDispSubtitles_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsDispSubtitles", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsDispSubtitles_Parms), Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics
	{
		struct ELCareerGameParam_eventIsDispTutorialDialog_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsDispTutorialDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsDispTutorialDialog_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsDispTutorialDialog", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsDispTutorialDialog_Parms), Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics
	{
		struct ELCareerGameParam_eventIsInjury_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsInjury_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsInjury_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsInjury", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsInjury_Parms), Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics
	{
		struct ELCareerGameParam_eventIsMatchInjury_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsMatchInjury_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsMatchInjury_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsMatchInjury", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsMatchInjury_Parms), Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics
	{
		struct ELCareerGameParam_eventIsMatchOperationKeyboard_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsMatchOperationKeyboard_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsMatchOperationKeyboard_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsMatchOperationKeyboard", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsMatchOperationKeyboard_Parms), Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics
	{
		struct ELCareerGameParam_eventIsMatchWin_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsMatchWin_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsMatchWin_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsMatchWin", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsMatchWin_Parms), Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsMatchWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsMatchWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics
	{
		struct ELCareerGameParam_eventIsMenuActionSelectedFlag_Parms
		{
			ECareerMenuActionAlreadySelectedFlag _Flag;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Flag;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp__Flag = { "_Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventIsMenuActionSelectedFlag_Parms, _Flag), Z_Construct_UEnum_ABP_200508_ECareerMenuActionAlreadySelectedFlag, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsMenuActionSelectedFlag_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsMenuActionSelectedFlag_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp__Flag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsMenuActionSelectedFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsMenuActionSelectedFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics
	{
		struct ELCareerGameParam_eventIsOuting_Parms
		{
			int32 ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventIsOuting_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsOuting", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsOuting_Parms), Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsOuting()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsOuting_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics
	{
		struct ELCareerGameParam_eventIsUnlockDark_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsUnlockDark_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsUnlockDark_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsUnlockDark", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsUnlockDark_Parms), Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics
	{
		struct ELCareerGameParam_eventIsUnlockRampage_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsUnlockRampage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsUnlockRampage_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsUnlockRampage", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsUnlockRampage_Parms), Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics
	{
		struct ELCareerGameParam_eventIsVegetarian_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventIsVegetarian_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventIsVegetarian_Parms), &Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "IsVegetarian", nullptr, nullptr, sizeof(ELCareerGameParam_eventIsVegetarian_Parms), Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_IsVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_IsVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics
	{
		struct ELCareerGameParam_eventPopTookSnapshot_Parms
		{
			UCareerSnapshot* ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventPopTookSnapshot_Parms, ReturnValue), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "PopTookSnapshot", nullptr, nullptr, sizeof(ELCareerGameParam_eventPopTookSnapshot_Parms), Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics
	{
		struct ELCareerGameParam_eventPushTookSnapshot_Parms
		{
			UCareerSnapshot* Snapshot;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Snapshot;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::NewProp_Snapshot = { "Snapshot", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventPushTookSnapshot_Parms, Snapshot), Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::NewProp_Snapshot,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "PushTookSnapshot", nullptr, nullptr, sizeof(ELCareerGameParam_eventPushTookSnapshot_Parms), Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics
	{
		struct ELCareerGameParam_eventSetActionSkillState_Parms
		{
			ECareerActionSkillNo _SkillNo;
			int32 _state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetActionSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerActionSkillNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetActionSkillState_Parms, _state), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetActionSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetActionSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetAllDisableMenuActionSelectedFlag", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics
	{
		struct ELCareerGameParam_eventSetAttackedManager_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetAttackedManager_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetAttackedManager_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetAttackedManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetAttackedManager_Parms), Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics
	{
		struct ELCareerGameParam_eventSetCareerModeDifficulty_Parms
		{
			ECareerModeDifficulty _Difficulty;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Difficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Difficulty;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::NewProp__Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::NewProp__Difficulty = { "_Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCareerModeDifficulty_Parms, _Difficulty), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::NewProp__Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::NewProp__Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCareerModeDifficulty", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCareerModeDifficulty_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics
	{
		struct ELCareerGameParam_eventSetCareerMoney_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCareerMoney_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCareerMoney", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCareerMoney_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics
	{
		struct ELCareerGameParam_eventSetCareerMyRosterData_Parms
		{
			UMyWrestlerDataObject* _CareeMyRosterData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CareeMyRosterData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::NewProp__CareeMyRosterData = { "_CareeMyRosterData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCareerMyRosterData_Parms, _CareeMyRosterData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::NewProp__CareeMyRosterData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCareerMyRosterData", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCareerMyRosterData_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics
	{
		struct ELCareerGameParam_eventSetCareerMyScoutData_Parms
		{
			UMyWrestlerDataObject* _CareeMyScoutData;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__CareeMyScoutData;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::NewProp__CareeMyScoutData = { "_CareeMyScoutData", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCareerMyScoutData_Parms, _CareeMyScoutData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::NewProp__CareeMyScoutData,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCareerMyScoutData", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCareerMyScoutData_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics
	{
		struct ELCareerGameParam_eventSetCareerPlayDataInfo_Parms
		{
			FCareerPlayDataInfo _Info;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::NewProp__Info = { "_Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCareerPlayDataInfo_Parms, _Info), Z_Construct_UScriptStruct_FCareerPlayDataInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::NewProp__Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCareerPlayDataInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCareerPlayDataInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics
	{
		struct ELCareerGameParam_eventSetCAWtoHUB_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetCAWtoHUB_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetCAWtoHUB_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCAWtoHUB", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCAWtoHUB_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics
	{
		struct ELCareerGameParam_eventSetChallengeAddPlayedCareerMode_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetChallengeAddPlayedCareerMode_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetChallengeAddPlayedCareerMode_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetChallengeAddPlayedCareerMode", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetChallengeAddPlayedCareerMode_Parms), Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics
	{
		struct ELCareerGameParam_eventSetChampionship1st_Parms
		{
			EELBelt eChampionshipType;
			EWrestlerID_N in_WrestlerA;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eChampionshipType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eChampionshipType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_WrestlerA_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_in_WrestlerA;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_eChampionshipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_eChampionshipType = { "eChampionshipType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChampionship1st_Parms, eChampionshipType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_in_WrestlerA_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_in_WrestlerA = { "in_WrestlerA", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChampionship1st_Parms, in_WrestlerA), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_eChampionshipType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_eChampionshipType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_in_WrestlerA_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::NewProp_in_WrestlerA,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetChampionship1st", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetChampionship1st_Parms), Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics
	{
		struct ELCareerGameParam_eventSetChampionship2nd_Parms
		{
			EELBelt eChampionshipType;
			EWrestlerID_N in_WrestlerB;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eChampionshipType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eChampionshipType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_in_WrestlerB_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_in_WrestlerB;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_eChampionshipType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_eChampionshipType = { "eChampionshipType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChampionship2nd_Parms, eChampionshipType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_in_WrestlerB_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_in_WrestlerB = { "in_WrestlerB", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChampionship2nd_Parms, in_WrestlerB), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_eChampionshipType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_eChampionshipType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_in_WrestlerB_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::NewProp_in_WrestlerB,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetChampionship2nd", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetChampionship2nd_Parms), Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics
	{
		struct ELCareerGameParam_eventSetChampionshipHolder_Parms
		{
			FCareerChampionshipHolder eChampionshipHolder;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_eChampionshipHolder;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::NewProp_eChampionshipHolder = { "eChampionshipHolder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChampionshipHolder_Parms, eChampionshipHolder), Z_Construct_UScriptStruct_FCareerChampionshipHolder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::NewProp_eChampionshipHolder,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetChampionshipHolder", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetChampionshipHolder_Parms), Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics
	{
		struct ELCareerGameParam_eventSetChoicesSelectionInfo_Parms
		{
			ECareerChoicesSelectionResult _SaveSelection;
			ECareerChoicesPattern _Pattern;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SaveSelection_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SaveSelection;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Pattern_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Pattern;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__SaveSelection_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__SaveSelection = { "_SaveSelection", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChoicesSelectionInfo_Parms, _SaveSelection), Z_Construct_UEnum_ABP_200508_ECareerChoicesSelectionResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__Pattern_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__Pattern = { "_Pattern", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetChoicesSelectionInfo_Parms, _Pattern), Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__SaveSelection_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__SaveSelection,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__Pattern_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::NewProp__Pattern,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetChoicesSelectionInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetChoicesSelectionInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics
	{
		struct ELCareerGameParam_eventSetCondition_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCondition_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCondition", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCondition_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics
	{
		struct ELCareerGameParam_eventSetCurrentTotalScenarioTurn_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCurrentTotalScenarioTurn_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCurrentTotalScenarioTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCurrentTotalScenarioTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics
	{
		struct ELCareerGameParam_eventSetCurrentTurn_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCurrentTurn_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCurrentTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCurrentTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics
	{
		struct ELCareerGameParam_eventSetCurrentWeek_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCurrentWeek_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCurrentWeek", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCurrentWeek_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics
	{
		struct ELCareerGameParam_eventSetCutsceneWrestler_Parms
		{
			ECareerCutsceneCastType CastType;
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_CastType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_CastType;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_CastType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_CastType = { "CastType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCutsceneWrestler_Parms, CastType), Z_Construct_UEnum_ABP_200508_ECareerCutsceneCastType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetCutsceneWrestler_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_CastType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_CastType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetCutsceneWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetCutsceneWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics
	{
		struct ELCareerGameParam_eventSetDateID_Parms
		{
			EWrestlerID_N _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetDateID_Parms, _value), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetDateID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetDateID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetDateID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetDateID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics
	{
		struct ELCareerGameParam_eventSetDisableMenuActionSelectedFlag_Parms
		{
			ECareerMenuActionAlreadySelectedFlag _Flag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::NewProp__Flag = { "_Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetDisableMenuActionSelectedFlag_Parms, _Flag), Z_Construct_UEnum_ABP_200508_ECareerMenuActionAlreadySelectedFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::NewProp__Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetDisableMenuActionSelectedFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetDisableMenuActionSelectedFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics
	{
		struct ELCareerGameParam_eventSetDispSubtitles_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetDispSubtitles_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetDispSubtitles_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetDispSubtitles", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetDispSubtitles_Parms), Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics
	{
		struct ELCareerGameParam_eventSetDispTutorialDialog_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetDispTutorialDialog_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetDispTutorialDialog_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetDispTutorialDialog", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetDispTutorialDialog_Parms), Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics
	{
		struct ELCareerGameParam_eventSetEnableMenuActionSelectedFlag_Parms
		{
			ECareerMenuActionAlreadySelectedFlag _Flag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Flag_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::NewProp__Flag = { "_Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetEnableMenuActionSelectedFlag_Parms, _Flag), Z_Construct_UEnum_ABP_200508_ECareerMenuActionAlreadySelectedFlag, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::NewProp__Flag_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::NewProp__Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetEnableMenuActionSelectedFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetEnableMenuActionSelectedFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics
	{
		struct ELCareerGameParam_eventSetEventStockList_Parms
		{
			TArray<FCareerVeryShortEventStockInfo> _EventList;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__EventList_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__EventList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::NewProp__EventList_Inner = { "_EventList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::NewProp__EventList = { "_EventList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetEventStockList_Parms, _EventList), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::NewProp__EventList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::NewProp__EventList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetEventStockList", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetEventStockList_Parms), Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetEventStockList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetEventStockList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics
	{
		struct ELCareerGameParam_eventSetInjury_Parms
		{
			bool _bInjury;
		};
		static void NewProp__bInjury_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bInjury;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::NewProp__bInjury_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetInjury_Parms*)Obj)->_bInjury = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::NewProp__bInjury = { "_bInjury", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetInjury_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::NewProp__bInjury_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::NewProp__bInjury,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetInjury", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetInjury_Parms), Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics
	{
		struct ELCareerGameParam_eventSetItemInfo_Parms
		{
			FCareerPlayerItemInfo _ItemInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__ItemInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::NewProp__ItemInfo = { "_ItemInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetItemInfo_Parms, _ItemInfo), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::NewProp__ItemInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetItemInfo", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetItemInfo_Parms), Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics
	{
		struct ELCareerGameParam_eventSetItemNum_Parms
		{
			ECareerItemNo _ItemNo;
			int32 _num;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ItemNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ItemNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__num;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__ItemNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__ItemNo = { "_ItemNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetItemNum_Parms, _ItemNo), Z_Construct_UEnum_ABP_200508_ECareerItemNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__num = { "_num", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetItemNum_Parms, _num), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__ItemNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__ItemNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::NewProp__num,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetItemNum", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetItemNum_Parms), Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetItemNum()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetItemNum_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics
	{
		struct ELCareerGameParam_eventSetLongStoryCard_Parms
		{
			FCareerStoryCard _StoryCard;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StoryCard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::NewProp__StoryCard = { "_StoryCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetLongStoryCard_Parms, _StoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::NewProp__StoryCard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetLongStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetLongStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics
	{
		struct ELCareerGameParam_eventSetLoserWrestler_Parms
		{
			EWrestlerID_N eWrestlerID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::NewProp_eWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::NewProp_eWrestlerID = { "eWrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetLoserWrestler_Parms, eWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::NewProp_eWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::NewProp_eWrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetLoserWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetLoserWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics
	{
		struct ELCareerGameParam_eventSetMainMatchResult_Parms
		{
			int32 _Index;
			FCareerMainMatchResult _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::NewProp__Index = { "_Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMainMatchResult_Parms, _Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMainMatchResult_Parms, _value), Z_Construct_UScriptStruct_FCareerMainMatchResult, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::NewProp__Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMainMatchResult", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMainMatchResult_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics
	{
		struct ELCareerGameParam_eventSetMatchInjury_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetMatchInjury_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetMatchInjury_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchInjury", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchInjury_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics
	{
		struct ELCareerGameParam_eventSetMatchOperationKeyboard_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetMatchOperationKeyboard_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetMatchOperationKeyboard_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchOperationKeyboard", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchOperationKeyboard_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics
	{
		struct ELCareerGameParam_eventSetMatchRestHPRate_Parms
		{
			float fHP;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_fHP;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::NewProp_fHP = { "fHP", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMatchRestHPRate_Parms, fHP), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::NewProp_fHP,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchRestHPRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchRestHPRate_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics
	{
		struct ELCareerGameParam_eventSetMatchScore_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMatchScore_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchScore", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchScore_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics
	{
		struct ELCareerGameParam_eventSetMatchVenue_Parms
		{
			ECareerCity _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMatchVenue_Parms, _value), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchVenue", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchVenue_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics
	{
		struct ELCareerGameParam_eventSetMatchWin_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetMatchWin_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetMatchWin_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMatchWin", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMatchWin_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMatchWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMatchWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics
	{
		struct ELCareerGameParam_eventSetMaxTurn_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMaxTurn_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMaxTurn", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMaxTurn_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics
	{
		struct ELCareerGameParam_eventSetMinigameStoryCard_Parms
		{
			FCareerStoryCard _StoryCard;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StoryCard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::NewProp__StoryCard = { "_StoryCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMinigameStoryCard_Parms, _StoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::NewProp__StoryCard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMinigameStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMinigameStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics
	{
		struct ELCareerGameParam_eventSetMomentumUpRate_Parms
		{
			float _MomentumUpRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__MomentumUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::NewProp__MomentumUpRate = { "_MomentumUpRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMomentumUpRate_Parms, _MomentumUpRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::NewProp__MomentumUpRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMomentumUpRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMomentumUpRate_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics
	{
		struct ELCareerGameParam_eventSetMotivation_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetMotivation_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetMotivation", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetMotivation_Parms), Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics
	{
		struct ELCareerGameParam_eventSetNextStoryKey_Parms
		{
			FName _key;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::NewProp__key = { "_key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetNextStoryKey_Parms, _key), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::NewProp__key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetNextStoryKey", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetNextStoryKey_Parms), Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics
	{
		struct ELCareerGameParam_eventSetOutingFlag_Parms
		{
			int32 _bOuting;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__bOuting;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::NewProp__bOuting = { "_bOuting", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetOutingFlag_Parms, _bOuting), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::NewProp__bOuting,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetOutingFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetOutingFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics
	{
		struct ELCareerGameParam_eventSetParameterSkillState_Parms
		{
			ECareerParameterSkillItem _SkillNo;
			int32 _state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetParameterSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerParameterSkillItem, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetParameterSkillState_Parms, _state), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetParameterSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetParameterSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics
	{
		struct ELCareerGameParam_eventSetPartnerID_Parms
		{
			EWrestlerID_N _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPartnerID_Parms, _value), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPartnerID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPartnerID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPartnerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPartnerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics
	{
		struct ELCareerGameParam_eventSetPassiveSkillState_Parms
		{
			ECareerPassiveSkillNo _SkillNo;
			int32 _state;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SkillNo_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__SkillNo;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__state;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__SkillNo_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__SkillNo = { "_SkillNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPassiveSkillState_Parms, _SkillNo), Z_Construct_UEnum_ABP_200508_ECareerPassiveSkillNo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__state = { "_state", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPassiveSkillState_Parms, _state), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__SkillNo_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__SkillNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::NewProp__state,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPassiveSkillState", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPassiveSkillState_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics
	{
		struct ELCareerGameParam_eventSetPlayDarkMatchFlg_Parms
		{
			bool _Flg;
		};
		static void NewProp__Flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::NewProp__Flg_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetPlayDarkMatchFlg_Parms*)Obj)->_Flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::NewProp__Flg = { "_Flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetPlayDarkMatchFlg_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::NewProp__Flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::NewProp__Flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPlayDarkMatchFlg", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPlayDarkMatchFlg_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics
	{
		struct ELCareerGameParam_eventSetPlayerEditWrestlerGUID_Parms
		{
			FGuid _value;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPlayerEditWrestlerGUID_Parms, _value), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPlayerEditWrestlerGUID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPlayerEditWrestlerGUID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics
	{
		struct ELCareerGameParam_eventSetPlayerEditWrestlerPersonality_Parms
		{
			EPersonalityType _Personality;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Personality_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Personality;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::NewProp__Personality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::NewProp__Personality = { "_Personality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPlayerEditWrestlerPersonality_Parms, _Personality), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::NewProp__Personality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::NewProp__Personality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPlayerEditWrestlerPersonality", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPlayerEditWrestlerPersonality_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics
	{
		struct ELCareerGameParam_eventSetPlayerWrestlerID_Parms
		{
			EWrestlerID_N _WrestlerID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__WrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__WrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPlayerWrestlerID_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::NewProp__WrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPlayerWrestlerID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPlayerWrestlerID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics
	{
		struct ELCareerGameParam_eventSetPostCommandEventList_Parms
		{
			int32 Index;
			FCareerPostCommandEventList _EventList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__EventList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPostCommandEventList_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::NewProp__EventList = { "_EventList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPostCommandEventList_Parms, _EventList), Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::NewProp__EventList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPostCommandEventList", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPostCommandEventList_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics
	{
		struct ELCareerGameParam_eventSetPresetNo_Parms
		{
			int32 PresetNo;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_PresetNo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetPresetNo_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetPresetNo", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetPresetNo_Parms), Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics
	{
		struct ELCareerGameParam_eventSetRecordInfoLocal_Parms
		{
			FCareerRecordInfo _Info;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::NewProp__Info = { "_Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetRecordInfoLocal_Parms, _Info), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::NewProp__Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetRecordInfoLocal", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetRecordInfoLocal_Parms), Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics
	{
		struct ELCareerGameParam_eventSetRecordInfoTotal_Parms
		{
			FCareerRecordInfo _Info;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__Info;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::NewProp__Info = { "_Info", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetRecordInfoTotal_Parms, _Info), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::NewProp__Info,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetRecordInfoTotal", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetRecordInfoTotal_Parms), Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics
	{
		struct ELCareerGameParam_eventSetRivalID_Parms
		{
			EWrestlerID_N _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetRivalID_Parms, _value), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetRivalID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetRivalID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetRivalID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetRivalID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics
	{
		struct ELCareerGameParam_eventSetScenarioID_Parms
		{
			ECareerScenario _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetScenarioID_Parms, _value), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetScenarioID", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetScenarioID_Parms), Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetScenarioID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetScenarioID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics
	{
		struct ELCareerGameParam_eventSetScenarioPart_Parms
		{
			ECareerScenarioPart _value;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__value_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::NewProp__value_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetScenarioPart_Parms, _value), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::NewProp__value_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetScenarioPart", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetScenarioPart_Parms), Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics
	{
		struct ELCareerGameParam_eventSetSingleStoryCard_Parms
		{
			FCareerStoryCard _StoryCard;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__StoryCard;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::NewProp__StoryCard = { "_StoryCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSingleStoryCard_Parms, _StoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::NewProp__StoryCard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSingleStoryCard", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSingleStoryCard_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics
	{
		struct ELCareerGameParam_eventSetSkillPoint_Parms
		{
			int32 _value;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__value;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::NewProp__value = { "_value", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSkillPoint_Parms, _value), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::NewProp__value,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSkillPoint", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSkillPoint_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics
	{
		struct ELCareerGameParam_eventSetSkillPointUpRate_Parms
		{
			float _SkillPointUpRate;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__SkillPointUpRate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::NewProp__SkillPointUpRate = { "_SkillPointUpRate", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSkillPointUpRate_Parms, _SkillPointUpRate), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::NewProp__SkillPointUpRate,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSkillPointUpRate", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSkillPointUpRate_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics
	{
		struct ELCareerGameParam_eventSetSnapshotParam_Parms
		{
			int32 Index;
			FCareerSnapshotParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSnapshotParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSnapshotParam_Parms, Param), Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSnapshotParam", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSnapshotParam_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics
	{
		struct ELCareerGameParam_eventSetSnapshotParams_Parms
		{
			TArray<FCareerSnapshotParam> Params;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSnapshotParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSnapshotParams_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSnapshotParams", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSnapshotParams_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics
	{
		struct ELCareerGameParam_eventSetSpecialRewardParam_Parms
		{
			int32 Index;
			FCareerSpecialRewardParam Param;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Param_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Param;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSpecialRewardParam_Parms, Index), METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Param_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Param = { "Param", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSpecialRewardParam_Parms, Param), Z_Construct_UScriptStruct_FCareerSpecialRewardParam, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Param_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Param_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::NewProp_Param,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSpecialRewardParam", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSpecialRewardParam_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics
	{
		struct ELCareerGameParam_eventSetSpecialRewardParam_Dialog_Parms
		{
			int32 Index;
			bool Flag;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Index;
		static void NewProp_Flag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_Flag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSpecialRewardParam_Dialog_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Flag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetSpecialRewardParam_Dialog_Parms*)Obj)->Flag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Flag = { "Flag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetSpecialRewardParam_Dialog_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Flag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Index,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::NewProp_Flag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSpecialRewardParam_Dialog", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSpecialRewardParam_Dialog_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics
	{
		struct ELCareerGameParam_eventSetSpecialRewardParams_Parms
		{
			TArray<FCareerSpecialRewardParam> Params;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Params_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Params_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_Params;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params_Inner = { "Params", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSpecialRewardParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params = { "Params", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetSpecialRewardParams_Parms, Params), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::NewProp_Params,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetSpecialRewardParams", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetSpecialRewardParams_Parms), Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics
	{
		struct ELCareerGameParam_eventSetTonyKhanTweetKey_Parms
		{
			FName Name;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_Name;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::NewProp_Name = { "Name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetTonyKhanTweetKey_Parms, Name), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::NewProp_Name,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetTonyKhanTweetKey", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetTonyKhanTweetKey_Parms), Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics
	{
		struct ELCareerGameParam_eventSetTutorialUseFlag_Parms
		{
			ECareerTutorialCheckList eCheckList;
			bool bFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eCheckList_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eCheckList;
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_eCheckList_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_eCheckList = { "eCheckList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetTutorialUseFlag_Parms, eCheckList), Z_Construct_UEnum_ABP_200508_ECareerTutorialCheckList, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetTutorialUseFlag_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetTutorialUseFlag_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_eCheckList_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_eCheckList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetTutorialUseFlag", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetTutorialUseFlag_Parms), Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics
	{
		struct ELCareerGameParam_eventSetUnlockDark_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetUnlockDark_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetUnlockDark_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetUnlockDark", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetUnlockDark_Parms), Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics
	{
		struct ELCareerGameParam_eventSetUnlockRampage_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetUnlockRampage_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetUnlockRampage_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetUnlockRampage", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetUnlockRampage_Parms), Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics
	{
		struct ELCareerGameParam_eventSetupAutoEventManager_Parms
		{
			UELCareerAutoEventManager* pAutoEventManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pAutoEventManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::NewProp_pAutoEventManager = { "pAutoEventManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetupAutoEventManager_Parms, pAutoEventManager), Z_Construct_UClass_UELCareerAutoEventManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::NewProp_pAutoEventManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetupAutoEventManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetupAutoEventManager_Parms), Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics
	{
		struct ELCareerGameParam_eventSetupAutoPlayManager_Parms
		{
			UELCareerAutoPlayManager* pAutoPlayManager;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_pAutoPlayManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::NewProp_pAutoPlayManager = { "pAutoPlayManager", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetupAutoPlayManager_Parms, pAutoPlayManager), Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::NewProp_pAutoPlayManager,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetupAutoPlayManager", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetupAutoPlayManager_Parms), Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics
	{
		struct ELCareerGameParam_eventSetUseTurnEnding_Parms
		{
			bool _Flg;
		};
		static void NewProp__Flg_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Flg;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::NewProp__Flg_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetUseTurnEnding_Parms*)Obj)->_Flg = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::NewProp__Flg = { "_Flg", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetUseTurnEnding_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::NewProp__Flg_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::NewProp__Flg,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetUseTurnEnding", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetUseTurnEnding_Parms), Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics
	{
		struct ELCareerGameParam_eventSetVegetarian_Parms
		{
			bool bFlag;
		};
		static void NewProp_bFlag_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::NewProp_bFlag_SetBit(void* Obj)
	{
		((ELCareerGameParam_eventSetVegetarian_Parms*)Obj)->bFlag = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::NewProp_bFlag = { "bFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELCareerGameParam_eventSetVegetarian_Parms), &Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::NewProp_bFlag_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::NewProp_bFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetVegetarian", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetVegetarian_Parms), Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics
	{
		struct ELCareerGameParam_eventSetWinnerWrestler_Parms
		{
			EWrestlerID_N eWrestlerID;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_eWrestlerID_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_eWrestlerID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::NewProp_eWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::NewProp_eWrestlerID = { "eWrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELCareerGameParam_eventSetWinnerWrestler_Parms, eWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::NewProp_eWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::NewProp_eWrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELCareerGameParam, nullptr, "SetWinnerWrestler", nullptr, nullptr, sizeof(ELCareerGameParam_eventSetWinnerWrestler_Parms), Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELCareerGameParam_NoRegister()
	{
		return UELCareerGameParam::StaticClass();
	}
	struct Z_Construct_UClass_UELCareerGameParam_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Condition_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Condition;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Motivation_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_Motivation;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SkillPoint_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_SkillPoint;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerMoney_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CareerMoney;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_PlayerWrestlerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerWrestlerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_PlayerWrestlerID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerEditWrestlerGUID_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PlayerEditWrestlerGUID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_PlayerEditWrestlerPersonality_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PlayerEditWrestlerPersonality_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_PlayerEditWrestlerPersonality;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_sPresetNo_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_sPresetNo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_PartnerID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PartnerID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_PartnerID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_RivalID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_RivalID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_RivalID;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_DateID_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DateID_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_DateID;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ItemInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ItemInfo;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_CareerModeDifficulty_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CareerModeDifficulty_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_CareerModeDifficulty;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bVegetarian_MetaData[];
#endif
		static void NewProp_m_bVegetarian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bVegetarian;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bDispSubtitles_MetaData[];
#endif
		static void NewProp_m_bDispSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bDispSubtitles;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bInjury_MetaData[];
#endif
		static void NewProp_m_bInjury_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bInjury;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MomentumUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_MomentumUpRate;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SkillPointUpRate_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_m_SkillPointUpRate;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ParameterSkillState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ParameterSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ParameterSkillState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_ActionSkillState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActionSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ActionSkillState;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_PassiveSkillState_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PassiveSkillState_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PassiveSkillState;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_LongStoryCard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_LongStoryCard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SingleStoryCard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SingleStoryCard;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_NextStoryKey_MetaData[];
#endif
		static const UE4CodeGen_Private::FNamePropertyParams NewProp_m_NextStoryKey;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_PostCommandEventList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PostCommandEventList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_PostCommandEventList;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_EventStockList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_EventStockList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_EventStockList;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_PostCommandEventType_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PostCommandEventType_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_PostCommandEventType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_PostCommandEventResult_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_PostCommandEventResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_PostCommandEventResult;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ChoicesSelectionInfo_Inner_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_ChoicesSelectionInfo_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChoicesSelectionInfo_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ChoicesSelectionInfo;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bPlayDarkMatch_MetaData[];
#endif
		static void NewProp_m_bPlayDarkMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bPlayDarkMatch;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_DarkMatchStoryCards_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DarkMatchStoryCards_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_DarkMatchStoryCards;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_DarkMatchCardInfos_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_DarkMatchCardInfos_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_DarkMatchCardInfos;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MinigameStoryCard_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MinigameStoryCard;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_Scenario_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_Scenario_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_Scenario;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentWeek_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CurrentWeek;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_CurrentTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_CurrentTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MaxTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_MaxTurn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TotalScenarioTurn_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_m_TotalScenarioTurn;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_MatchVenue_Underlying;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MatchVenue_MetaData[];
#endif
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_m_MatchVenue;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bUseTurnEnding_MetaData[];
#endif
		static void NewProp_m_bUseTurnEnding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bUseTurnEnding;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_MainMatchResult_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MainMatchResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_MainMatchResult;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ChampionshipHolder_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_ChampionshipHolder;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_TookSnapshots_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TookSnapshots_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TookSnapshots;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_m_SpecialRewardParams_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_SpecialRewardParams_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_SpecialRewardParams;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bOuting_MetaData[];
#endif
		static void NewProp_m_bOuting_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bOuting;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_MenuActionSelectedFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_MenuActionSelectedFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCareerMyRosterData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCareerMyRosterData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_pCareerMyScoutData_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_pCareerMyScoutData;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_bInitLoaded_MetaData[];
#endif
		static void NewProp_m_bInitLoaded_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_m_bInitLoaded;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_ClearCountWrestler_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ClearCountWrestler_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ClearCountWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_m_TutorialUseFlag_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_TutorialUseFlag_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_TutorialUseFlag;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AutoPlayManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AutoPlayManager;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_AutoEventManager_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_AutoEventManager;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELCareerGameParam_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELCareerGameParam_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchCardInfo, "AddDarkMatchCardInfo" }, // 14293210
		{ &Z_Construct_UFunction_UELCareerGameParam_AddDarkMatchStoryCard, "AddDarkMatchStoryCard" }, // 1174850817
		{ &Z_Construct_UFunction_UELCareerGameParam_AddItemNum, "AddItemNum" }, // 1570617315
		{ &Z_Construct_UFunction_UELCareerGameParam_CheckTutorialUseFlag, "CheckTutorialUseFlag" }, // 1410413486
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchCardInfos, "ClearDarkMatchCardInfos" }, // 1530836554
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearDarkMatchStoryCards, "ClearDarkMatchStoryCards" }, // 3059996129
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearEventStockList, "ClearEventStockList" }, // 2174316141
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearMainMatchResult, "ClearMainMatchResult" }, // 4151687824
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearPostCommandEventList, "ClearPostCommandEventList" }, // 1289513833
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearTonyKhanTweetKey, "ClearTonyKhanTweetKey" }, // 2565640584
		{ &Z_Construct_UFunction_UELCareerGameParam_ClearTutorialTemporary, "ClearTutorialTemporary" }, // 1844798054
		{ &Z_Construct_UFunction_UELCareerGameParam_DecrementItemNum, "DecrementItemNum" }, // 3314014219
		{ &Z_Construct_UFunction_UELCareerGameParam_FindUnusedSnapshotIndex, "FindUnusedSnapshotIndex" }, // 2167018
		{ &Z_Construct_UFunction_UELCareerGameParam_GetActionSkillState, "GetActionSkillState" }, // 2257153746
		{ &Z_Construct_UFunction_UELCareerGameParam_GetActionSkillStateList, "GetActionSkillStateList" }, // 22962842
		{ &Z_Construct_UFunction_UELCareerGameParam_GetAutoEventManager, "GetAutoEventManager" }, // 1259203734
		{ &Z_Construct_UFunction_UELCareerGameParam_GetAutoPlayManager, "GetAutoPlayManager" }, // 1913655762
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerModeDifficulty, "GetCareerModeDifficulty" }, // 3161480034
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerMoney, "GetCareerMoney" }, // 1631916231
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerMyRosterData, "GetCareerMyRosterData" }, // 2655852664
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerMyScoutData, "GetCareerMyScoutData" }, // 640203117
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerPlayDataInfo, "GetCareerPlayDataInfo" }, // 422406000
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCareerWrestlerClearCount, "GetCareerWrestlerClearCount" }, // 583935312
		{ &Z_Construct_UFunction_UELCareerGameParam_GetChampionship, "GetChampionship" }, // 1301168362
		{ &Z_Construct_UFunction_UELCareerGameParam_GetChampionshipHolder, "GetChampionshipHolder" }, // 2040094808
		{ &Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfo, "GetChoicesSelectionInfo" }, // 3059446203
		{ &Z_Construct_UFunction_UELCareerGameParam_GetChoicesSelectionInfoByIndex, "GetChoicesSelectionInfoByIndex" }, // 461578590
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCondition, "GetCondition" }, // 3143367461
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCurrentTotalScenarioTurn, "GetCurrentTotalScenarioTurn" }, // 1976668713
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCurrentTurn, "GetCurrentTurn" }, // 2074278126
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCurrentWeek, "GetCurrentWeek" }, // 3471894729
		{ &Z_Construct_UFunction_UELCareerGameParam_GetCutsceneWrestler, "GetCutsceneWrestler" }, // 1855135224
		{ &Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchCardInfos, "GetDarkMatchCardInfos" }, // 2278662770
		{ &Z_Construct_UFunction_UELCareerGameParam_GetDarkMatchStoryCards, "GetDarkMatchStoryCards" }, // 1658537774
		{ &Z_Construct_UFunction_UELCareerGameParam_GetDateID, "GetDateID" }, // 962071877
		{ &Z_Construct_UFunction_UELCareerGameParam_GetEventStockList, "GetEventStockList" }, // 2433148187
		{ &Z_Construct_UFunction_UELCareerGameParam_GetItemInfo, "GetItemInfo" }, // 3193713566
		{ &Z_Construct_UFunction_UELCareerGameParam_GetItemInfoRef, "GetItemInfoRef" }, // 603449947
		{ &Z_Construct_UFunction_UELCareerGameParam_GetItemNum, "GetItemNum" }, // 3709978945
		{ &Z_Construct_UFunction_UELCareerGameParam_GetLongStoryCard, "GetLongStoryCard" }, // 2766118555
		{ &Z_Construct_UFunction_UELCareerGameParam_GetLoserWrestler, "GetLoserWrestler" }, // 4160858010
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByScenarioPart, "GetMainMatchResultByScenarioPart" }, // 4288311716
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResultByTiming, "GetMainMatchResultByTiming" }, // 2819894542
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMainMatchResults, "GetMainMatchResults" }, // 1767081124
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMatchRestHPRate, "GetMatchRestHPRate" }, // 3125003028
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMatchScore, "GetMatchScore" }, // 3911549068
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMatchVenue, "GetMatchVenue" }, // 1548773113
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMaxTurn, "GetMaxTurn" }, // 641481831
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMinigameStoryCard, "GetMinigameStoryCard" }, // 4289754085
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMomentumUpRate, "GetMomentumUpRate" }, // 2207025317
		{ &Z_Construct_UFunction_UELCareerGameParam_GetMotivation, "GetMotivation" }, // 3655819099
		{ &Z_Construct_UFunction_UELCareerGameParam_GetNextStoryKey, "GetNextStoryKey" }, // 4029948842
		{ &Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillState, "GetParameterSkillState" }, // 964414076
		{ &Z_Construct_UFunction_UELCareerGameParam_GetParameterSkillStateList, "GetParameterSkillStateList" }, // 1877510667
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPartnerID, "GetPartnerID" }, // 2767264733
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillState, "GetPassiveSkillState" }, // 1588839776
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPassiveSkillStateList, "GetPassiveSkillStateList" }, // 3820837775
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPlayDarkMatchFlg, "GetPlayDarkMatchFlg" }, // 3953140795
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerGUID, "GetPlayerEditWrestlerGUID" }, // 362806463
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPlayerEditWrestlerPersonality, "GetPlayerEditWrestlerPersonality" }, // 1085606292
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPlayerWrestlerID, "GetPlayerWrestlerID" }, // 3234239445
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventList, "GetPostCommandEventList" }, // 1979545066
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPostCommandEventListWithTurn, "GetPostCommandEventListWithTurn" }, // 3088703528
		{ &Z_Construct_UFunction_UELCareerGameParam_GetPresetNo, "GetPresetNo" }, // 3292992875
		{ &Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoLocal, "GetRecordInfoLocal" }, // 3213797047
		{ &Z_Construct_UFunction_UELCareerGameParam_GetRecordInfoTotal, "GetRecordInfoTotal" }, // 21484947
		{ &Z_Construct_UFunction_UELCareerGameParam_GetRivalID, "GetRivalID" }, // 4138766277
		{ &Z_Construct_UFunction_UELCareerGameParam_GetScenarioID, "GetScenarioID" }, // 3389721264
		{ &Z_Construct_UFunction_UELCareerGameParam_GetScenarioPart, "GetScenarioPart" }, // 1340429708
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSingleStoryCard, "GetSingleStoryCard" }, // 3205741671
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSkillPoint, "GetSkillPoint" }, // 1927357157
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSkillPointUpRate, "GetSkillPointUpRate" }, // 440368507
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParam, "GetSnapshotParam" }, // 2595660864
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSnapshotParams, "GetSnapshotParams" }, // 2128438297
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParam, "GetSpecialRewardParam" }, // 393744329
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSpecialRewardParams, "GetSpecialRewardParams" }, // 163073665
		{ &Z_Construct_UFunction_UELCareerGameParam_GetSuccessRate, "GetSuccessRate" }, // 3095945492
		{ &Z_Construct_UFunction_UELCareerGameParam_GetTonyKhanTweetKey, "GetTonyKhanTweetKey" }, // 3841946802
		{ &Z_Construct_UFunction_UELCareerGameParam_GetTutorialTemporary, "GetTutorialTemporary" }, // 3503824419
		{ &Z_Construct_UFunction_UELCareerGameParam_GetTutorialUseFlag, "GetTutorialUseFlag" }, // 4078198763
		{ &Z_Construct_UFunction_UELCareerGameParam_GetUseTurnEnding, "GetUseTurnEnding" }, // 1630679976
		{ &Z_Construct_UFunction_UELCareerGameParam_GetWinnerWrestler, "GetWinnerWrestler" }, // 3722038763
		{ &Z_Construct_UFunction_UELCareerGameParam_GetWrestlerClearCount, "GetWrestlerClearCount" }, // 18044535
		{ &Z_Construct_UFunction_UELCareerGameParam_GetWrestlerProfileSkill, "GetWrestlerProfileSkill" }, // 1500897445
		{ &Z_Construct_UFunction_UELCareerGameParam_HasSpecialRewardParams, "HasSpecialRewardParams" }, // 3268800323
		{ &Z_Construct_UFunction_UELCareerGameParam_HasTookSnapshot, "HasTookSnapshot" }, // 2589388539
		{ &Z_Construct_UFunction_UELCareerGameParam_IncrementWrestlerClearCount, "IncrementWrestlerClearCount" }, // 549864747
		{ &Z_Construct_UFunction_UELCareerGameParam_Init, "Init" }, // 869489433
		{ &Z_Construct_UFunction_UELCareerGameParam_IsAttackedManager, "IsAttackedManager" }, // 154640452
		{ &Z_Construct_UFunction_UELCareerGameParam_IsCAWtoHUB, "IsCAWtoHUB" }, // 1145815645
		{ &Z_Construct_UFunction_UELCareerGameParam_IsChallengeAddPlayedCareerMode, "IsChallengeAddPlayedCareerMode" }, // 3909345257
		{ &Z_Construct_UFunction_UELCareerGameParam_IsChampionshipHolder, "IsChampionshipHolder" }, // 2383285641
		{ &Z_Construct_UFunction_UELCareerGameParam_IsDispSubtitles, "IsDispSubtitles" }, // 503671037
		{ &Z_Construct_UFunction_UELCareerGameParam_IsDispTutorialDialog, "IsDispTutorialDialog" }, // 741614397
		{ &Z_Construct_UFunction_UELCareerGameParam_IsInjury, "IsInjury" }, // 921463624
		{ &Z_Construct_UFunction_UELCareerGameParam_IsMatchInjury, "IsMatchInjury" }, // 468149087
		{ &Z_Construct_UFunction_UELCareerGameParam_IsMatchOperationKeyboard, "IsMatchOperationKeyboard" }, // 1570144645
		{ &Z_Construct_UFunction_UELCareerGameParam_IsMatchWin, "IsMatchWin" }, // 3242891266
		{ &Z_Construct_UFunction_UELCareerGameParam_IsMenuActionSelectedFlag, "IsMenuActionSelectedFlag" }, // 1393969216
		{ &Z_Construct_UFunction_UELCareerGameParam_IsOuting, "IsOuting" }, // 1320844951
		{ &Z_Construct_UFunction_UELCareerGameParam_IsUnlockDark, "IsUnlockDark" }, // 2586484060
		{ &Z_Construct_UFunction_UELCareerGameParam_IsUnlockRampage, "IsUnlockRampage" }, // 254959512
		{ &Z_Construct_UFunction_UELCareerGameParam_IsVegetarian, "IsVegetarian" }, // 2218966748
		{ &Z_Construct_UFunction_UELCareerGameParam_PopTookSnapshot, "PopTookSnapshot" }, // 294838524
		{ &Z_Construct_UFunction_UELCareerGameParam_PushTookSnapshot, "PushTookSnapshot" }, // 1863057424
		{ &Z_Construct_UFunction_UELCareerGameParam_SetActionSkillState, "SetActionSkillState" }, // 552120844
		{ &Z_Construct_UFunction_UELCareerGameParam_SetAllDisableMenuActionSelectedFlag, "SetAllDisableMenuActionSelectedFlag" }, // 4262710724
		{ &Z_Construct_UFunction_UELCareerGameParam_SetAttackedManager, "SetAttackedManager" }, // 2998574077
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCareerModeDifficulty, "SetCareerModeDifficulty" }, // 3596209168
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCareerMoney, "SetCareerMoney" }, // 707264707
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCareerMyRosterData, "SetCareerMyRosterData" }, // 3407145210
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCareerMyScoutData, "SetCareerMyScoutData" }, // 2166186441
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCareerPlayDataInfo, "SetCareerPlayDataInfo" }, // 3636547366
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCAWtoHUB, "SetCAWtoHUB" }, // 2585887988
		{ &Z_Construct_UFunction_UELCareerGameParam_SetChallengeAddPlayedCareerMode, "SetChallengeAddPlayedCareerMode" }, // 3546391857
		{ &Z_Construct_UFunction_UELCareerGameParam_SetChampionship1st, "SetChampionship1st" }, // 263192773
		{ &Z_Construct_UFunction_UELCareerGameParam_SetChampionship2nd, "SetChampionship2nd" }, // 2302446109
		{ &Z_Construct_UFunction_UELCareerGameParam_SetChampionshipHolder, "SetChampionshipHolder" }, // 1470683273
		{ &Z_Construct_UFunction_UELCareerGameParam_SetChoicesSelectionInfo, "SetChoicesSelectionInfo" }, // 3916478245
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCondition, "SetCondition" }, // 3085734390
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCurrentTotalScenarioTurn, "SetCurrentTotalScenarioTurn" }, // 3906959187
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCurrentTurn, "SetCurrentTurn" }, // 1737929785
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCurrentWeek, "SetCurrentWeek" }, // 1537871953
		{ &Z_Construct_UFunction_UELCareerGameParam_SetCutsceneWrestler, "SetCutsceneWrestler" }, // 4248715834
		{ &Z_Construct_UFunction_UELCareerGameParam_SetDateID, "SetDateID" }, // 2288117010
		{ &Z_Construct_UFunction_UELCareerGameParam_SetDisableMenuActionSelectedFlag, "SetDisableMenuActionSelectedFlag" }, // 1459597903
		{ &Z_Construct_UFunction_UELCareerGameParam_SetDispSubtitles, "SetDispSubtitles" }, // 3559836704
		{ &Z_Construct_UFunction_UELCareerGameParam_SetDispTutorialDialog, "SetDispTutorialDialog" }, // 798877446
		{ &Z_Construct_UFunction_UELCareerGameParam_SetEnableMenuActionSelectedFlag, "SetEnableMenuActionSelectedFlag" }, // 877791859
		{ &Z_Construct_UFunction_UELCareerGameParam_SetEventStockList, "SetEventStockList" }, // 231340733
		{ &Z_Construct_UFunction_UELCareerGameParam_SetInjury, "SetInjury" }, // 1095178443
		{ &Z_Construct_UFunction_UELCareerGameParam_SetItemInfo, "SetItemInfo" }, // 1281232379
		{ &Z_Construct_UFunction_UELCareerGameParam_SetItemNum, "SetItemNum" }, // 290624252
		{ &Z_Construct_UFunction_UELCareerGameParam_SetLongStoryCard, "SetLongStoryCard" }, // 2926998597
		{ &Z_Construct_UFunction_UELCareerGameParam_SetLoserWrestler, "SetLoserWrestler" }, // 3248612511
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMainMatchResult, "SetMainMatchResult" }, // 4215721473
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchInjury, "SetMatchInjury" }, // 2160707
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchOperationKeyboard, "SetMatchOperationKeyboard" }, // 3437585037
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchRestHPRate, "SetMatchRestHPRate" }, // 341465138
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchScore, "SetMatchScore" }, // 229488704
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchVenue, "SetMatchVenue" }, // 3230899879
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMatchWin, "SetMatchWin" }, // 447978657
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMaxTurn, "SetMaxTurn" }, // 3672682981
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMinigameStoryCard, "SetMinigameStoryCard" }, // 3326789276
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMomentumUpRate, "SetMomentumUpRate" }, // 605478424
		{ &Z_Construct_UFunction_UELCareerGameParam_SetMotivation, "SetMotivation" }, // 1219257606
		{ &Z_Construct_UFunction_UELCareerGameParam_SetNextStoryKey, "SetNextStoryKey" }, // 1397430334
		{ &Z_Construct_UFunction_UELCareerGameParam_SetOutingFlag, "SetOutingFlag" }, // 762551708
		{ &Z_Construct_UFunction_UELCareerGameParam_SetParameterSkillState, "SetParameterSkillState" }, // 1517880709
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPartnerID, "SetPartnerID" }, // 3833601759
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPassiveSkillState, "SetPassiveSkillState" }, // 433129972
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPlayDarkMatchFlg, "SetPlayDarkMatchFlg" }, // 4030985983
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerGUID, "SetPlayerEditWrestlerGUID" }, // 3793087374
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPlayerEditWrestlerPersonality, "SetPlayerEditWrestlerPersonality" }, // 12666058
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPlayerWrestlerID, "SetPlayerWrestlerID" }, // 1476622701
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPostCommandEventList, "SetPostCommandEventList" }, // 3086531023
		{ &Z_Construct_UFunction_UELCareerGameParam_SetPresetNo, "SetPresetNo" }, // 1330640743
		{ &Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoLocal, "SetRecordInfoLocal" }, // 3806666013
		{ &Z_Construct_UFunction_UELCareerGameParam_SetRecordInfoTotal, "SetRecordInfoTotal" }, // 515994607
		{ &Z_Construct_UFunction_UELCareerGameParam_SetRivalID, "SetRivalID" }, // 3556241723
		{ &Z_Construct_UFunction_UELCareerGameParam_SetScenarioID, "SetScenarioID" }, // 396695371
		{ &Z_Construct_UFunction_UELCareerGameParam_SetScenarioPart, "SetScenarioPart" }, // 3444342177
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSingleStoryCard, "SetSingleStoryCard" }, // 1141030479
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSkillPoint, "SetSkillPoint" }, // 2100565682
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSkillPointUpRate, "SetSkillPointUpRate" }, // 3488527751
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParam, "SetSnapshotParam" }, // 2352839118
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSnapshotParams, "SetSnapshotParams" }, // 2006241794
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam, "SetSpecialRewardParam" }, // 1355435019
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParam_Dialog, "SetSpecialRewardParam_Dialog" }, // 3129752563
		{ &Z_Construct_UFunction_UELCareerGameParam_SetSpecialRewardParams, "SetSpecialRewardParams" }, // 1972069436
		{ &Z_Construct_UFunction_UELCareerGameParam_SetTonyKhanTweetKey, "SetTonyKhanTweetKey" }, // 3995414303
		{ &Z_Construct_UFunction_UELCareerGameParam_SetTutorialUseFlag, "SetTutorialUseFlag" }, // 1293632064
		{ &Z_Construct_UFunction_UELCareerGameParam_SetUnlockDark, "SetUnlockDark" }, // 1945613390
		{ &Z_Construct_UFunction_UELCareerGameParam_SetUnlockRampage, "SetUnlockRampage" }, // 2548505615
		{ &Z_Construct_UFunction_UELCareerGameParam_SetupAutoEventManager, "SetupAutoEventManager" }, // 2166502140
		{ &Z_Construct_UFunction_UELCareerGameParam_SetupAutoPlayManager, "SetupAutoPlayManager" }, // 3147433990
		{ &Z_Construct_UFunction_UELCareerGameParam_SetUseTurnEnding, "SetUseTurnEnding" }, // 3934629640
		{ &Z_Construct_UFunction_UELCareerGameParam_SetVegetarian, "SetVegetarian" }, // 1800067606
		{ &Z_Construct_UFunction_UELCareerGameParam_SetWinnerWrestler, "SetWinnerWrestler" }, // 903272527
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELCareerGameParam.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Condition_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Condition = { "m_Condition", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_Condition), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Condition_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Condition_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Motivation_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Motivation = { "m_Motivation", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_Motivation), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Motivation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Motivation_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPoint_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPoint = { "m_SkillPoint", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_SkillPoint), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPoint_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerMoney_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerMoney = { "m_CareerMoney", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_CareerMoney), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerMoney_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerMoney_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID = { "m_PlayerWrestlerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PlayerWrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerGUID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerGUID = { "m_PlayerEditWrestlerGUID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PlayerEditWrestlerGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerGUID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerGUID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality = { "m_PlayerEditWrestlerPersonality", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PlayerEditWrestlerPersonality), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_sPresetNo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_sPresetNo = { "m_sPresetNo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_sPresetNo), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_sPresetNo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_sPresetNo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID = { "m_PartnerID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PartnerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID = { "m_RivalID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_RivalID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID = { "m_DateID", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_DateID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ItemInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ItemInfo = { "m_ItemInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ItemInfo), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ItemInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ItemInfo_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty = { "m_CareerModeDifficulty", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_CareerModeDifficulty), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bVegetarian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian = { "m_bVegetarian", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bDispSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles = { "m_bDispSubtitles", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bInjury = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury = { "m_bInjury", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MomentumUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MomentumUpRate = { "m_MomentumUpRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MomentumUpRate), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MomentumUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MomentumUpRate_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPointUpRate_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPointUpRate = { "m_SkillPointUpRate", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_SkillPointUpRate), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPointUpRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPointUpRate_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState_Inner = { "m_ParameterSkillState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState = { "m_ParameterSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ParameterSkillState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState_Inner = { "m_ActionSkillState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState = { "m_ActionSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ActionSkillState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState_Inner = { "m_PassiveSkillState", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState = { "m_PassiveSkillState", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PassiveSkillState), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_LongStoryCard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_LongStoryCard = { "m_LongStoryCard", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_LongStoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_LongStoryCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_LongStoryCard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SingleStoryCard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SingleStoryCard = { "m_SingleStoryCard", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_SingleStoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SingleStoryCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SingleStoryCard_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_NextStoryKey_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_NextStoryKey = { "m_NextStoryKey", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_NextStoryKey), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_NextStoryKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_NextStoryKey_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList_Inner = { "m_PostCommandEventList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList = { "m_PostCommandEventList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList_Inner = { "m_EventStockList", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerVeryShortEventStockInfo, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList = { "m_EventStockList", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_EventStockList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType = { "m_PostCommandEventType", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventType), Z_Construct_UEnum_ABP_200508_ECareerPostCommandEventType, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult = { "m_PostCommandEventResult", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_PostCommandEventResult), Z_Construct_UEnum_ABP_200508_ECareerMenuActionLotteryResult, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_Inner_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_Inner = { "m_ChoicesSelectionInfo", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo = { "m_ChoicesSelectionInfo", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ChoicesSelectionInfo), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bPlayDarkMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch = { "m_bPlayDarkMatch", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards_Inner = { "m_DarkMatchStoryCards", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards = { "m_DarkMatchStoryCards", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_DarkMatchStoryCards), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos_Inner = { "m_DarkMatchCardInfos", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerMatchCardCore, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos = { "m_DarkMatchCardInfos", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_DarkMatchCardInfos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MinigameStoryCard_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MinigameStoryCard = { "m_MinigameStoryCard", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MinigameStoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MinigameStoryCard_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MinigameStoryCard_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario = { "m_Scenario", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentWeek_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentWeek = { "m_CurrentWeek", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_CurrentWeek), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentWeek_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentWeek_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentTurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentTurn = { "m_CurrentTurn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_CurrentTurn), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MaxTurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MaxTurn = { "m_MaxTurn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MaxTurn), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MaxTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MaxTurn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TotalScenarioTurn_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TotalScenarioTurn = { "m_TotalScenarioTurn", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_TotalScenarioTurn), METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TotalScenarioTurn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TotalScenarioTurn_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue = { "m_MatchVenue", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MatchVenue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bUseTurnEnding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding = { "m_bUseTurnEnding", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult_Inner = { "m_MainMatchResult", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerMainMatchResult, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult = { "m_MainMatchResult", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MainMatchResult), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChampionshipHolder_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChampionshipHolder = { "m_ChampionshipHolder", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ChampionshipHolder), Z_Construct_UScriptStruct_FCareerChampionshipHolder, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChampionshipHolder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChampionshipHolder_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots_Inner = { "m_TookSnapshots", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_UCareerSnapshot_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots = { "m_TookSnapshots", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_TookSnapshots), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams_Inner = { "m_SpecialRewardParams", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FCareerSpecialRewardParam, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams = { "m_SpecialRewardParams", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_SpecialRewardParams), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bOuting = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting = { "m_bOuting", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MenuActionSelectedFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MenuActionSelectedFlag = { "m_MenuActionSelectedFlag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_MenuActionSelectedFlag), nullptr, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MenuActionSelectedFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MenuActionSelectedFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyRosterData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyRosterData = { "m_pCareerMyRosterData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_pCareerMyRosterData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyRosterData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyRosterData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyScoutData_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyScoutData = { "m_pCareerMyScoutData", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_pCareerMyScoutData), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyScoutData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyScoutData_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	void Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded_SetBit(void* Obj)
	{
		((UELCareerGameParam*)Obj)->m_bInitLoaded = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded = { "m_bInitLoaded", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UELCareerGameParam), &Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded_SetBit, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler_Inner = { "m_ClearCountWrestler", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler = { "m_ClearCountWrestler", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_ClearCountWrestler), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler_MetaData)) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag_Inner = { "m_TutorialUseFlag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag = { "m_TutorialUseFlag", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_TutorialUseFlag), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoPlayManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoPlayManager = { "m_AutoPlayManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_AutoPlayManager), Z_Construct_UClass_UELCareerAutoPlayManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoPlayManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoPlayManager_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoEventManager_MetaData[] = {
		{ "AllowPrivateAccess", "TRUE" },
		{ "Category", "ELCareerGameParam" },
		{ "ModuleRelativePath", "Public/ELCareerGameParam.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoEventManager = { "m_AutoEventManager", nullptr, (EPropertyFlags)0x0040000000000005, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UELCareerGameParam, m_AutoEventManager), Z_Construct_UClass_UELCareerAutoEventManager_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoEventManager_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoEventManager_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UELCareerGameParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Condition,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Motivation,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPoint,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerMoney,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerWrestlerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerGUID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PlayerEditWrestlerPersonality,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_sPresetNo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PartnerID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_RivalID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DateID,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ItemInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CareerModeDifficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bVegetarian,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bDispSubtitles,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInjury,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MomentumUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SkillPointUpRate,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ParameterSkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ActionSkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PassiveSkillState,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_LongStoryCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SingleStoryCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_NextStoryKey,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_EventStockList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_PostCommandEventResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_Inner_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChoicesSelectionInfo,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bPlayDarkMatch,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchStoryCards,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_DarkMatchCardInfos,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MinigameStoryCard,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_Scenario,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentWeek,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_CurrentTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MaxTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TotalScenarioTurn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MatchVenue,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bUseTurnEnding,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MainMatchResult,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ChampionshipHolder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TookSnapshots,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_SpecialRewardParams,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bOuting,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_MenuActionSelectedFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyRosterData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_pCareerMyScoutData,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_bInitLoaded,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_ClearCountWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_TutorialUseFlag,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoPlayManager,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UELCareerGameParam_Statics::NewProp_m_AutoEventManager,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELCareerGameParam_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELCareerGameParam>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELCareerGameParam_Statics::ClassParams = {
		&UELCareerGameParam::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_UELCareerGameParam_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UELCareerGameParam_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELCareerGameParam_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELCareerGameParam()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELCareerGameParam_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELCareerGameParam, 3550559409);
	template<> ABP_200508_API UClass* StaticClass<UELCareerGameParam>()
	{
		return UELCareerGameParam::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELCareerGameParam(Z_Construct_UClass_UELCareerGameParam, &UELCareerGameParam::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELCareerGameParam"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELCareerGameParam);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
