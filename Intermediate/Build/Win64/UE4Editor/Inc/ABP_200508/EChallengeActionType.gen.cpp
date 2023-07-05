// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "ABP_200508/Public/EChallengeActionType.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEChallengeActionType() {}
// Cross Module References
	ABP_200508_API UEnum* Z_Construct_UEnum_ABP_200508_EChallengeActionType();
	UPackage* Z_Construct_UPackage__Script_ABP_200508();
// End Cross Module References
	static UEnum* EChallengeActionType_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_ABP_200508_EChallengeActionType, Z_Construct_UPackage__Script_ABP_200508(), TEXT("EChallengeActionType"));
		}
		return Singleton;
	}
	template<> ABP_200508_API UEnum* StaticEnum<EChallengeActionType>()
	{
		return EChallengeActionType_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_EChallengeActionType(EChallengeActionType_StaticEnum, TEXT("/Script/ABP_200508"), TEXT("EChallengeActionType"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_ABP_200508_EChallengeActionType_Hash() { return 4259541366U; }
	UEnum* Z_Construct_UEnum_ABP_200508_EChallengeActionType()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_ABP_200508();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("EChallengeActionType"), 0, Get_Z_Construct_UEnum_ABP_200508_EChallengeActionType_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "EChallengeActionType::PlayMatch", (int64)EChallengeActionType::PlayMatch },
				{ "EChallengeActionType::HitSkill", (int64)EChallengeActionType::HitSkill },
				{ "EChallengeActionType::WinTheTitle", (int64)EChallengeActionType::WinTheTitle },
				{ "EChallengeActionType::CreatedCustomWrestler", (int64)EChallengeActionType::CreatedCustomWrestler },
				{ "EChallengeActionType::CreatedCustomArena", (int64)EChallengeActionType::CreatedCustomArena },
				{ "EChallengeActionType::PlayedMiniGame", (int64)EChallengeActionType::PlayedMiniGame },
				{ "EChallengeActionType::TargetMatchScore", (int64)EChallengeActionType::TargetMatchScore },
				{ "EChallengeActionType::TotalMatchScore", (int64)EChallengeActionType::TotalMatchScore },
				{ "EChallengeActionType::TargetOnlineRank", (int64)EChallengeActionType::TargetOnlineRank },
				{ "EChallengeActionType::TargetOnlineRanking", (int64)EChallengeActionType::TargetOnlineRanking },
				{ "EChallengeActionType::RankHigherInOneMatchResult", (int64)EChallengeActionType::RankHigherInOneMatchResult },
				{ "EChallengeActionType::TotalWatchingGame", (int64)EChallengeActionType::TotalWatchingGame },
				{ "EChallengeActionType::FirstTimeCreatedCustomWrestler", (int64)EChallengeActionType::FirstTimeCreatedCustomWrestler },
				{ "EChallengeActionType::FirstTimeModifiedWrester", (int64)EChallengeActionType::FirstTimeModifiedWrester },
				{ "EChallengeActionType::FirstTimeCreatedCustomArea", (int64)EChallengeActionType::FirstTimeCreatedCustomArea },
				{ "EChallengeActionType::FirstTimeModifiedEntrance", (int64)EChallengeActionType::FirstTimeModifiedEntrance },
				{ "EChallengeActionType::FirstTimeModifiedCustomWreslterSkill", (int64)EChallengeActionType::FirstTimeModifiedCustomWreslterSkill },
				{ "EChallengeActionType::FirstTimePlayedCasualMatch", (int64)EChallengeActionType::FirstTimePlayedCasualMatch },
				{ "EChallengeActionType::FirstTimePlayedRankMatch", (int64)EChallengeActionType::FirstTimePlayedRankMatch },
				{ "EChallengeActionType::FirstTimePlayerdCarrerMode", (int64)EChallengeActionType::FirstTimePlayerdCarrerMode },
				{ "EChallengeActionType::FirstTimeUnlockedWrestler", (int64)EChallengeActionType::FirstTimeUnlockedWrestler },
				{ "EChallengeActionType::FirstTimePurchasedItem", (int64)EChallengeActionType::FirstTimePurchasedItem },
				{ "EChallengeActionType::FirstTimeEditTeam", (int64)EChallengeActionType::FirstTimeEditTeam },
				{ "EChallengeActionType::FirstTimeForcedMovedToTitleBelt", (int64)EChallengeActionType::FirstTimeForcedMovedToTitleBelt },
				{ "EChallengeActionType::FirstTimeWearedBadgeItem", (int64)EChallengeActionType::FirstTimeWearedBadgeItem },
				{ "EChallengeActionType::FirstTimePlayedMiniGame", (int64)EChallengeActionType::FirstTimePlayedMiniGame },
				{ "EChallengeActionType::FirstTimeUpdateScoreAtAnyMiniGame", (int64)EChallengeActionType::FirstTimeUpdateScoreAtAnyMiniGame },
				{ "EChallengeActionType::FirstTimeBecameN_NumberInOnlineRanking", (int64)EChallengeActionType::FirstTimeBecameN_NumberInOnlineRanking },
				{ "EChallengeActionType::FirstTimeBecameN_OnlineRank", (int64)EChallengeActionType::FirstTimeBecameN_OnlineRank },
				{ "EChallengeActionType::FirstTimeWatchingGame", (int64)EChallengeActionType::FirstTimeWatchingGame },
				{ "EChallengeActionType::ClearedCareerMode", (int64)EChallengeActionType::ClearedCareerMode },
				{ "EChallengeActionType::ClearedCareerModeWithAnyPeopleInTotal", (int64)EChallengeActionType::ClearedCareerModeWithAnyPeopleInTotal },
				{ "EChallengeActionType::ClearedCareerModeWithSamePerson", (int64)EChallengeActionType::ClearedCareerModeWithSamePerson },
				{ "EChallengeActionType::UnlockedWrestler", (int64)EChallengeActionType::UnlockedWrestler },
				{ "EChallengeActionType::PossessedTotalBadge", (int64)EChallengeActionType::PossessedTotalBadge },
				{ "EChallengeActionType::PurchasedCrateItem", (int64)EChallengeActionType::PurchasedCrateItem },
				{ "EChallengeActionType::OnlineMatchWinRecordEachSeason", (int64)EChallengeActionType::OnlineMatchWinRecordEachSeason },
				{ "EChallengeActionType::SSPlayStadiumStampedeModeTotal", (int64)EChallengeActionType::SSPlayStadiumStampedeModeTotal },
				{ "EChallengeActionType::SSPlayMatchVictoryRoyalTotal", (int64)EChallengeActionType::SSPlayMatchVictoryRoyalTotal },
				{ "EChallengeActionType::SSTotalSSWeakStrikeTechniqueHitCount", (int64)EChallengeActionType::SSTotalSSWeakStrikeTechniqueHitCount },
				{ "EChallengeActionType::SSTotalSSStrongStrikeTechniqueHitCount", (int64)EChallengeActionType::SSTotalSSStrongStrikeTechniqueHitCount },
				{ "EChallengeActionType::SSTotalSSJumpAttackHitCount", (int64)EChallengeActionType::SSTotalSSJumpAttackHitCount },
				{ "EChallengeActionType::SSTotalSSNearWeaponAttackDamageCount", (int64)EChallengeActionType::SSTotalSSNearWeaponAttackDamageCount },
				{ "EChallengeActionType::SSTotalSSFarWeaponAttackDamageCount", (int64)EChallengeActionType::SSTotalSSFarWeaponAttackDamageCount },
				{ "EChallengeActionType::SSTotalSSThrowingWeaponAttackDamageCount", (int64)EChallengeActionType::SSTotalSSThrowingWeaponAttackDamageCount },
				{ "EChallengeActionType::SSTotalSSFinisherSuccessCount", (int64)EChallengeActionType::SSTotalSSFinisherSuccessCount },
				{ "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToBalance", (int64)EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToBalance },
				{ "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToHighFly", (int64)EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToHighFly },
				{ "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToPower", (int64)EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToPower },
				{ "EChallengeActionType::RankMatchTagTeamFriends", (int64)EChallengeActionType::RankMatchTagTeamFriends },
				{ "EChallengeActionType::RankMatchMoveDistance", (int64)EChallengeActionType::RankMatchMoveDistance },
				{ "EChallengeActionType::RankMatchOpponentDamage", (int64)EChallengeActionType::RankMatchOpponentDamage },
				{ "EChallengeActionType::RankMatchRankResult5", (int64)EChallengeActionType::RankMatchRankResult5 },
				{ "EChallengeActionType::RankMatchRankResult6", (int64)EChallengeActionType::RankMatchRankResult6 },
				{ "EChallengeActionType::RankMatchRankResult7", (int64)EChallengeActionType::RankMatchRankResult7 },
				{ "EChallengeActionType::RankMatchTwoPlatoon", (int64)EChallengeActionType::RankMatchTwoPlatoon },
				{ "EChallengeActionType::SSTotalWrestlerKillCount", (int64)EChallengeActionType::SSTotalWrestlerKillCount },
				{ "EChallengeActionType::SSTotalSlotMachinePlayCount", (int64)EChallengeActionType::SSTotalSlotMachinePlayCount },
				{ "EChallengeActionType::SSTotalVendingMachineBuyCount", (int64)EChallengeActionType::SSTotalVendingMachineBuyCount },
				{ "EChallengeActionType::SSTotalRevivalCount", (int64)EChallengeActionType::SSTotalRevivalCount },
				{ "EChallengeActionType::SSTotalAbilityUseCount", (int64)EChallengeActionType::SSTotalAbilityUseCount },
				{ "EChallengeActionType::SSSituationMoveCountInOneMatch", (int64)EChallengeActionType::SSSituationMoveCountInOneMatch },
				{ "EChallengeActionType::SSFinisherSuccessCountInOneMatch", (int64)EChallengeActionType::SSFinisherSuccessCountInOneMatch },
				{ "EChallengeActionType::SSWrestlerKillCountInOneMatch", (int64)EChallengeActionType::SSWrestlerKillCountInOneMatch },
				{ "EChallengeActionType::SSSlotMachinePlayCountInOneMatch", (int64)EChallengeActionType::SSSlotMachinePlayCountInOneMatch },
				{ "EChallengeActionType::SSVendingMachineBuyCountInOneMatch", (int64)EChallengeActionType::SSVendingMachineBuyCountInOneMatch },
				{ "EChallengeActionType::SSAbilityUseCountInOneMatch", (int64)EChallengeActionType::SSAbilityUseCountInOneMatch },
				{ "EChallengeActionType::SSFeverCountInOneMatch", (int64)EChallengeActionType::SSFeverCountInOneMatch },
				{ "EChallengeActionType::SSEpicWeaponHitInOneMatch", (int64)EChallengeActionType::SSEpicWeaponHitInOneMatch },
				{ "EChallengeActionType::SSTreasureBoxInOneMatch", (int64)EChallengeActionType::SSTreasureBoxInOneMatch },
				{ "EChallengeActionType::SSExpItemInOneMatch", (int64)EChallengeActionType::SSExpItemInOneMatch },
				{ "EChallengeActionType::SSHighestReachPlayerRank", (int64)EChallengeActionType::SSHighestReachPlayerRank },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "BlueprintType", "true" },
				{ "ClearedCareerMode.Name", "EChallengeActionType::ClearedCareerMode" },
				{ "ClearedCareerModeWithAnyPeopleInTotal.Name", "EChallengeActionType::ClearedCareerModeWithAnyPeopleInTotal" },
				{ "ClearedCareerModeWithSamePerson.Name", "EChallengeActionType::ClearedCareerModeWithSamePerson" },
				{ "CreatedCustomArena.Name", "EChallengeActionType::CreatedCustomArena" },
				{ "CreatedCustomWrestler.Name", "EChallengeActionType::CreatedCustomWrestler" },
				{ "FirstTimeBecameN_NumberInOnlineRanking.Name", "EChallengeActionType::FirstTimeBecameN_NumberInOnlineRanking" },
				{ "FirstTimeBecameN_OnlineRank.Name", "EChallengeActionType::FirstTimeBecameN_OnlineRank" },
				{ "FirstTimeCreatedCustomArea.Name", "EChallengeActionType::FirstTimeCreatedCustomArea" },
				{ "FirstTimeCreatedCustomWrestler.Name", "EChallengeActionType::FirstTimeCreatedCustomWrestler" },
				{ "FirstTimeEditTeam.Name", "EChallengeActionType::FirstTimeEditTeam" },
				{ "FirstTimeForcedMovedToTitleBelt.Name", "EChallengeActionType::FirstTimeForcedMovedToTitleBelt" },
				{ "FirstTimeModifiedCustomWreslterSkill.Name", "EChallengeActionType::FirstTimeModifiedCustomWreslterSkill" },
				{ "FirstTimeModifiedEntrance.Name", "EChallengeActionType::FirstTimeModifiedEntrance" },
				{ "FirstTimeModifiedWrester.Name", "EChallengeActionType::FirstTimeModifiedWrester" },
				{ "FirstTimePlayedCasualMatch.Name", "EChallengeActionType::FirstTimePlayedCasualMatch" },
				{ "FirstTimePlayedMiniGame.Name", "EChallengeActionType::FirstTimePlayedMiniGame" },
				{ "FirstTimePlayedRankMatch.Name", "EChallengeActionType::FirstTimePlayedRankMatch" },
				{ "FirstTimePlayerdCarrerMode.Name", "EChallengeActionType::FirstTimePlayerdCarrerMode" },
				{ "FirstTimePurchasedItem.Name", "EChallengeActionType::FirstTimePurchasedItem" },
				{ "FirstTimeUnlockedWrestler.Name", "EChallengeActionType::FirstTimeUnlockedWrestler" },
				{ "FirstTimeUpdateScoreAtAnyMiniGame.Name", "EChallengeActionType::FirstTimeUpdateScoreAtAnyMiniGame" },
				{ "FirstTimeWatchingGame.Name", "EChallengeActionType::FirstTimeWatchingGame" },
				{ "FirstTimeWearedBadgeItem.Name", "EChallengeActionType::FirstTimeWearedBadgeItem" },
				{ "HitSkill.Name", "EChallengeActionType::HitSkill" },
				{ "ModuleRelativePath", "Public/EChallengeActionType.h" },
				{ "OnlineMatchWinRecordEachSeason.Name", "EChallengeActionType::OnlineMatchWinRecordEachSeason" },
				{ "PlayedMiniGame.Name", "EChallengeActionType::PlayedMiniGame" },
				{ "PlayMatch.Name", "EChallengeActionType::PlayMatch" },
				{ "PossessedTotalBadge.Name", "EChallengeActionType::PossessedTotalBadge" },
				{ "PurchasedCrateItem.Name", "EChallengeActionType::PurchasedCrateItem" },
				{ "RankHigherInOneMatchResult.Name", "EChallengeActionType::RankHigherInOneMatchResult" },
				{ "RankMatchMoveDistance.Name", "EChallengeActionType::RankMatchMoveDistance" },
				{ "RankMatchOpponentDamage.Name", "EChallengeActionType::RankMatchOpponentDamage" },
				{ "RankMatchRankResult5.Name", "EChallengeActionType::RankMatchRankResult5" },
				{ "RankMatchRankResult6.Name", "EChallengeActionType::RankMatchRankResult6" },
				{ "RankMatchRankResult7.Name", "EChallengeActionType::RankMatchRankResult7" },
				{ "RankMatchTagTeamFriends.Name", "EChallengeActionType::RankMatchTagTeamFriends" },
				{ "RankMatchTwoPlatoon.Name", "EChallengeActionType::RankMatchTwoPlatoon" },
				{ "SSAbilityUseCountInOneMatch.Name", "EChallengeActionType::SSAbilityUseCountInOneMatch" },
				{ "SSEpicWeaponHitInOneMatch.Name", "EChallengeActionType::SSEpicWeaponHitInOneMatch" },
				{ "SSExpItemInOneMatch.Name", "EChallengeActionType::SSExpItemInOneMatch" },
				{ "SSFeverCountInOneMatch.Name", "EChallengeActionType::SSFeverCountInOneMatch" },
				{ "SSFinisherSuccessCountInOneMatch.Name", "EChallengeActionType::SSFinisherSuccessCountInOneMatch" },
				{ "SSHighestReachPlayerRank.Name", "EChallengeActionType::SSHighestReachPlayerRank" },
				{ "SSPlayMatchVictoryRoyalTotal.Name", "EChallengeActionType::SSPlayMatchVictoryRoyalTotal" },
				{ "SSPlayStadiumStampedeModeTotal.Name", "EChallengeActionType::SSPlayStadiumStampedeModeTotal" },
				{ "SSSituationMoveCountInOneMatch.Name", "EChallengeActionType::SSSituationMoveCountInOneMatch" },
				{ "SSSlotMachinePlayCountInOneMatch.Name", "EChallengeActionType::SSSlotMachinePlayCountInOneMatch" },
				{ "SSTotalAbilityUseCount.Name", "EChallengeActionType::SSTotalAbilityUseCount" },
				{ "SSTotalRevivalCount.Name", "EChallengeActionType::SSTotalRevivalCount" },
				{ "SSTotalSlotMachinePlayCount.Name", "EChallengeActionType::SSTotalSlotMachinePlayCount" },
				{ "SSTotalSSFarWeaponAttackDamageCount.Name", "EChallengeActionType::SSTotalSSFarWeaponAttackDamageCount" },
				{ "SSTotalSSFinisherSuccessCount.Name", "EChallengeActionType::SSTotalSSFinisherSuccessCount" },
				{ "SSTotalSSJumpAttackHitCount.Name", "EChallengeActionType::SSTotalSSJumpAttackHitCount" },
				{ "SSTotalSSNearWeaponAttackDamageCount.Name", "EChallengeActionType::SSTotalSSNearWeaponAttackDamageCount" },
				{ "SSTotalSSStrongStrikeTechniqueHitCount.Name", "EChallengeActionType::SSTotalSSStrongStrikeTechniqueHitCount" },
				{ "SSTotalSSThrowingWeaponAttackDamageCount.Name", "EChallengeActionType::SSTotalSSThrowingWeaponAttackDamageCount" },
				{ "SSTotalSSVictoryRoyalWrestlerTypeToBalance.Name", "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToBalance" },
				{ "SSTotalSSVictoryRoyalWrestlerTypeToHighFly.Name", "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToHighFly" },
				{ "SSTotalSSVictoryRoyalWrestlerTypeToPower.Name", "EChallengeActionType::SSTotalSSVictoryRoyalWrestlerTypeToPower" },
				{ "SSTotalSSWeakStrikeTechniqueHitCount.Name", "EChallengeActionType::SSTotalSSWeakStrikeTechniqueHitCount" },
				{ "SSTotalVendingMachineBuyCount.Name", "EChallengeActionType::SSTotalVendingMachineBuyCount" },
				{ "SSTotalWrestlerKillCount.Name", "EChallengeActionType::SSTotalWrestlerKillCount" },
				{ "SSTreasureBoxInOneMatch.Name", "EChallengeActionType::SSTreasureBoxInOneMatch" },
				{ "SSVendingMachineBuyCountInOneMatch.Name", "EChallengeActionType::SSVendingMachineBuyCountInOneMatch" },
				{ "SSWrestlerKillCountInOneMatch.Name", "EChallengeActionType::SSWrestlerKillCountInOneMatch" },
				{ "TargetMatchScore.Name", "EChallengeActionType::TargetMatchScore" },
				{ "TargetOnlineRank.Name", "EChallengeActionType::TargetOnlineRank" },
				{ "TargetOnlineRanking.Name", "EChallengeActionType::TargetOnlineRanking" },
				{ "TotalMatchScore.Name", "EChallengeActionType::TotalMatchScore" },
				{ "TotalWatchingGame.Name", "EChallengeActionType::TotalWatchingGame" },
				{ "UnlockedWrestler.Name", "EChallengeActionType::UnlockedWrestler" },
				{ "WinTheTitle.Name", "EChallengeActionType::WinTheTitle" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_ABP_200508,
				nullptr,
				"EChallengeActionType",
				"EChallengeActionType",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::EnumClass,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
