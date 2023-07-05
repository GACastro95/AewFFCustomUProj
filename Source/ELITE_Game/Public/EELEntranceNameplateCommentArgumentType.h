#pragma once
#include "CoreMinimal.h"
#include "EELEntranceNameplateCommentArgumentType.generated.h"

UENUM(BlueprintType)
enum class EELEntranceNameplateCommentArgumentType : uint8 {
    WrestlerID,
    ManagerID,
    BletID,
    TeamID,
    Streak,
    LastEntry,
    EntryCount,
    WithManager,
    TitleHolder,
    TitleDefendDays,
    BattleRoyalWinner,
    CAWHeight,
    CAWWeight,
    TagTeamID,
};

