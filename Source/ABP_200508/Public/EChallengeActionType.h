#pragma once
#include "CoreMinimal.h"
#include "EChallengeActionType.generated.h"

UENUM(BlueprintType)
enum class EChallengeActionType : uint8 {
    PlayMatch,
    HitSkill,
    WinTheTitle,
    CreatedCustomWrestler,
    CreatedCustomArena,
    PlayedMiniGame,
    TargetMatchScore,
    TotalMatchScore,
    TargetOnlineRank,
    TargetOnlineRanking,
    RankHigherInOneMatchResult,
    TotalWatchingGame,
    FirstTimeCreatedCustomWrestler,
    FirstTimeModifiedWrester,
    FirstTimeCreatedCustomArea,
    FirstTimeModifiedEntrance,
    FirstTimeModifiedCustomWreslterSkill,
    FirstTimePlayedCasualMatch,
    FirstTimePlayedRankMatch,
    FirstTimePlayerdCarrerMode,
    FirstTimeUnlockedWrestler,
    FirstTimePurchasedItem,
    FirstTimeEditTeam,
    FirstTimeForcedMovedToTitleBelt,
    FirstTimeWearedBadgeItem,
    FirstTimePlayedMiniGame,
    FirstTimeUpdateScoreAtAnyMiniGame,
    FirstTimeBecameN_NumberInOnlineRanking,
    FirstTimeBecameN_OnlineRank,
    FirstTimeWatchingGame,
    ClearedCareerMode,
    ClearedCareerModeWithAnyPeopleInTotal,
    ClearedCareerModeWithSamePerson,
    UnlockedWrestler,
    PossessedTotalBadge,
    PurchasedCrateItem,
    OnlineMatchWinRecordEachSeason,
    SSPlayStadiumStampedeModeTotal,
    SSPlayMatchVictoryRoyalTotal,
    SSTotalSSWeakStrikeTechniqueHitCount,
    SSTotalSSStrongStrikeTechniqueHitCount,
    SSTotalSSJumpAttackHitCount,
    SSTotalSSNearWeaponAttackDamageCount,
    SSTotalSSFarWeaponAttackDamageCount,
    SSTotalSSThrowingWeaponAttackDamageCount,
    SSTotalSSFinisherSuccessCount,
    SSTotalSSVictoryRoyalWrestlerTypeToBalance,
    SSTotalSSVictoryRoyalWrestlerTypeToHighFly,
    SSTotalSSVictoryRoyalWrestlerTypeToPower,
    RankMatchTagTeamFriends,
    RankMatchMoveDistance,
    RankMatchOpponentDamage,
    RankMatchRankResult5,
    RankMatchRankResult6,
    RankMatchRankResult7,
    RankMatchTwoPlatoon,
    SSTotalWrestlerKillCount,
    SSTotalSlotMachinePlayCount,
    SSTotalVendingMachineBuyCount,
    SSTotalRevivalCount,
    SSTotalAbilityUseCount,
    SSSituationMoveCountInOneMatch,
    SSFinisherSuccessCountInOneMatch,
    SSWrestlerKillCountInOneMatch,
    SSSlotMachinePlayCountInOneMatch,
    SSVendingMachineBuyCountInOneMatch,
    SSAbilityUseCountInOneMatch,
    SSFeverCountInOneMatch,
    SSEpicWeaponHitInOneMatch,
    SSTreasureBoxInOneMatch,
    SSExpItemInOneMatch,
    SSHighestReachPlayerRank,
    TournamentEliteNoRetryClear,
};

