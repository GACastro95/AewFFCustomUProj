#pragma once
#include "CoreMinimal.h"
#include "EELSpecialStat.generated.h"

UENUM(BlueprintType)
enum class EELSpecialStat : uint8 {
    BattlePass_Total_Point,
    DefeatCom,
    Arena_Used,
    CasinoBattleRoyale_LastWinner,
    Weapon_Used,
    Title_Defend,
};

