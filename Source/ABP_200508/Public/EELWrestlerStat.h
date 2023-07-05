#pragma once
#include "CoreMinimal.h"
#include "EELWrestlerStat.generated.h"

UENUM(BlueprintType)
enum class EELWrestlerStat : uint8 {
    Win,
    Lose,
    Draw,
    Match,
    Win_Streak,
    CasinoBattleRoyale_Win,
    CasinoBattleRoyale_Defeat,
};

