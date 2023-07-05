// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/SaveDataObject_CareerMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSaveDataObject_CareerMode() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerMode_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObject_CareerMode();
	ABP_200508_API UClass* Z_Construct_UClass_USaveDataObjectBase();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPostCommandEventList();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerChampionshipHolder();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerStoryCard();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerCity();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerPlayerItemInfo();
	ABP_200508_API UScriptStruct* Z_Construct_UScriptStruct_FCareerRecordInfo();
	ABP_200508_API UClass* Z_Construct_UClass_UMyWrestlerDataObject_NoRegister();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenarioPart();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EPersonalityType();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_ECareerScenario();
	ABP_200508_API UClass* Z_Construct_UClass_UELCareerGameParam_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execAddCareerPostCommandEventList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_STRUCT(FCareerPostCommandEventList,Z_Param__postCommandEventList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddCareerPostCommandEventList(Z_Param__targetId,Z_Param__postCommandEventList);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execAddChoicesSelectResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_GET_ENUM(ECareerChoicesPattern,Z_Param__choicesSelectionResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddChoicesSelectResult(Z_Param__targetId,ECareerChoicesPattern(Z_Param__choicesSelectionResult));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerbInjury)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerbInjury();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerChampionship)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerChampionshipHolder*)Z_Param__Result=P_THIS->GetCareerChampionship();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerCondition)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerCondition();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerCurrentTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerCurrentTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerCurrentWeek)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerCurrentWeek();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerDateId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetCareerDateId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerDifficulty)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerModeDifficulty*)Z_Param__Result=P_THIS->GetCareerDifficulty();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerDispSubtitles)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerDispSubtitles();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerDispTutorialDialog)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerDispTutorialDialog();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerLongStoryCard)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerStoryCard*)Z_Param__Result=P_THIS->GetCareerLongStoryCard();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerMatchVenue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerCity*)Z_Param__Result=P_THIS->GetCareerMatchVenue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerMenuActionSelectedFlag)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(uint8*)Z_Param__Result=P_THIS->GetCareerMenuActionSelectedFlag();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerMoney)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerMoney();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerMotivation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerMotivation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerNextStoryKey)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->GetCareerNextStoryKey();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerPertnerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetCareerPertnerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerPlayDarkMatch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerPlayDarkMatch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerPlayerItemInfo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPlayerItemInfo*)Z_Param__Result=P_THIS->GetCareerPlayerItemInfo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerPostCommandEventList)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerPostCommandEventList*)Z_Param__Result=P_THIS->GetCareerPostCommandEventList(Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerPresetNo)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerPresetNo();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerRecordInfoLocal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerRecordInfo*)Z_Param__Result=P_THIS->GetCareerRecordInfoLocal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerRecordInfoTotal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FCareerRecordInfo*)Z_Param__Result=P_THIS->GetCareerRecordInfoTotal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerRivalId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetCareerRivalId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerRoster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetCareerRoster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerScenarioPart)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenarioPart*)Z_Param__Result=P_THIS->GetCareerScenarioPart();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerScout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->GetCareerScout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerSkillPoint)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerSkillPoint();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerTotalScenarioTurn)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerTotalScenarioTurn();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerTurnMax)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetCareerTurnMax();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerTutorialUseFlag)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__clearCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCareerTutorialUseFlag(Z_Param_Out__clearCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerUnlockDark)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerUnlockDark();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerUnlockRampage)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerUnlockRampage();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerUseTurnEnding)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerUseTurnEnding();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerVegetarian)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->GetCareerVegetarian();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerWrestlerClearCount)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__clearCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetCareerWrestlerClearCount(Z_Param_Out__clearCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerWrestlerGUID)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FGuid*)Z_Param__Result=P_THIS->GetCareerWrestlerGUID();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerWrestlerId)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EWrestlerID_N*)Z_Param__Result=P_THIS->GetCareerWrestlerId();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareerWrestlerPersonality)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(EPersonalityType*)Z_Param__Result=P_THIS->GetCareerWrestlerPersonality();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetCareeScenario)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerScenario*)Z_Param__Result=P_THIS->GetCareeScenario();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execGetChoicesSelectResult)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__targetId);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(ECareerChoicesPattern*)Z_Param__Result=P_THIS->GetChoicesSelectResult(Z_Param__targetId);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execIsNewGameSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsNewGameSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execIsValidContinueData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->IsValidContinueData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execReadDataToMyRoster)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->ReadDataToMyRoster();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execReadDataToMyScout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UMyWrestlerDataObject**)Z_Param__Result=P_THIS->ReadDataToMyScout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerbInjury)
	{
		P_GET_UBOOL(Z_Param__bInjury);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerbInjury(Z_Param__bInjury);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerChampionship)
	{
		P_GET_STRUCT(FCareerChampionshipHolder,Z_Param__careerChampionship);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerChampionship(Z_Param__careerChampionship);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerCondition)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__condition);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerCondition(Z_Param__condition);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerCurrentTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__currentTurn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerCurrentTurn(Z_Param__currentTurn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerCurrentWeek)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__currentWeek);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerCurrentWeek(Z_Param__currentWeek);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerDateId)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__dateId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerDateId(EWrestlerID_N(Z_Param__dateId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerDifficulty)
	{
		P_GET_ENUM(ECareerModeDifficulty,Z_Param__Difficulty);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerDifficulty(ECareerModeDifficulty(Z_Param__Difficulty));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerDispSubtitles)
	{
		P_GET_UBOOL(Z_Param__bDispSubtitles);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerDispSubtitles(Z_Param__bDispSubtitles);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerDispTutorialDialog)
	{
		P_GET_UBOOL(Z_Param_bDispTutorialDialog);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerDispTutorialDialog(Z_Param_bDispTutorialDialog);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerGameParamToSaveData)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__careerGameParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetCareerGameParamToSaveData(Z_Param__careerGameParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerLongStoryCard)
	{
		P_GET_STRUCT(FCareerStoryCard,Z_Param__StoryCard);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerLongStoryCard(Z_Param__StoryCard);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerMatchVenue)
	{
		P_GET_ENUM(ECareerCity,Z_Param__matchVenue);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMatchVenue(ECareerCity(Z_Param__matchVenue));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerMenuActionSelectedFlag)
	{
		P_GET_PROPERTY(FByteProperty,Z_Param__SelectedFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMenuActionSelectedFlag(Z_Param__SelectedFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerMoney)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__careerMoney);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMoney(Z_Param__careerMoney);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerMotivation)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__motivation);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerMotivation(Z_Param__motivation);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerNextStoryKey)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param__nextStoryKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerNextStoryKey(Z_Param__nextStoryKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerPertnerId)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__pertnerId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerPertnerId(EWrestlerID_N(Z_Param__pertnerId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerPlayDarkMatch)
	{
		P_GET_UBOOL(Z_Param__bPlayDarkMatch);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerPlayDarkMatch(Z_Param__bPlayDarkMatch);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerPlayerItemInfo)
	{
		P_GET_STRUCT(FCareerPlayerItemInfo,Z_Param__careerPlayerItemInfo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerPlayerItemInfo(Z_Param__careerPlayerItemInfo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerPresetNo)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_PresetNo);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerPresetNo(Z_Param_PresetNo);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerRecordInfoLocal)
	{
		P_GET_STRUCT(FCareerRecordInfo,Z_Param__careerRecordInfoLocal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerRecordInfoLocal(Z_Param__careerRecordInfoLocal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerRecordInfoTotal)
	{
		P_GET_STRUCT(FCareerRecordInfo,Z_Param__careerRecordInfoTotal);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerRecordInfoTotal(Z_Param__careerRecordInfoTotal);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerRivalId)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__rivalId);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerRivalId(EWrestlerID_N(Z_Param__rivalId));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerRoster)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__Roster);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerRoster(Z_Param__Roster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerScenario)
	{
		P_GET_ENUM(ECareerScenario,Z_Param__Scenario);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerScenario(ECareerScenario(Z_Param__Scenario));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerScenarioPart)
	{
		P_GET_ENUM(ECareerScenarioPart,Z_Param__ScenarioPart);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerScenarioPart(ECareerScenarioPart(Z_Param__ScenarioPart));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerScout)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param__Scout);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerScout(Z_Param__Scout);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerSkillPoint)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__skillPoint);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerSkillPoint(Z_Param__skillPoint);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerTotalScenarioTurn)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__TotalScenarioTurn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerTotalScenarioTurn(Z_Param__TotalScenarioTurn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerTurnMax)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__TurnMax);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerTurnMax(Z_Param__TurnMax);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerTutorialUseFlag)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__useFlag);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerTutorialUseFlag(Z_Param_Out__useFlag);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerUnlockDark)
	{
		P_GET_UBOOL(Z_Param__bUnlockDark);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerUnlockDark(Z_Param__bUnlockDark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerUnlockRampage)
	{
		P_GET_UBOOL(Z_Param__bUnlockDark);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerUnlockRampage(Z_Param__bUnlockDark);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerUseTurnEnding)
	{
		P_GET_UBOOL(Z_Param__useTurnEnding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerUseTurnEnding(Z_Param__useTurnEnding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerVegetarian)
	{
		P_GET_UBOOL(Z_Param__bVegetarian);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerVegetarian(Z_Param__bVegetarian);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerWrestlerClearCount)
	{
		P_GET_TARRAY_REF(uint8,Z_Param_Out__clearCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerWrestlerClearCount(Z_Param_Out__clearCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerWrestlerGUID)
	{
		P_GET_STRUCT(FGuid,Z_Param__wrestlerGUID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerWrestlerGUID(Z_Param__wrestlerGUID);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerWrestlerId)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__WrestlerID);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerWrestlerId(EWrestlerID_N(Z_Param__WrestlerID));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetCareerWrestlerPersonality)
	{
		P_GET_ENUM(EPersonalityType,Z_Param__Personality);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetCareerWrestlerPersonality(EPersonalityType(Z_Param__Personality));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetNewGameSaveData)
	{
		P_GET_UBOOL(Z_Param__create);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetNewGameSaveData(Z_Param__create);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetSaveDataToCareerGameParam)
	{
		P_GET_OBJECT(UELCareerGameParam,Z_Param__careerGameParam);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->SetSaveDataToCareerGameParam(Z_Param__careerGameParam);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execSetValidContinueData)
	{
		P_GET_UBOOL(Z_Param__Enable);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetValidContinueData(Z_Param__Enable);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execWriteDataFromMyRoster)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_MyRoster);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteDataFromMyRoster(Z_Param_MyRoster);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USaveDataObject_CareerMode::execWriteDataFromMyScout)
	{
		P_GET_OBJECT(UMyWrestlerDataObject,Z_Param_MyScout);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->WriteDataFromMyScout(Z_Param_MyScout);
		P_NATIVE_END;
	}
	void USaveDataObject_CareerMode::StaticRegisterNativesUSaveDataObject_CareerMode()
	{
		UClass* Class = USaveDataObject_CareerMode::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddCareerPostCommandEventList", &USaveDataObject_CareerMode::execAddCareerPostCommandEventList },
			{ "AddChoicesSelectResult", &USaveDataObject_CareerMode::execAddChoicesSelectResult },
			{ "GetCareerbInjury", &USaveDataObject_CareerMode::execGetCareerbInjury },
			{ "GetCareerChampionship", &USaveDataObject_CareerMode::execGetCareerChampionship },
			{ "GetCareerCondition", &USaveDataObject_CareerMode::execGetCareerCondition },
			{ "GetCareerCurrentTurn", &USaveDataObject_CareerMode::execGetCareerCurrentTurn },
			{ "GetCareerCurrentWeek", &USaveDataObject_CareerMode::execGetCareerCurrentWeek },
			{ "GetCareerDateId", &USaveDataObject_CareerMode::execGetCareerDateId },
			{ "GetCareerDifficulty", &USaveDataObject_CareerMode::execGetCareerDifficulty },
			{ "GetCareerDispSubtitles", &USaveDataObject_CareerMode::execGetCareerDispSubtitles },
			{ "GetCareerDispTutorialDialog", &USaveDataObject_CareerMode::execGetCareerDispTutorialDialog },
			{ "GetCareerLongStoryCard", &USaveDataObject_CareerMode::execGetCareerLongStoryCard },
			{ "GetCareerMatchVenue", &USaveDataObject_CareerMode::execGetCareerMatchVenue },
			{ "GetCareerMenuActionSelectedFlag", &USaveDataObject_CareerMode::execGetCareerMenuActionSelectedFlag },
			{ "GetCareerMoney", &USaveDataObject_CareerMode::execGetCareerMoney },
			{ "GetCareerMotivation", &USaveDataObject_CareerMode::execGetCareerMotivation },
			{ "GetCareerNextStoryKey", &USaveDataObject_CareerMode::execGetCareerNextStoryKey },
			{ "GetCareerPertnerId", &USaveDataObject_CareerMode::execGetCareerPertnerId },
			{ "GetCareerPlayDarkMatch", &USaveDataObject_CareerMode::execGetCareerPlayDarkMatch },
			{ "GetCareerPlayerItemInfo", &USaveDataObject_CareerMode::execGetCareerPlayerItemInfo },
			{ "GetCareerPostCommandEventList", &USaveDataObject_CareerMode::execGetCareerPostCommandEventList },
			{ "GetCareerPresetNo", &USaveDataObject_CareerMode::execGetCareerPresetNo },
			{ "GetCareerRecordInfoLocal", &USaveDataObject_CareerMode::execGetCareerRecordInfoLocal },
			{ "GetCareerRecordInfoTotal", &USaveDataObject_CareerMode::execGetCareerRecordInfoTotal },
			{ "GetCareerRivalId", &USaveDataObject_CareerMode::execGetCareerRivalId },
			{ "GetCareerRoster", &USaveDataObject_CareerMode::execGetCareerRoster },
			{ "GetCareerScenarioPart", &USaveDataObject_CareerMode::execGetCareerScenarioPart },
			{ "GetCareerScout", &USaveDataObject_CareerMode::execGetCareerScout },
			{ "GetCareerSkillPoint", &USaveDataObject_CareerMode::execGetCareerSkillPoint },
			{ "GetCareerTotalScenarioTurn", &USaveDataObject_CareerMode::execGetCareerTotalScenarioTurn },
			{ "GetCareerTurnMax", &USaveDataObject_CareerMode::execGetCareerTurnMax },
			{ "GetCareerTutorialUseFlag", &USaveDataObject_CareerMode::execGetCareerTutorialUseFlag },
			{ "GetCareerUnlockDark", &USaveDataObject_CareerMode::execGetCareerUnlockDark },
			{ "GetCareerUnlockRampage", &USaveDataObject_CareerMode::execGetCareerUnlockRampage },
			{ "GetCareerUseTurnEnding", &USaveDataObject_CareerMode::execGetCareerUseTurnEnding },
			{ "GetCareerVegetarian", &USaveDataObject_CareerMode::execGetCareerVegetarian },
			{ "GetCareerWrestlerClearCount", &USaveDataObject_CareerMode::execGetCareerWrestlerClearCount },
			{ "GetCareerWrestlerGUID", &USaveDataObject_CareerMode::execGetCareerWrestlerGUID },
			{ "GetCareerWrestlerId", &USaveDataObject_CareerMode::execGetCareerWrestlerId },
			{ "GetCareerWrestlerPersonality", &USaveDataObject_CareerMode::execGetCareerWrestlerPersonality },
			{ "GetCareeScenario", &USaveDataObject_CareerMode::execGetCareeScenario },
			{ "GetChoicesSelectResult", &USaveDataObject_CareerMode::execGetChoicesSelectResult },
			{ "IsNewGameSaveData", &USaveDataObject_CareerMode::execIsNewGameSaveData },
			{ "IsValidContinueData", &USaveDataObject_CareerMode::execIsValidContinueData },
			{ "ReadDataToMyRoster", &USaveDataObject_CareerMode::execReadDataToMyRoster },
			{ "ReadDataToMyScout", &USaveDataObject_CareerMode::execReadDataToMyScout },
			{ "SetCareerbInjury", &USaveDataObject_CareerMode::execSetCareerbInjury },
			{ "SetCareerChampionship", &USaveDataObject_CareerMode::execSetCareerChampionship },
			{ "SetCareerCondition", &USaveDataObject_CareerMode::execSetCareerCondition },
			{ "SetCareerCurrentTurn", &USaveDataObject_CareerMode::execSetCareerCurrentTurn },
			{ "SetCareerCurrentWeek", &USaveDataObject_CareerMode::execSetCareerCurrentWeek },
			{ "SetCareerDateId", &USaveDataObject_CareerMode::execSetCareerDateId },
			{ "SetCareerDifficulty", &USaveDataObject_CareerMode::execSetCareerDifficulty },
			{ "SetCareerDispSubtitles", &USaveDataObject_CareerMode::execSetCareerDispSubtitles },
			{ "SetCareerDispTutorialDialog", &USaveDataObject_CareerMode::execSetCareerDispTutorialDialog },
			{ "SetCareerGameParamToSaveData", &USaveDataObject_CareerMode::execSetCareerGameParamToSaveData },
			{ "SetCareerLongStoryCard", &USaveDataObject_CareerMode::execSetCareerLongStoryCard },
			{ "SetCareerMatchVenue", &USaveDataObject_CareerMode::execSetCareerMatchVenue },
			{ "SetCareerMenuActionSelectedFlag", &USaveDataObject_CareerMode::execSetCareerMenuActionSelectedFlag },
			{ "SetCareerMoney", &USaveDataObject_CareerMode::execSetCareerMoney },
			{ "SetCareerMotivation", &USaveDataObject_CareerMode::execSetCareerMotivation },
			{ "SetCareerNextStoryKey", &USaveDataObject_CareerMode::execSetCareerNextStoryKey },
			{ "SetCareerPertnerId", &USaveDataObject_CareerMode::execSetCareerPertnerId },
			{ "SetCareerPlayDarkMatch", &USaveDataObject_CareerMode::execSetCareerPlayDarkMatch },
			{ "SetCareerPlayerItemInfo", &USaveDataObject_CareerMode::execSetCareerPlayerItemInfo },
			{ "SetCareerPresetNo", &USaveDataObject_CareerMode::execSetCareerPresetNo },
			{ "SetCareerRecordInfoLocal", &USaveDataObject_CareerMode::execSetCareerRecordInfoLocal },
			{ "SetCareerRecordInfoTotal", &USaveDataObject_CareerMode::execSetCareerRecordInfoTotal },
			{ "SetCareerRivalId", &USaveDataObject_CareerMode::execSetCareerRivalId },
			{ "SetCareerRoster", &USaveDataObject_CareerMode::execSetCareerRoster },
			{ "SetCareerScenario", &USaveDataObject_CareerMode::execSetCareerScenario },
			{ "SetCareerScenarioPart", &USaveDataObject_CareerMode::execSetCareerScenarioPart },
			{ "SetCareerScout", &USaveDataObject_CareerMode::execSetCareerScout },
			{ "SetCareerSkillPoint", &USaveDataObject_CareerMode::execSetCareerSkillPoint },
			{ "SetCareerTotalScenarioTurn", &USaveDataObject_CareerMode::execSetCareerTotalScenarioTurn },
			{ "SetCareerTurnMax", &USaveDataObject_CareerMode::execSetCareerTurnMax },
			{ "SetCareerTutorialUseFlag", &USaveDataObject_CareerMode::execSetCareerTutorialUseFlag },
			{ "SetCareerUnlockDark", &USaveDataObject_CareerMode::execSetCareerUnlockDark },
			{ "SetCareerUnlockRampage", &USaveDataObject_CareerMode::execSetCareerUnlockRampage },
			{ "SetCareerUseTurnEnding", &USaveDataObject_CareerMode::execSetCareerUseTurnEnding },
			{ "SetCareerVegetarian", &USaveDataObject_CareerMode::execSetCareerVegetarian },
			{ "SetCareerWrestlerClearCount", &USaveDataObject_CareerMode::execSetCareerWrestlerClearCount },
			{ "SetCareerWrestlerGUID", &USaveDataObject_CareerMode::execSetCareerWrestlerGUID },
			{ "SetCareerWrestlerId", &USaveDataObject_CareerMode::execSetCareerWrestlerId },
			{ "SetCareerWrestlerPersonality", &USaveDataObject_CareerMode::execSetCareerWrestlerPersonality },
			{ "SetNewGameSaveData", &USaveDataObject_CareerMode::execSetNewGameSaveData },
			{ "SetSaveDataToCareerGameParam", &USaveDataObject_CareerMode::execSetSaveDataToCareerGameParam },
			{ "SetValidContinueData", &USaveDataObject_CareerMode::execSetValidContinueData },
			{ "WriteDataFromMyRoster", &USaveDataObject_CareerMode::execWriteDataFromMyRoster },
			{ "WriteDataFromMyScout", &USaveDataObject_CareerMode::execWriteDataFromMyScout },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics
	{
		struct SaveDataObject_CareerMode_eventAddCareerPostCommandEventList_Parms
		{
			int32 _targetId;
			FCareerPostCommandEventList _postCommandEventList;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__postCommandEventList;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventAddCareerPostCommandEventList_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::NewProp__postCommandEventList = { "_postCommandEventList", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventAddCareerPostCommandEventList_Parms, _postCommandEventList), Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::NewProp__postCommandEventList,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "AddCareerPostCommandEventList", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventAddCareerPostCommandEventList_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics
	{
		struct SaveDataObject_CareerMode_eventAddChoicesSelectResult_Parms
		{
			int32 _targetId;
			ECareerChoicesPattern _choicesSelectionResult;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__choicesSelectionResult_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__choicesSelectionResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventAddChoicesSelectResult_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__choicesSelectionResult_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__choicesSelectionResult = { "_choicesSelectionResult", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventAddChoicesSelectResult_Parms, _choicesSelectionResult), Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__choicesSelectionResult_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::NewProp__choicesSelectionResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "AddChoicesSelectResult", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventAddChoicesSelectResult_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerbInjury_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerbInjury_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerbInjury_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerbInjury", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerbInjury_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerChampionship_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerChampionship_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerChampionshipHolder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerChampionship", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerChampionship_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerCondition_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerCondition_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerCondition", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerCondition_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerCurrentTurn_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerCurrentTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerCurrentTurn", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerCurrentTurn_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerCurrentWeek_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerCurrentWeek_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerCurrentWeek", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerCurrentWeek_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerDateId_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerDateId_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerDateId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerDateId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerDifficulty_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerDifficulty_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerDifficulty", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerDifficulty_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerDispSubtitles_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerDispSubtitles_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerDispSubtitles_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerDispSubtitles", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerDispSubtitles_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerDispTutorialDialog_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerDispTutorialDialog_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerDispTutorialDialog_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerDispTutorialDialog", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerDispTutorialDialog_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerLongStoryCard_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerLongStoryCard_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerLongStoryCard", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerLongStoryCard_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerMatchVenue_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerMatchVenue_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerMatchVenue", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerMatchVenue_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerMenuActionSelectedFlag_Parms
		{
			uint8 ReturnValue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerMenuActionSelectedFlag_Parms, ReturnValue), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerMenuActionSelectedFlag", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerMenuActionSelectedFlag_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerMoney_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerMoney_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerMoney", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerMoney_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerMotivation_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerMotivation_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerMotivation", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerMotivation_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerNextStoryKey_Parms
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
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerNextStoryKey_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerNextStoryKey", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerNextStoryKey_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerPertnerId_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerPertnerId_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerPertnerId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerPertnerId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerPlayDarkMatch_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerPlayDarkMatch_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerPlayDarkMatch_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerPlayDarkMatch", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerPlayDarkMatch_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerPlayerItemInfo_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerPlayerItemInfo_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerPlayerItemInfo", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerPlayerItemInfo_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerPostCommandEventList_Parms
		{
			int32 _targetId;
			FCareerPostCommandEventList ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerPostCommandEventList_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerPostCommandEventList_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerPostCommandEventList, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerPostCommandEventList", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerPostCommandEventList_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerPresetNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerPresetNo_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerPresetNo", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerPresetNo_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerRecordInfoLocal_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerRecordInfoLocal_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerRecordInfoLocal", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerRecordInfoLocal_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerRecordInfoTotal_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerRecordInfoTotal_Parms, ReturnValue), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerRecordInfoTotal", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerRecordInfoTotal_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerRivalId_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerRivalId_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerRivalId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerRivalId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerRoster_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerRoster_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerRoster", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerRoster_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerScenarioPart_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerScenarioPart_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerScenarioPart", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerScenarioPart_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerScout_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerScout_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerScout", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerScout_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerSkillPoint_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerSkillPoint_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerSkillPoint", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerSkillPoint_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerTotalScenarioTurn_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerTotalScenarioTurn_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerTotalScenarioTurn", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerTotalScenarioTurn_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerTurnMax_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerTurnMax_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerTurnMax", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerTurnMax_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerTutorialUseFlag_Parms
		{
			TArray<uint8> _clearCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__clearCount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__clearCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::NewProp__clearCount_Inner = { "_clearCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::NewProp__clearCount = { "_clearCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerTutorialUseFlag_Parms, _clearCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::NewProp__clearCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::NewProp__clearCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerTutorialUseFlag", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerTutorialUseFlag_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerUnlockDark_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerUnlockDark_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerUnlockDark_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerUnlockDark", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerUnlockDark_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerUnlockRampage_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerUnlockRampage_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerUnlockRampage_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerUnlockRampage", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerUnlockRampage_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerUseTurnEnding_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerUseTurnEnding_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerUseTurnEnding_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerUseTurnEnding", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerUseTurnEnding_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerVegetarian_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventGetCareerVegetarian_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventGetCareerVegetarian_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerVegetarian", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerVegetarian_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerWrestlerClearCount_Parms
		{
			TArray<uint8> _clearCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__clearCount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__clearCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::NewProp__clearCount_Inner = { "_clearCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::NewProp__clearCount = { "_clearCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerWrestlerClearCount_Parms, _clearCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::NewProp__clearCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::NewProp__clearCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerWrestlerClearCount", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerWrestlerClearCount_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerWrestlerGUID_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerWrestlerGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerWrestlerGUID", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerWrestlerGUID_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerWrestlerId_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerWrestlerId_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerWrestlerId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerWrestlerId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareerWrestlerPersonality_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareerWrestlerPersonality_Parms, ReturnValue), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareerWrestlerPersonality", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareerWrestlerPersonality_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics
	{
		struct SaveDataObject_CareerMode_eventGetCareeScenario_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetCareeScenario_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetCareeScenario", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetCareeScenario_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics
	{
		struct SaveDataObject_CareerMode_eventGetChoicesSelectResult_Parms
		{
			int32 _targetId;
			ECareerChoicesPattern ReturnValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__targetId;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp__targetId = { "_targetId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetChoicesSelectResult_Parms, _targetId), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventGetChoicesSelectResult_Parms, ReturnValue), Z_Construct_UEnum_ABP_200508_ECareerChoicesPattern, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp__targetId,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp_ReturnValue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "GetChoicesSelectResult", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventGetChoicesSelectResult_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics
	{
		struct SaveDataObject_CareerMode_eventIsNewGameSaveData_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventIsNewGameSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventIsNewGameSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "IsNewGameSaveData", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventIsNewGameSaveData_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics
	{
		struct SaveDataObject_CareerMode_eventIsValidContinueData_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventIsValidContinueData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventIsValidContinueData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "IsValidContinueData", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventIsValidContinueData_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics
	{
		struct SaveDataObject_CareerMode_eventReadDataToMyRoster_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventReadDataToMyRoster_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "ReadDataToMyRoster", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventReadDataToMyRoster_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics
	{
		struct SaveDataObject_CareerMode_eventReadDataToMyScout_Parms
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
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventReadDataToMyScout_Parms, ReturnValue), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "ReadDataToMyScout", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventReadDataToMyScout_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerbInjury_Parms
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
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::NewProp__bInjury_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerbInjury_Parms*)Obj)->_bInjury = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::NewProp__bInjury = { "_bInjury", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerbInjury_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::NewProp__bInjury_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::NewProp__bInjury,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerbInjury", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerbInjury_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerChampionship_Parms
		{
			FCareerChampionshipHolder _careerChampionship;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__careerChampionship;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::NewProp__careerChampionship = { "_careerChampionship", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerChampionship_Parms, _careerChampionship), Z_Construct_UScriptStruct_FCareerChampionshipHolder, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::NewProp__careerChampionship,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerChampionship", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerChampionship_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerCondition_Parms
		{
			int32 _condition;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__condition;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::NewProp__condition = { "_condition", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerCondition_Parms, _condition), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::NewProp__condition,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerCondition", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerCondition_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerCurrentTurn_Parms
		{
			int32 _currentTurn;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentTurn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::NewProp__currentTurn = { "_currentTurn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerCurrentTurn_Parms, _currentTurn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::NewProp__currentTurn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerCurrentTurn", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerCurrentTurn_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerCurrentWeek_Parms
		{
			int32 _currentWeek;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__currentWeek;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::NewProp__currentWeek = { "_currentWeek", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerCurrentWeek_Parms, _currentWeek), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::NewProp__currentWeek,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerCurrentWeek", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerCurrentWeek_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerDateId_Parms
		{
			EWrestlerID_N _dateId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__dateId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__dateId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::NewProp__dateId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::NewProp__dateId = { "_dateId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerDateId_Parms, _dateId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::NewProp__dateId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::NewProp__dateId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerDateId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerDateId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerDifficulty_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::NewProp__Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::NewProp__Difficulty = { "_Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerDifficulty_Parms, _Difficulty), Z_Construct_UEnum_ABP_200508_ECareerModeDifficulty, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::NewProp__Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::NewProp__Difficulty,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerDifficulty", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerDifficulty_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerDispSubtitles_Parms
		{
			bool _bDispSubtitles;
		};
		static void NewProp__bDispSubtitles_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bDispSubtitles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::NewProp__bDispSubtitles_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerDispSubtitles_Parms*)Obj)->_bDispSubtitles = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::NewProp__bDispSubtitles = { "_bDispSubtitles", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerDispSubtitles_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::NewProp__bDispSubtitles_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::NewProp__bDispSubtitles,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerDispSubtitles", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerDispSubtitles_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerDispTutorialDialog_Parms
		{
			bool bDispTutorialDialog;
		};
		static void NewProp_bDispTutorialDialog_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bDispTutorialDialog;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::NewProp_bDispTutorialDialog_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerDispTutorialDialog_Parms*)Obj)->bDispTutorialDialog = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::NewProp_bDispTutorialDialog = { "bDispTutorialDialog", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerDispTutorialDialog_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::NewProp_bDispTutorialDialog_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::NewProp_bDispTutorialDialog,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerDispTutorialDialog", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerDispTutorialDialog_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerGameParamToSaveData_Parms
		{
			UELCareerGameParam* _careerGameParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__careerGameParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp__careerGameParam = { "_careerGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerGameParamToSaveData_Parms, _careerGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerGameParamToSaveData_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerGameParamToSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp__careerGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerGameParamToSaveData", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerGameParamToSaveData_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerLongStoryCard_Parms
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::NewProp__StoryCard = { "_StoryCard", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerLongStoryCard_Parms, _StoryCard), Z_Construct_UScriptStruct_FCareerStoryCard, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::NewProp__StoryCard,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerLongStoryCard", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerLongStoryCard_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerMatchVenue_Parms
		{
			ECareerCity _matchVenue;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__matchVenue_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__matchVenue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::NewProp__matchVenue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::NewProp__matchVenue = { "_matchVenue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerMatchVenue_Parms, _matchVenue), Z_Construct_UEnum_ABP_200508_ECareerCity, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::NewProp__matchVenue_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::NewProp__matchVenue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerMatchVenue", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerMatchVenue_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerMenuActionSelectedFlag_Parms
		{
			uint8 _SelectedFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__SelectedFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::NewProp__SelectedFlag = { "_SelectedFlag", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerMenuActionSelectedFlag_Parms, _SelectedFlag), nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::NewProp__SelectedFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerMenuActionSelectedFlag", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerMenuActionSelectedFlag_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerMoney_Parms
		{
			int32 _careerMoney;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__careerMoney;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::NewProp__careerMoney = { "_careerMoney", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerMoney_Parms, _careerMoney), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::NewProp__careerMoney,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerMoney", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerMoney_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerMotivation_Parms
		{
			int32 _motivation;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__motivation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::NewProp__motivation = { "_motivation", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerMotivation_Parms, _motivation), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::NewProp__motivation,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerMotivation", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerMotivation_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerNextStoryKey_Parms
		{
			FName _nextStoryKey;
		};
		static const UE4CodeGen_Private::FNamePropertyParams NewProp__nextStoryKey;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::NewProp__nextStoryKey = { "_nextStoryKey", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerNextStoryKey_Parms, _nextStoryKey), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::NewProp__nextStoryKey,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerNextStoryKey", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerNextStoryKey_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerPertnerId_Parms
		{
			EWrestlerID_N _pertnerId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__pertnerId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__pertnerId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::NewProp__pertnerId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::NewProp__pertnerId = { "_pertnerId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerPertnerId_Parms, _pertnerId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::NewProp__pertnerId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::NewProp__pertnerId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerPertnerId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerPertnerId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerPlayDarkMatch_Parms
		{
			bool _bPlayDarkMatch;
		};
		static void NewProp__bPlayDarkMatch_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bPlayDarkMatch;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::NewProp__bPlayDarkMatch_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerPlayDarkMatch_Parms*)Obj)->_bPlayDarkMatch = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::NewProp__bPlayDarkMatch = { "_bPlayDarkMatch", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerPlayDarkMatch_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::NewProp__bPlayDarkMatch_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::NewProp__bPlayDarkMatch,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerPlayDarkMatch", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerPlayDarkMatch_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerPlayerItemInfo_Parms
		{
			FCareerPlayerItemInfo _careerPlayerItemInfo;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__careerPlayerItemInfo;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::NewProp__careerPlayerItemInfo = { "_careerPlayerItemInfo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerPlayerItemInfo_Parms, _careerPlayerItemInfo), Z_Construct_UScriptStruct_FCareerPlayerItemInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::NewProp__careerPlayerItemInfo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerPlayerItemInfo", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerPlayerItemInfo_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerPresetNo_Parms
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
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::NewProp_PresetNo = { "PresetNo", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerPresetNo_Parms, PresetNo), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::NewProp_PresetNo,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerPresetNo", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerPresetNo_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerRecordInfoLocal_Parms
		{
			FCareerRecordInfo _careerRecordInfoLocal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__careerRecordInfoLocal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::NewProp__careerRecordInfoLocal = { "_careerRecordInfoLocal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerRecordInfoLocal_Parms, _careerRecordInfoLocal), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::NewProp__careerRecordInfoLocal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerRecordInfoLocal", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerRecordInfoLocal_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerRecordInfoTotal_Parms
		{
			FCareerRecordInfo _careerRecordInfoTotal;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__careerRecordInfoTotal;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::NewProp__careerRecordInfoTotal = { "_careerRecordInfoTotal", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerRecordInfoTotal_Parms, _careerRecordInfoTotal), Z_Construct_UScriptStruct_FCareerRecordInfo, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::NewProp__careerRecordInfoTotal,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerRecordInfoTotal", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerRecordInfoTotal_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerRivalId_Parms
		{
			EWrestlerID_N _rivalId;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__rivalId_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__rivalId;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::NewProp__rivalId_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::NewProp__rivalId = { "_rivalId", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerRivalId_Parms, _rivalId), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::NewProp__rivalId_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::NewProp__rivalId,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerRivalId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerRivalId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerRoster_Parms
		{
			UMyWrestlerDataObject* _Roster;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Roster;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::NewProp__Roster = { "_Roster", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerRoster_Parms, _Roster), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::NewProp__Roster,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerRoster", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerRoster_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerScenario_Parms
		{
			ECareerScenario _Scenario;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Scenario_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Scenario;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::NewProp__Scenario_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::NewProp__Scenario = { "_Scenario", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerScenario_Parms, _Scenario), Z_Construct_UEnum_ABP_200508_ECareerScenario, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::NewProp__Scenario_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::NewProp__Scenario,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerScenario", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerScenario_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerScenarioPart_Parms
		{
			ECareerScenarioPart _ScenarioPart;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ScenarioPart_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ScenarioPart;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::NewProp__ScenarioPart_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::NewProp__ScenarioPart = { "_ScenarioPart", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerScenarioPart_Parms, _ScenarioPart), Z_Construct_UEnum_ABP_200508_ECareerScenarioPart, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::NewProp__ScenarioPart_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::NewProp__ScenarioPart,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerScenarioPart", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerScenarioPart_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerScout_Parms
		{
			UMyWrestlerDataObject* _Scout;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__Scout;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::NewProp__Scout = { "_Scout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerScout_Parms, _Scout), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::NewProp__Scout,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerScout", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerScout_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerSkillPoint_Parms
		{
			int32 _skillPoint;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__skillPoint;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::NewProp__skillPoint = { "_skillPoint", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerSkillPoint_Parms, _skillPoint), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::NewProp__skillPoint,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerSkillPoint", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerSkillPoint_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerTotalScenarioTurn_Parms
		{
			int32 _TotalScenarioTurn;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__TotalScenarioTurn;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::NewProp__TotalScenarioTurn = { "_TotalScenarioTurn", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerTotalScenarioTurn_Parms, _TotalScenarioTurn), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::NewProp__TotalScenarioTurn,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerTotalScenarioTurn", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerTotalScenarioTurn_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerTurnMax_Parms
		{
			int32 _TurnMax;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__TurnMax;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::NewProp__TurnMax = { "_TurnMax", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerTurnMax_Parms, _TurnMax), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::NewProp__TurnMax,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerTurnMax", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerTurnMax_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerTutorialUseFlag_Parms
		{
			TArray<uint8> _useFlag;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__useFlag_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__useFlag;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::NewProp__useFlag_Inner = { "_useFlag", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::NewProp__useFlag = { "_useFlag", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerTutorialUseFlag_Parms, _useFlag), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::NewProp__useFlag_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::NewProp__useFlag,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerTutorialUseFlag", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerTutorialUseFlag_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerUnlockDark_Parms
		{
			bool _bUnlockDark;
		};
		static void NewProp__bUnlockDark_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bUnlockDark;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::NewProp__bUnlockDark_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerUnlockDark_Parms*)Obj)->_bUnlockDark = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::NewProp__bUnlockDark = { "_bUnlockDark", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerUnlockDark_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::NewProp__bUnlockDark_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::NewProp__bUnlockDark,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerUnlockDark", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerUnlockDark_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerUnlockRampage_Parms
		{
			bool _bUnlockDark;
		};
		static void NewProp__bUnlockDark_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bUnlockDark;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::NewProp__bUnlockDark_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerUnlockRampage_Parms*)Obj)->_bUnlockDark = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::NewProp__bUnlockDark = { "_bUnlockDark", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerUnlockRampage_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::NewProp__bUnlockDark_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::NewProp__bUnlockDark,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerUnlockRampage", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerUnlockRampage_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerUseTurnEnding_Parms
		{
			bool _useTurnEnding;
		};
		static void NewProp__useTurnEnding_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__useTurnEnding;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::NewProp__useTurnEnding_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerUseTurnEnding_Parms*)Obj)->_useTurnEnding = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::NewProp__useTurnEnding = { "_useTurnEnding", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerUseTurnEnding_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::NewProp__useTurnEnding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::NewProp__useTurnEnding,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerUseTurnEnding", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerUseTurnEnding_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerVegetarian_Parms
		{
			bool _bVegetarian;
		};
		static void NewProp__bVegetarian_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__bVegetarian;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::NewProp__bVegetarian_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetCareerVegetarian_Parms*)Obj)->_bVegetarian = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::NewProp__bVegetarian = { "_bVegetarian", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetCareerVegetarian_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::NewProp__bVegetarian_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::NewProp__bVegetarian,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerVegetarian", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerVegetarian_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerWrestlerClearCount_Parms
		{
			TArray<uint8> _clearCount;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__clearCount_Inner;
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp__clearCount;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::NewProp__clearCount_Inner = { "_clearCount", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::NewProp__clearCount = { "_clearCount", nullptr, (EPropertyFlags)0x0010000000000180, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerWrestlerClearCount_Parms, _clearCount), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::NewProp__clearCount_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::NewProp__clearCount,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerWrestlerClearCount", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerWrestlerClearCount_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerWrestlerGUID_Parms
		{
			FGuid _wrestlerGUID;
		};
		static const UE4CodeGen_Private::FStructPropertyParams NewProp__wrestlerGUID;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::NewProp__wrestlerGUID = { "_wrestlerGUID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerWrestlerGUID_Parms, _wrestlerGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::NewProp__wrestlerGUID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerWrestlerGUID", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerWrestlerGUID_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerWrestlerId_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::NewProp__WrestlerID_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::NewProp__WrestlerID = { "_WrestlerID", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerWrestlerId_Parms, _WrestlerID), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::NewProp__WrestlerID_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::NewProp__WrestlerID,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerWrestlerId", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerWrestlerId_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics
	{
		struct SaveDataObject_CareerMode_eventSetCareerWrestlerPersonality_Parms
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
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::NewProp__Personality_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::NewProp__Personality = { "_Personality", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetCareerWrestlerPersonality_Parms, _Personality), Z_Construct_UEnum_ELITE_Game_EPersonalityType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::NewProp__Personality_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::NewProp__Personality,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetCareerWrestlerPersonality", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetCareerWrestlerPersonality_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics
	{
		struct SaveDataObject_CareerMode_eventSetNewGameSaveData_Parms
		{
			bool _create;
		};
		static void NewProp__create_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__create;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::NewProp__create_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetNewGameSaveData_Parms*)Obj)->_create = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::NewProp__create = { "_create", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetNewGameSaveData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::NewProp__create_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::NewProp__create,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetNewGameSaveData", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetNewGameSaveData_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics
	{
		struct SaveDataObject_CareerMode_eventSetSaveDataToCareerGameParam_Parms
		{
			UELCareerGameParam* _careerGameParam;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp__careerGameParam;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp__careerGameParam = { "_careerGameParam", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventSetSaveDataToCareerGameParam_Parms, _careerGameParam), Z_Construct_UClass_UELCareerGameParam_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetSaveDataToCareerGameParam_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetSaveDataToCareerGameParam_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp__careerGameParam,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetSaveDataToCareerGameParam", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetSaveDataToCareerGameParam_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics
	{
		struct SaveDataObject_CareerMode_eventSetValidContinueData_Parms
		{
			bool _Enable;
		};
		static void NewProp__Enable_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__Enable;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::NewProp__Enable_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventSetValidContinueData_Parms*)Obj)->_Enable = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::NewProp__Enable = { "_Enable", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventSetValidContinueData_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::NewProp__Enable_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::NewProp__Enable,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "SetValidContinueData", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventSetValidContinueData_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics
	{
		struct SaveDataObject_CareerMode_eventWriteDataFromMyRoster_Parms
		{
			UMyWrestlerDataObject* MyRoster;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyRoster;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_MyRoster = { "MyRoster", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventWriteDataFromMyRoster_Parms, MyRoster), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventWriteDataFromMyRoster_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventWriteDataFromMyRoster_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_MyRoster,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "WriteDataFromMyRoster", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventWriteDataFromMyRoster_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics
	{
		struct SaveDataObject_CareerMode_eventWriteDataFromMyScout_Parms
		{
			UMyWrestlerDataObject* MyScout;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_MyScout;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_MyScout = { "MyScout", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SaveDataObject_CareerMode_eventWriteDataFromMyScout_Parms, MyScout), Z_Construct_UClass_UMyWrestlerDataObject_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SaveDataObject_CareerMode_eventWriteDataFromMyScout_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SaveDataObject_CareerMode_eventWriteDataFromMyScout_Parms), &Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_MyScout,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USaveDataObject_CareerMode, nullptr, "WriteDataFromMyScout", nullptr, nullptr, sizeof(SaveDataObject_CareerMode_eventWriteDataFromMyScout_Parms), Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_USaveDataObject_CareerMode_NoRegister()
	{
		return USaveDataObject_CareerMode::StaticClass();
	}
	struct Z_Construct_UClass_USaveDataObject_CareerMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USaveDataObject_CareerMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_USaveDataObjectBase,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USaveDataObject_CareerMode_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_AddCareerPostCommandEventList, "AddCareerPostCommandEventList" }, // 2208760267
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_AddChoicesSelectResult, "AddChoicesSelectResult" }, // 2361640379
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerbInjury, "GetCareerbInjury" }, // 2195610161
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerChampionship, "GetCareerChampionship" }, // 2642327841
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCondition, "GetCareerCondition" }, // 2106138159
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentTurn, "GetCareerCurrentTurn" }, // 3100593196
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerCurrentWeek, "GetCareerCurrentWeek" }, // 1391409078
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDateId, "GetCareerDateId" }, // 2569088132
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDifficulty, "GetCareerDifficulty" }, // 1893793573
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispSubtitles, "GetCareerDispSubtitles" }, // 4041045536
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerDispTutorialDialog, "GetCareerDispTutorialDialog" }, // 4030816762
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerLongStoryCard, "GetCareerLongStoryCard" }, // 694941686
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMatchVenue, "GetCareerMatchVenue" }, // 1141035979
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMenuActionSelectedFlag, "GetCareerMenuActionSelectedFlag" }, // 544283955
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMoney, "GetCareerMoney" }, // 3690595436
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerMotivation, "GetCareerMotivation" }, // 3263064847
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerNextStoryKey, "GetCareerNextStoryKey" }, // 1938698511
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPertnerId, "GetCareerPertnerId" }, // 981045498
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayDarkMatch, "GetCareerPlayDarkMatch" }, // 2562983285
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPlayerItemInfo, "GetCareerPlayerItemInfo" }, // 1159996973
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPostCommandEventList, "GetCareerPostCommandEventList" }, // 3349499186
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerPresetNo, "GetCareerPresetNo" }, // 3345100804
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoLocal, "GetCareerRecordInfoLocal" }, // 2091003689
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRecordInfoTotal, "GetCareerRecordInfoTotal" }, // 625956635
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRivalId, "GetCareerRivalId" }, // 2379975777
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerRoster, "GetCareerRoster" }, // 4139713511
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScenarioPart, "GetCareerScenarioPart" }, // 156029067
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerScout, "GetCareerScout" }, // 950304244
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerSkillPoint, "GetCareerSkillPoint" }, // 3386071676
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTotalScenarioTurn, "GetCareerTotalScenarioTurn" }, // 1956584278
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTurnMax, "GetCareerTurnMax" }, // 1771723472
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerTutorialUseFlag, "GetCareerTutorialUseFlag" }, // 657268711
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockDark, "GetCareerUnlockDark" }, // 783270276
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUnlockRampage, "GetCareerUnlockRampage" }, // 308617709
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerUseTurnEnding, "GetCareerUseTurnEnding" }, // 1396274988
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerVegetarian, "GetCareerVegetarian" }, // 2618147758
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerClearCount, "GetCareerWrestlerClearCount" }, // 755749476
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerGUID, "GetCareerWrestlerGUID" }, // 3496204869
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerId, "GetCareerWrestlerId" }, // 4125391363
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareerWrestlerPersonality, "GetCareerWrestlerPersonality" }, // 2520152250
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetCareeScenario, "GetCareeScenario" }, // 2683929980
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_GetChoicesSelectResult, "GetChoicesSelectResult" }, // 3113126286
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_IsNewGameSaveData, "IsNewGameSaveData" }, // 3269858243
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_IsValidContinueData, "IsValidContinueData" }, // 1511046203
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyRoster, "ReadDataToMyRoster" }, // 177036723
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_ReadDataToMyScout, "ReadDataToMyScout" }, // 2914582117
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerbInjury, "SetCareerbInjury" }, // 1541986868
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerChampionship, "SetCareerChampionship" }, // 2798214799
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCondition, "SetCareerCondition" }, // 2948984065
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentTurn, "SetCareerCurrentTurn" }, // 196776808
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerCurrentWeek, "SetCareerCurrentWeek" }, // 3329065309
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDateId, "SetCareerDateId" }, // 3151438076
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDifficulty, "SetCareerDifficulty" }, // 3789332331
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispSubtitles, "SetCareerDispSubtitles" }, // 2942951416
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerDispTutorialDialog, "SetCareerDispTutorialDialog" }, // 1776088186
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerGameParamToSaveData, "SetCareerGameParamToSaveData" }, // 3842235625
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerLongStoryCard, "SetCareerLongStoryCard" }, // 1481115210
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMatchVenue, "SetCareerMatchVenue" }, // 67196823
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMenuActionSelectedFlag, "SetCareerMenuActionSelectedFlag" }, // 524152647
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMoney, "SetCareerMoney" }, // 802750663
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerMotivation, "SetCareerMotivation" }, // 4255772259
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerNextStoryKey, "SetCareerNextStoryKey" }, // 671969876
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPertnerId, "SetCareerPertnerId" }, // 4223713370
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayDarkMatch, "SetCareerPlayDarkMatch" }, // 3492727150
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPlayerItemInfo, "SetCareerPlayerItemInfo" }, // 1828081781
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerPresetNo, "SetCareerPresetNo" }, // 422777539
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoLocal, "SetCareerRecordInfoLocal" }, // 3386832347
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRecordInfoTotal, "SetCareerRecordInfoTotal" }, // 3632171009
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRivalId, "SetCareerRivalId" }, // 3010998572
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerRoster, "SetCareerRoster" }, // 2950699995
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenario, "SetCareerScenario" }, // 160944506
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScenarioPart, "SetCareerScenarioPart" }, // 1440327738
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerScout, "SetCareerScout" }, // 311141544
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerSkillPoint, "SetCareerSkillPoint" }, // 1592552546
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTotalScenarioTurn, "SetCareerTotalScenarioTurn" }, // 1590897065
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTurnMax, "SetCareerTurnMax" }, // 2038540574
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerTutorialUseFlag, "SetCareerTutorialUseFlag" }, // 471962103
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockDark, "SetCareerUnlockDark" }, // 2255126309
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUnlockRampage, "SetCareerUnlockRampage" }, // 317718066
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerUseTurnEnding, "SetCareerUseTurnEnding" }, // 1400216967
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerVegetarian, "SetCareerVegetarian" }, // 4001250033
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerClearCount, "SetCareerWrestlerClearCount" }, // 3731193776
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerGUID, "SetCareerWrestlerGUID" }, // 858863860
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerId, "SetCareerWrestlerId" }, // 2609103740
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetCareerWrestlerPersonality, "SetCareerWrestlerPersonality" }, // 4230979297
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetNewGameSaveData, "SetNewGameSaveData" }, // 4039812401
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetSaveDataToCareerGameParam, "SetSaveDataToCareerGameParam" }, // 4123824140
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_SetValidContinueData, "SetValidContinueData" }, // 4121977523
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyRoster, "WriteDataFromMyRoster" }, // 3952469029
		{ &Z_Construct_UFunction_USaveDataObject_CareerMode_WriteDataFromMyScout, "WriteDataFromMyScout" }, // 997519775
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USaveDataObject_CareerMode_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "SaveDataObject_CareerMode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SaveDataObject_CareerMode.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USaveDataObject_CareerMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USaveDataObject_CareerMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_USaveDataObject_CareerMode_Statics::ClassParams = {
		&USaveDataObject_CareerMode::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USaveDataObject_CareerMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USaveDataObject_CareerMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USaveDataObject_CareerMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_USaveDataObject_CareerMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(USaveDataObject_CareerMode, 2453082662);
	template<> ABP_200508_API UClass* StaticClass<USaveDataObject_CareerMode>()
	{
		return USaveDataObject_CareerMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_USaveDataObject_CareerMode(Z_Construct_UClass_USaveDataObject_CareerMode, &USaveDataObject_CareerMode::StaticClass, TEXT("/Script/ABP_200508"), TEXT("USaveDataObject_CareerMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(USaveDataObject_CareerMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
