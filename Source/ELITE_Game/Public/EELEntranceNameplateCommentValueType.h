#pragma once
#include "CoreMinimal.h"
#include "EELEntranceNameplateCommentValueType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceNameplateCommentValueType : uint8 {
    None,
    WrestlerName,
    FinisherName,
    TeamName,
    StreakNumber,
    MatchInterval,
    ManagerName,
    DefendDays,
    DefendNumber,
    MatchScoreAverage,
    MatchScoreMax,
    CreatedWrestlerNumber,
    CreatedArenaNumber,
    CustomPartsNumber,
    CareerClearNumber,
    FavoriteWrestlerName,
    FavoriteArenaName,
    FavoriteMatchType,
    FavoriteWeaponName,
    TableBreakNumber,
    WearWeaponNumber,
    DropOnThumbtacks,
    WasDroppedOnThumbtacks,
    NonExplodedNumber,
    ExplosionAttackNumber,
    ExplosionDamageNumber,
    EliminateNumber,
    WinNumberOfBattleRoyal,
    TotalPlayTime,
    TotalRunningDistance,
    TotalMatchNumber,
};

