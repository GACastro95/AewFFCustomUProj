// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/ELChallengeUtilityFunction.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeELChallengeUtilityFunction() {}
// Cross Module References
	ABP_200508_API UClass* Z_Construct_UClass_UELChallengeUtilityFunction_NoRegister();
	ABP_200508_API UClass* Z_Construct_UClass_UELChallengeUtilityFunction();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EWrestlerID_N();
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeCpuDifficultyType();
	ELITE_GAME_API UEnum* Z_Construct_UEnum_ELITE_Game_EELBelt();
// End Cross Module References
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddBecameFinisher)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddBecameFinisher();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddBlowOpponentWhoCamebackFromRope)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddBlowOpponentWhoCamebackFromRope();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddCompletedTheTaunt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddCompletedTheTaunt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddCrearedCareerMode)
	{
		P_GET_UBOOL(Z_Param__isSameWrestler);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddCrearedCareerMode(Z_Param__isSameWrestler);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddCreatedCustomArea)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddCreatedCustomArea();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddCreatedCustomWrestler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddCreatedCustomWrestler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddDamageRankMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__damage);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddDamageRankMatch(Z_Param__damage);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddDefeatedCpuWithCountout)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddDefeatedCpuWithCountout();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddDefeatedCpuWithPinfall)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddDefeatedCpuWithPinfall();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddDefeatedCpuWithSubmission)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddDefeatedCpuWithSubmission();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddDistanceRankMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__distance);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddDistanceRankMatch(Z_Param__distance);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddEditedBadgeItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddEditedBadgeItem(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddEditedTeam)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddEditedTeam();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddExhibitionMatchCount)
	{
		P_GET_ENUM(EChallengeMatchRuleType,Z_Param__ruleType);
		P_GET_ENUM(EWrestlerID_N,Z_Param__usedWrestler);
		P_GET_UBOOL(Z_Param__isOnlineMode);
		P_GET_UBOOL(Z_Param__isWinner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddExhibitionMatchCount(EChallengeMatchRuleType(Z_Param__ruleType),EWrestlerID_N(Z_Param__usedWrestler),Z_Param__isOnlineMode,Z_Param__isWinner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddExhibitionMatchCountWithCpu)
	{
		P_GET_ENUM(EChallengeMatchRuleType,Z_Param__ruleType);
		P_GET_ENUM(EWrestlerID_N,Z_Param__usedWrestler);
		P_GET_ENUM(EChallengeCpuDifficultyType,Z_Param__Difficulty);
		P_GET_UBOOL(Z_Param__isWinner);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddExhibitionMatchCountWithCpu(EChallengeMatchRuleType(Z_Param__ruleType),EWrestlerID_N(Z_Param__usedWrestler),EChallengeCpuDifficultyType(Z_Param__Difficulty),Z_Param__isWinner);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddForcedMovedToTitleBelt)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddForcedMovedToTitleBelt();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddFrendTagWin)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddFrendTagWin();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddGrabToTheOpponentWhoWentDown)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddGrabToTheOpponentWhoWentDown();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitBehindStrongGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitBehindStrongGrab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitBehindWeakGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitBehindWeakGrab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitDashBlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitDashBlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitDivingBlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitDivingBlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitFrontStrongGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitFrontStrongGrab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitFrontWeakGrab)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitFrontWeakGrab();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitStrongBlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitStrongBlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitWeakBlow)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitWeakBlow();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddHitWeaponAttack)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddHitWeaponAttack();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddMatchResultRankRankMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__rankValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddMatchResultRankRankMatch(Z_Param__rankValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddMatchResultScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddMatchResultScore(Z_Param__Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddModifiedCustomWrestlerSkill)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddModifiedCustomWrestlerSkill();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddModifiedEntrance)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddModifiedEntrance();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddModifiedWrester)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddModifiedWrester();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayedCareerMode)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayedCareerMode();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayedCrate)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayedCrate(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayedMiniGame)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayedMiniGame();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayedOnlineCasualMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayedOnlineCasualMatch(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayedOnlineRankMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayedOnlineRankMatch(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPlayStadiumStampedeModeCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPlayStadiumStampedeModeCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPossessedBadgeItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPossessedBadgeItem(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddPurchasedItem)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddPurchasedItem(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSFarWeaponAttackDamageCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSFarWeaponAttackDamageCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSFinisherSuccessCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSFinisherSuccessCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSJumpAttackHitCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSJumpAttackHitCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSNearWeaponAttackDamageCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSNearWeaponAttackDamageCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSStrongStrikeTechniqueHitCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSStrongStrikeTechniqueHitCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSThrowingWeaponAttackDamageCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSThrowingWeaponAttackDamageCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSTotalAbilityUseCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSTotalAbilityUseCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSTotalRevivalCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSTotalRevivalCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSTotalSlotMachinePlayCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSTotalSlotMachinePlayCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSTotalVendingMachineBuyCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSTotalVendingMachineBuyCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSTotalWrestlerKillCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSTotalWrestlerKillCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToBalance)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSVictoryRoyalWrestlerTypeToBalance(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToHighFly)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSVictoryRoyalWrestlerTypeToHighFly(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToPower)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSVictoryRoyalWrestlerTypeToPower(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddSSWeakStrikeTechniqueHitCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddSSWeakStrikeTechniqueHitCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddStadiumStampedeModeVictoryRoyalCount)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Add);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddStadiumStampedeModeVictoryRoyalCount(Z_Param_Add);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddThrewOpponentWhoCamebackFromRope)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddThrewOpponentWhoCamebackFromRope();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddUnlockedWrestler)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddUnlockedWrestler(Z_Param__Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddWatchingGamesCount)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddWatchingGamesCount();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execAddWinTheChampionTitle)
	{
		P_GET_ENUM(EWrestlerID_N,Z_Param__usedWrestler);
		P_GET_ENUM(EELBelt,Z_Param__beltType);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::AddWinTheChampionTitle(EWrestlerID_N(Z_Param__usedWrestler),EELBelt(Z_Param__beltType));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execCreatePlayerData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::CreatePlayerData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execDisposeSaveData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::DisposeSaveData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateMatchResultRank)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param__rankValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateMatchResultRank(Z_Param__rankValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateMiniGameHighScore)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__minigameIndex);
		P_GET_PROPERTY(FIntProperty,Z_Param__Score);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateMiniGameHighScore(Z_Param__minigameIndex,Z_Param__Score);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateOnlineRank)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__rankValue);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateOnlineRank(Z_Param__rankValue);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateOnlineRanking)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__rankingVale);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateOnlineRanking(Z_Param__rankingVale);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSAbilityUseCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSAbilityUseCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSEpicWeaponHitInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSEpicWeaponHitInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSExpItemInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSExpItemInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSFeverCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSFeverCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSFinisherSuccessCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSFinisherSuccessCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSHighestReachPlayerRank)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSHighestReachPlayerRank(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSSituationMoveCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSSituationMoveCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSSlotMachinePlayCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSSlotMachinePlayCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSTreasureBoxInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSTreasureBoxInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSVendingMachineBuyCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSVendingMachineBuyCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateSSWrestlerKillCountInOneMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Count);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateSSWrestlerKillCountInOneMatch(Z_Param_Count);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UELChallengeUtilityFunction::execUpdateTwoPlatoonCntRankMatch)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param__cnt);
		P_FINISH;
		P_NATIVE_BEGIN;
		UELChallengeUtilityFunction::UpdateTwoPlatoonCntRankMatch(Z_Param__cnt);
		P_NATIVE_END;
	}
	void UELChallengeUtilityFunction::StaticRegisterNativesUELChallengeUtilityFunction()
	{
		UClass* Class = UELChallengeUtilityFunction::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddBecameFinisher", &UELChallengeUtilityFunction::execAddBecameFinisher },
			{ "AddBlowOpponentWhoCamebackFromRope", &UELChallengeUtilityFunction::execAddBlowOpponentWhoCamebackFromRope },
			{ "AddCompletedTheTaunt", &UELChallengeUtilityFunction::execAddCompletedTheTaunt },
			{ "AddCrearedCareerMode", &UELChallengeUtilityFunction::execAddCrearedCareerMode },
			{ "AddCreatedCustomArea", &UELChallengeUtilityFunction::execAddCreatedCustomArea },
			{ "AddCreatedCustomWrestler", &UELChallengeUtilityFunction::execAddCreatedCustomWrestler },
			{ "AddDamageRankMatch", &UELChallengeUtilityFunction::execAddDamageRankMatch },
			{ "AddDefeatedCpuWithCountout", &UELChallengeUtilityFunction::execAddDefeatedCpuWithCountout },
			{ "AddDefeatedCpuWithPinfall", &UELChallengeUtilityFunction::execAddDefeatedCpuWithPinfall },
			{ "AddDefeatedCpuWithSubmission", &UELChallengeUtilityFunction::execAddDefeatedCpuWithSubmission },
			{ "AddDistanceRankMatch", &UELChallengeUtilityFunction::execAddDistanceRankMatch },
			{ "AddEditedBadgeItem", &UELChallengeUtilityFunction::execAddEditedBadgeItem },
			{ "AddEditedTeam", &UELChallengeUtilityFunction::execAddEditedTeam },
			{ "AddExhibitionMatchCount", &UELChallengeUtilityFunction::execAddExhibitionMatchCount },
			{ "AddExhibitionMatchCountWithCpu", &UELChallengeUtilityFunction::execAddExhibitionMatchCountWithCpu },
			{ "AddForcedMovedToTitleBelt", &UELChallengeUtilityFunction::execAddForcedMovedToTitleBelt },
			{ "AddFrendTagWin", &UELChallengeUtilityFunction::execAddFrendTagWin },
			{ "AddGrabToTheOpponentWhoWentDown", &UELChallengeUtilityFunction::execAddGrabToTheOpponentWhoWentDown },
			{ "AddHitBehindStrongGrab", &UELChallengeUtilityFunction::execAddHitBehindStrongGrab },
			{ "AddHitBehindWeakGrab", &UELChallengeUtilityFunction::execAddHitBehindWeakGrab },
			{ "AddHitDashBlow", &UELChallengeUtilityFunction::execAddHitDashBlow },
			{ "AddHitDivingBlow", &UELChallengeUtilityFunction::execAddHitDivingBlow },
			{ "AddHitFrontStrongGrab", &UELChallengeUtilityFunction::execAddHitFrontStrongGrab },
			{ "AddHitFrontWeakGrab", &UELChallengeUtilityFunction::execAddHitFrontWeakGrab },
			{ "AddHitStrongBlow", &UELChallengeUtilityFunction::execAddHitStrongBlow },
			{ "AddHitWeakBlow", &UELChallengeUtilityFunction::execAddHitWeakBlow },
			{ "AddHitWeaponAttack", &UELChallengeUtilityFunction::execAddHitWeaponAttack },
			{ "AddMatchResultRankRankMatch", &UELChallengeUtilityFunction::execAddMatchResultRankRankMatch },
			{ "AddMatchResultScore", &UELChallengeUtilityFunction::execAddMatchResultScore },
			{ "AddModifiedCustomWrestlerSkill", &UELChallengeUtilityFunction::execAddModifiedCustomWrestlerSkill },
			{ "AddModifiedEntrance", &UELChallengeUtilityFunction::execAddModifiedEntrance },
			{ "AddModifiedWrester", &UELChallengeUtilityFunction::execAddModifiedWrester },
			{ "AddPlayedCareerMode", &UELChallengeUtilityFunction::execAddPlayedCareerMode },
			{ "AddPlayedCrate", &UELChallengeUtilityFunction::execAddPlayedCrate },
			{ "AddPlayedMiniGame", &UELChallengeUtilityFunction::execAddPlayedMiniGame },
			{ "AddPlayedOnlineCasualMatch", &UELChallengeUtilityFunction::execAddPlayedOnlineCasualMatch },
			{ "AddPlayedOnlineRankMatch", &UELChallengeUtilityFunction::execAddPlayedOnlineRankMatch },
			{ "AddPlayStadiumStampedeModeCount", &UELChallengeUtilityFunction::execAddPlayStadiumStampedeModeCount },
			{ "AddPossessedBadgeItem", &UELChallengeUtilityFunction::execAddPossessedBadgeItem },
			{ "AddPurchasedItem", &UELChallengeUtilityFunction::execAddPurchasedItem },
			{ "AddSSFarWeaponAttackDamageCount", &UELChallengeUtilityFunction::execAddSSFarWeaponAttackDamageCount },
			{ "AddSSFinisherSuccessCount", &UELChallengeUtilityFunction::execAddSSFinisherSuccessCount },
			{ "AddSSJumpAttackHitCount", &UELChallengeUtilityFunction::execAddSSJumpAttackHitCount },
			{ "AddSSNearWeaponAttackDamageCount", &UELChallengeUtilityFunction::execAddSSNearWeaponAttackDamageCount },
			{ "AddSSStrongStrikeTechniqueHitCount", &UELChallengeUtilityFunction::execAddSSStrongStrikeTechniqueHitCount },
			{ "AddSSThrowingWeaponAttackDamageCount", &UELChallengeUtilityFunction::execAddSSThrowingWeaponAttackDamageCount },
			{ "AddSSTotalAbilityUseCount", &UELChallengeUtilityFunction::execAddSSTotalAbilityUseCount },
			{ "AddSSTotalRevivalCount", &UELChallengeUtilityFunction::execAddSSTotalRevivalCount },
			{ "AddSSTotalSlotMachinePlayCount", &UELChallengeUtilityFunction::execAddSSTotalSlotMachinePlayCount },
			{ "AddSSTotalVendingMachineBuyCount", &UELChallengeUtilityFunction::execAddSSTotalVendingMachineBuyCount },
			{ "AddSSTotalWrestlerKillCount", &UELChallengeUtilityFunction::execAddSSTotalWrestlerKillCount },
			{ "AddSSVictoryRoyalWrestlerTypeToBalance", &UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToBalance },
			{ "AddSSVictoryRoyalWrestlerTypeToHighFly", &UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToHighFly },
			{ "AddSSVictoryRoyalWrestlerTypeToPower", &UELChallengeUtilityFunction::execAddSSVictoryRoyalWrestlerTypeToPower },
			{ "AddSSWeakStrikeTechniqueHitCount", &UELChallengeUtilityFunction::execAddSSWeakStrikeTechniqueHitCount },
			{ "AddStadiumStampedeModeVictoryRoyalCount", &UELChallengeUtilityFunction::execAddStadiumStampedeModeVictoryRoyalCount },
			{ "AddThrewOpponentWhoCamebackFromRope", &UELChallengeUtilityFunction::execAddThrewOpponentWhoCamebackFromRope },
			{ "AddUnlockedWrestler", &UELChallengeUtilityFunction::execAddUnlockedWrestler },
			{ "AddWatchingGamesCount", &UELChallengeUtilityFunction::execAddWatchingGamesCount },
			{ "AddWinTheChampionTitle", &UELChallengeUtilityFunction::execAddWinTheChampionTitle },
			{ "CreatePlayerData", &UELChallengeUtilityFunction::execCreatePlayerData },
			{ "DisposeSaveData", &UELChallengeUtilityFunction::execDisposeSaveData },
			{ "UpdateMatchResultRank", &UELChallengeUtilityFunction::execUpdateMatchResultRank },
			{ "UpdateMiniGameHighScore", &UELChallengeUtilityFunction::execUpdateMiniGameHighScore },
			{ "UpdateOnlineRank", &UELChallengeUtilityFunction::execUpdateOnlineRank },
			{ "UpdateOnlineRanking", &UELChallengeUtilityFunction::execUpdateOnlineRanking },
			{ "UpdateSSAbilityUseCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSAbilityUseCountInOneMatch },
			{ "UpdateSSEpicWeaponHitInOneMatch", &UELChallengeUtilityFunction::execUpdateSSEpicWeaponHitInOneMatch },
			{ "UpdateSSExpItemInOneMatch", &UELChallengeUtilityFunction::execUpdateSSExpItemInOneMatch },
			{ "UpdateSSFeverCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSFeverCountInOneMatch },
			{ "UpdateSSFinisherSuccessCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSFinisherSuccessCountInOneMatch },
			{ "UpdateSSHighestReachPlayerRank", &UELChallengeUtilityFunction::execUpdateSSHighestReachPlayerRank },
			{ "UpdateSSSituationMoveCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSSituationMoveCountInOneMatch },
			{ "UpdateSSSlotMachinePlayCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSSlotMachinePlayCountInOneMatch },
			{ "UpdateSSTreasureBoxInOneMatch", &UELChallengeUtilityFunction::execUpdateSSTreasureBoxInOneMatch },
			{ "UpdateSSVendingMachineBuyCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSVendingMachineBuyCountInOneMatch },
			{ "UpdateSSWrestlerKillCountInOneMatch", &UELChallengeUtilityFunction::execUpdateSSWrestlerKillCountInOneMatch },
			{ "UpdateTwoPlatoonCntRankMatch", &UELChallengeUtilityFunction::execUpdateTwoPlatoonCntRankMatch },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddBecameFinisher", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddBlowOpponentWhoCamebackFromRope", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddCompletedTheTaunt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics
	{
		struct ELChallengeUtilityFunction_eventAddCrearedCareerMode_Parms
		{
			bool _isSameWrestler;
		};
		static void NewProp__isSameWrestler_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isSameWrestler;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::NewProp__isSameWrestler_SetBit(void* Obj)
	{
		((ELChallengeUtilityFunction_eventAddCrearedCareerMode_Parms*)Obj)->_isSameWrestler = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::NewProp__isSameWrestler = { "_isSameWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeUtilityFunction_eventAddCrearedCareerMode_Parms), &Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::NewProp__isSameWrestler_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::NewProp__isSameWrestler,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddCrearedCareerMode", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddCrearedCareerMode_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddCreatedCustomArea", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddCreatedCustomWrestler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventAddDamageRankMatch_Parms
		{
			int32 _damage;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__damage;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::NewProp__damage = { "_damage", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddDamageRankMatch_Parms, _damage), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::NewProp__damage,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddDamageRankMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddDamageRankMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddDefeatedCpuWithCountout", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddDefeatedCpuWithPinfall", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddDefeatedCpuWithSubmission", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventAddDistanceRankMatch_Parms
		{
			int32 _distance;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__distance;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::NewProp__distance = { "_distance", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddDistanceRankMatch_Parms, _distance), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::NewProp__distance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddDistanceRankMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddDistanceRankMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics
	{
		struct ELChallengeUtilityFunction_eventAddEditedBadgeItem_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddEditedBadgeItem_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddEditedBadgeItem", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddEditedBadgeItem_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddEditedTeam", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms
		{
			EChallengeMatchRuleType _ruleType;
			EWrestlerID_N _usedWrestler;
			bool _isOnlineMode;
			bool _isWinner;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ruleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ruleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__usedWrestler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__usedWrestler;
		static void NewProp__isOnlineMode_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isOnlineMode;
		static void NewProp__isWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWinner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__ruleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__ruleType = { "_ruleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms, _ruleType), Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__usedWrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__usedWrestler = { "_usedWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms, _usedWrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isOnlineMode_SetBit(void* Obj)
	{
		((ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms*)Obj)->_isOnlineMode = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isOnlineMode = { "_isOnlineMode", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms), &Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isOnlineMode_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isWinner_SetBit(void* Obj)
	{
		((ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms*)Obj)->_isWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isWinner = { "_isWinner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms), &Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isWinner_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__ruleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__ruleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__usedWrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__usedWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isOnlineMode,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::NewProp__isWinner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddExhibitionMatchCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddExhibitionMatchCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics
	{
		struct ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms
		{
			EChallengeMatchRuleType _ruleType;
			EWrestlerID_N _usedWrestler;
			EChallengeCpuDifficultyType _Difficulty;
			bool _isWinner;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__ruleType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__ruleType;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__usedWrestler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__usedWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__Difficulty_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__Difficulty;
		static void NewProp__isWinner_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp__isWinner;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__ruleType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__ruleType = { "_ruleType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms, _ruleType), Z_Construct_UEnum_ABP_200508_EChallengeMatchRuleType, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__usedWrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__usedWrestler = { "_usedWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms, _usedWrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__Difficulty_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__Difficulty = { "_Difficulty", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms, _Difficulty), Z_Construct_UEnum_ABP_200508_EChallengeCpuDifficultyType, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__isWinner_SetBit(void* Obj)
	{
		((ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms*)Obj)->_isWinner = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__isWinner = { "_isWinner", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms), &Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__isWinner_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__ruleType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__ruleType,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__usedWrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__usedWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__Difficulty_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__Difficulty,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::NewProp__isWinner,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddExhibitionMatchCountWithCpu", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddExhibitionMatchCountWithCpu_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddForcedMovedToTitleBelt", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddFrendTagWin", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddGrabToTheOpponentWhoWentDown", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitBehindStrongGrab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitBehindWeakGrab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitDashBlow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitDivingBlow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitFrontStrongGrab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitFrontWeakGrab", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitStrongBlow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitWeakBlow", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddHitWeaponAttack", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventAddMatchResultRankRankMatch_Parms
		{
			int32 _rankValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rankValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::NewProp__rankValue = { "_rankValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddMatchResultRankRankMatch_Parms, _rankValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::NewProp__rankValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddMatchResultRankRankMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddMatchResultRankRankMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics
	{
		struct ELChallengeUtilityFunction_eventAddMatchResultScore_Parms
		{
			int32 _Score;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddMatchResultScore_Parms, _Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::NewProp__Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddMatchResultScore", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddMatchResultScore_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddModifiedCustomWrestlerSkill", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddModifiedEntrance", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddModifiedWrester", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayedCareerMode", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPlayedCrate_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPlayedCrate_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayedCrate", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPlayedCrate_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayedMiniGame", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPlayedOnlineCasualMatch_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPlayedOnlineCasualMatch_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayedOnlineCasualMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPlayedOnlineCasualMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPlayedOnlineRankMatch_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPlayedOnlineRankMatch_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayedOnlineRankMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPlayedOnlineRankMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPlayStadiumStampedeModeCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPlayStadiumStampedeModeCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPlayStadiumStampedeModeCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPlayStadiumStampedeModeCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPossessedBadgeItem_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPossessedBadgeItem_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPossessedBadgeItem", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPossessedBadgeItem_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics
	{
		struct ELChallengeUtilityFunction_eventAddPurchasedItem_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddPurchasedItem_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddPurchasedItem", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddPurchasedItem_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSFarWeaponAttackDamageCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSFarWeaponAttackDamageCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSFarWeaponAttackDamageCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSFarWeaponAttackDamageCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSFinisherSuccessCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSFinisherSuccessCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSFinisherSuccessCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSFinisherSuccessCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSJumpAttackHitCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSJumpAttackHitCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSJumpAttackHitCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSJumpAttackHitCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSNearWeaponAttackDamageCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSNearWeaponAttackDamageCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSNearWeaponAttackDamageCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSNearWeaponAttackDamageCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSStrongStrikeTechniqueHitCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSStrongStrikeTechniqueHitCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSStrongStrikeTechniqueHitCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSStrongStrikeTechniqueHitCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSThrowingWeaponAttackDamageCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSThrowingWeaponAttackDamageCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSThrowingWeaponAttackDamageCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSThrowingWeaponAttackDamageCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSTotalAbilityUseCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSTotalAbilityUseCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSTotalAbilityUseCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSTotalAbilityUseCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSTotalRevivalCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSTotalRevivalCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSTotalRevivalCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSTotalRevivalCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSTotalSlotMachinePlayCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSTotalSlotMachinePlayCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSTotalSlotMachinePlayCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSTotalSlotMachinePlayCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSTotalVendingMachineBuyCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSTotalVendingMachineBuyCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSTotalVendingMachineBuyCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSTotalVendingMachineBuyCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSTotalWrestlerKillCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSTotalWrestlerKillCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSTotalWrestlerKillCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSTotalWrestlerKillCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToBalance_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToBalance_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSVictoryRoyalWrestlerTypeToBalance", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToBalance_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToHighFly_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToHighFly_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSVictoryRoyalWrestlerTypeToHighFly", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToHighFly_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToPower_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToPower_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSVictoryRoyalWrestlerTypeToPower", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSVictoryRoyalWrestlerTypeToPower_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddSSWeakStrikeTechniqueHitCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddSSWeakStrikeTechniqueHitCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddSSWeakStrikeTechniqueHitCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddSSWeakStrikeTechniqueHitCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics
	{
		struct ELChallengeUtilityFunction_eventAddStadiumStampedeModeVictoryRoyalCount_Parms
		{
			int32 Add;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Add;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::NewProp_Add = { "Add", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddStadiumStampedeModeVictoryRoyalCount_Parms, Add), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::NewProp_Add,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddStadiumStampedeModeVictoryRoyalCount", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddStadiumStampedeModeVictoryRoyalCount_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddThrewOpponentWhoCamebackFromRope", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics
	{
		struct ELChallengeUtilityFunction_eventAddUnlockedWrestler_Parms
		{
			int32 _Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::NewProp__Count = { "_Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddUnlockedWrestler_Parms, _Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::NewProp__Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddUnlockedWrestler", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddUnlockedWrestler_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddWatchingGamesCount", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics
	{
		struct ELChallengeUtilityFunction_eventAddWinTheChampionTitle_Parms
		{
			EWrestlerID_N _usedWrestler;
			EELBelt _beltType;
		};
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__usedWrestler_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__usedWrestler;
		static const UE4CodeGen_Private::FBytePropertyParams NewProp__beltType_Underlying;
		static const UE4CodeGen_Private::FEnumPropertyParams NewProp__beltType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__usedWrestler_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__usedWrestler = { "_usedWrestler", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddWinTheChampionTitle_Parms, _usedWrestler), Z_Construct_UEnum_ELITE_Game_EWrestlerID_N, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__beltType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__beltType = { "_beltType", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventAddWinTheChampionTitle_Parms, _beltType), Z_Construct_UEnum_ELITE_Game_EELBelt, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__usedWrestler_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__usedWrestler,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__beltType_Underlying,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::NewProp__beltType,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "AddWinTheChampionTitle", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventAddWinTheChampionTitle_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "CreatePlayerData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "DisposeSaveData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateMatchResultRank_Parms
		{
			float _rankValue;
		};
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp__rankValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::NewProp__rankValue = { "_rankValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateMatchResultRank_Parms, _rankValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::NewProp__rankValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateMatchResultRank", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateMatchResultRank_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateMiniGameHighScore_Parms
		{
			int32 _minigameIndex;
			int32 _Score;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__minigameIndex;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__Score;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::NewProp__minigameIndex = { "_minigameIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateMiniGameHighScore_Parms, _minigameIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::NewProp__Score = { "_Score", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateMiniGameHighScore_Parms, _Score), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::NewProp__minigameIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::NewProp__Score,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateMiniGameHighScore", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateMiniGameHighScore_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateOnlineRank_Parms
		{
			int32 _rankValue;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rankValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::NewProp__rankValue = { "_rankValue", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateOnlineRank_Parms, _rankValue), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::NewProp__rankValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateOnlineRank", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateOnlineRank_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateOnlineRanking_Parms
		{
			int32 _rankingVale;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__rankingVale;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::NewProp__rankingVale = { "_rankingVale", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateOnlineRanking_Parms, _rankingVale), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::NewProp__rankingVale,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateOnlineRanking", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateOnlineRanking_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSAbilityUseCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSAbilityUseCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSAbilityUseCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSAbilityUseCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSEpicWeaponHitInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSEpicWeaponHitInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSEpicWeaponHitInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSEpicWeaponHitInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSExpItemInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSExpItemInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSExpItemInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSExpItemInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSFeverCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSFeverCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSFeverCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSFeverCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSFinisherSuccessCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSFinisherSuccessCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSFinisherSuccessCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSFinisherSuccessCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSHighestReachPlayerRank_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSHighestReachPlayerRank_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSHighestReachPlayerRank", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSHighestReachPlayerRank_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSSituationMoveCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSSituationMoveCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSSituationMoveCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSSituationMoveCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSSlotMachinePlayCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSSlotMachinePlayCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSSlotMachinePlayCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSSlotMachinePlayCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSTreasureBoxInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSTreasureBoxInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSTreasureBoxInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSTreasureBoxInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSVendingMachineBuyCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSVendingMachineBuyCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSVendingMachineBuyCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSVendingMachineBuyCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateSSWrestlerKillCountInOneMatch_Parms
		{
			int32 Count;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Count;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::NewProp_Count = { "Count", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateSSWrestlerKillCountInOneMatch_Parms, Count), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::NewProp_Count,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateSSWrestlerKillCountInOneMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateSSWrestlerKillCountInOneMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics
	{
		struct ELChallengeUtilityFunction_eventUpdateTwoPlatoonCntRankMatch_Parms
		{
			int32 _cnt;
		};
		static const UE4CodeGen_Private::FIntPropertyParams NewProp__cnt;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::NewProp__cnt = { "_cnt", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ELChallengeUtilityFunction_eventUpdateTwoPlatoonCntRankMatch_Parms, _cnt), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::NewProp__cnt,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UELChallengeUtilityFunction, nullptr, "UpdateTwoPlatoonCntRankMatch", nullptr, nullptr, sizeof(ELChallengeUtilityFunction_eventUpdateTwoPlatoonCntRankMatch_Parms), Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UELChallengeUtilityFunction_NoRegister()
	{
		return UELChallengeUtilityFunction::StaticClass();
	}
	struct Z_Construct_UClass_UELChallengeUtilityFunction_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UELChallengeUtilityFunction_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_ABP_200508,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UELChallengeUtilityFunction_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddBecameFinisher, "AddBecameFinisher" }, // 2416849585
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddBlowOpponentWhoCamebackFromRope, "AddBlowOpponentWhoCamebackFromRope" }, // 2628426027
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddCompletedTheTaunt, "AddCompletedTheTaunt" }, // 3166624266
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddCrearedCareerMode, "AddCrearedCareerMode" }, // 1311200596
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomArea, "AddCreatedCustomArea" }, // 1482944280
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddCreatedCustomWrestler, "AddCreatedCustomWrestler" }, // 1547272183
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddDamageRankMatch, "AddDamageRankMatch" }, // 4022433039
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithCountout, "AddDefeatedCpuWithCountout" }, // 1755766168
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithPinfall, "AddDefeatedCpuWithPinfall" }, // 492918378
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddDefeatedCpuWithSubmission, "AddDefeatedCpuWithSubmission" }, // 1116811561
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddDistanceRankMatch, "AddDistanceRankMatch" }, // 1209718032
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedBadgeItem, "AddEditedBadgeItem" }, // 567441634
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddEditedTeam, "AddEditedTeam" }, // 2111546771
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCount, "AddExhibitionMatchCount" }, // 1699674129
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddExhibitionMatchCountWithCpu, "AddExhibitionMatchCountWithCpu" }, // 469613996
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddForcedMovedToTitleBelt, "AddForcedMovedToTitleBelt" }, // 3203476136
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddFrendTagWin, "AddFrendTagWin" }, // 826129308
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddGrabToTheOpponentWhoWentDown, "AddGrabToTheOpponentWhoWentDown" }, // 2999983455
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindStrongGrab, "AddHitBehindStrongGrab" }, // 4148726497
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitBehindWeakGrab, "AddHitBehindWeakGrab" }, // 3727895533
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDashBlow, "AddHitDashBlow" }, // 3554668803
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitDivingBlow, "AddHitDivingBlow" }, // 2852612951
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontStrongGrab, "AddHitFrontStrongGrab" }, // 2415976462
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitFrontWeakGrab, "AddHitFrontWeakGrab" }, // 245654599
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitStrongBlow, "AddHitStrongBlow" }, // 1186019097
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeakBlow, "AddHitWeakBlow" }, // 3041885719
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddHitWeaponAttack, "AddHitWeaponAttack" }, // 3857728889
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultRankRankMatch, "AddMatchResultRankRankMatch" }, // 281322532
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddMatchResultScore, "AddMatchResultScore" }, // 1811752113
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedCustomWrestlerSkill, "AddModifiedCustomWrestlerSkill" }, // 146752855
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedEntrance, "AddModifiedEntrance" }, // 2266040973
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddModifiedWrester, "AddModifiedWrester" }, // 1553153878
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCareerMode, "AddPlayedCareerMode" }, // 2274331141
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedCrate, "AddPlayedCrate" }, // 2112342148
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedMiniGame, "AddPlayedMiniGame" }, // 49872929
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineCasualMatch, "AddPlayedOnlineCasualMatch" }, // 3256550129
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayedOnlineRankMatch, "AddPlayedOnlineRankMatch" }, // 2063970851
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPlayStadiumStampedeModeCount, "AddPlayStadiumStampedeModeCount" }, // 3948687326
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPossessedBadgeItem, "AddPossessedBadgeItem" }, // 4009054260
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddPurchasedItem, "AddPurchasedItem" }, // 4152109149
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFarWeaponAttackDamageCount, "AddSSFarWeaponAttackDamageCount" }, // 1176337581
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSFinisherSuccessCount, "AddSSFinisherSuccessCount" }, // 1489164813
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSJumpAttackHitCount, "AddSSJumpAttackHitCount" }, // 2672845730
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSNearWeaponAttackDamageCount, "AddSSNearWeaponAttackDamageCount" }, // 2349552633
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSStrongStrikeTechniqueHitCount, "AddSSStrongStrikeTechniqueHitCount" }, // 2360157349
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSThrowingWeaponAttackDamageCount, "AddSSThrowingWeaponAttackDamageCount" }, // 4080840426
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalAbilityUseCount, "AddSSTotalAbilityUseCount" }, // 3344956755
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalRevivalCount, "AddSSTotalRevivalCount" }, // 3795806938
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalSlotMachinePlayCount, "AddSSTotalSlotMachinePlayCount" }, // 1387003346
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalVendingMachineBuyCount, "AddSSTotalVendingMachineBuyCount" }, // 2443841811
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSTotalWrestlerKillCount, "AddSSTotalWrestlerKillCount" }, // 1365161490
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToBalance, "AddSSVictoryRoyalWrestlerTypeToBalance" }, // 3767977083
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToHighFly, "AddSSVictoryRoyalWrestlerTypeToHighFly" }, // 3850823042
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSVictoryRoyalWrestlerTypeToPower, "AddSSVictoryRoyalWrestlerTypeToPower" }, // 2898261946
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddSSWeakStrikeTechniqueHitCount, "AddSSWeakStrikeTechniqueHitCount" }, // 3598533103
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddStadiumStampedeModeVictoryRoyalCount, "AddStadiumStampedeModeVictoryRoyalCount" }, // 4660875
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddThrewOpponentWhoCamebackFromRope, "AddThrewOpponentWhoCamebackFromRope" }, // 464549372
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddUnlockedWrestler, "AddUnlockedWrestler" }, // 1985133775
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddWatchingGamesCount, "AddWatchingGamesCount" }, // 3858557389
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_AddWinTheChampionTitle, "AddWinTheChampionTitle" }, // 1187142670
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_CreatePlayerData, "CreatePlayerData" }, // 768464081
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_DisposeSaveData, "DisposeSaveData" }, // 1802438960
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMatchResultRank, "UpdateMatchResultRank" }, // 556613452
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateMiniGameHighScore, "UpdateMiniGameHighScore" }, // 51807743
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRank, "UpdateOnlineRank" }, // 578915905
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateOnlineRanking, "UpdateOnlineRanking" }, // 3196759956
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSAbilityUseCountInOneMatch, "UpdateSSAbilityUseCountInOneMatch" }, // 3652345278
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSEpicWeaponHitInOneMatch, "UpdateSSEpicWeaponHitInOneMatch" }, // 3146887464
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSExpItemInOneMatch, "UpdateSSExpItemInOneMatch" }, // 628271733
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFeverCountInOneMatch, "UpdateSSFeverCountInOneMatch" }, // 1011554754
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSFinisherSuccessCountInOneMatch, "UpdateSSFinisherSuccessCountInOneMatch" }, // 556960494
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSHighestReachPlayerRank, "UpdateSSHighestReachPlayerRank" }, // 70926518
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSituationMoveCountInOneMatch, "UpdateSSSituationMoveCountInOneMatch" }, // 1711048961
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSSlotMachinePlayCountInOneMatch, "UpdateSSSlotMachinePlayCountInOneMatch" }, // 132507219
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSTreasureBoxInOneMatch, "UpdateSSTreasureBoxInOneMatch" }, // 4098198890
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSVendingMachineBuyCountInOneMatch, "UpdateSSVendingMachineBuyCountInOneMatch" }, // 2152621140
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateSSWrestlerKillCountInOneMatch, "UpdateSSWrestlerKillCountInOneMatch" }, // 2923735041
		{ &Z_Construct_UFunction_UELChallengeUtilityFunction_UpdateTwoPlatoonCntRankMatch, "UpdateTwoPlatoonCntRankMatch" }, // 158439633
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UELChallengeUtilityFunction_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "ELChallengeUtilityFunction.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/ELChallengeUtilityFunction.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UELChallengeUtilityFunction_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UELChallengeUtilityFunction>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UELChallengeUtilityFunction_Statics::ClassParams = {
		&UELChallengeUtilityFunction::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UELChallengeUtilityFunction_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UELChallengeUtilityFunction_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UELChallengeUtilityFunction()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UELChallengeUtilityFunction_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UELChallengeUtilityFunction, 2227726082);
	template<> ABP_200508_API UClass* StaticClass<UELChallengeUtilityFunction>()
	{
		return UELChallengeUtilityFunction::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UELChallengeUtilityFunction(Z_Construct_UClass_UELChallengeUtilityFunction, &UELChallengeUtilityFunction::StaticClass, TEXT("/Script/ABP_200508"), TEXT("UELChallengeUtilityFunction"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UELChallengeUtilityFunction);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
