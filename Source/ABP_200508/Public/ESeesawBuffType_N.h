#pragma once
#include "CoreMinimal.h"
#include "ESeesawBuffType_N.generated.h"

UENUM(BlueprintType)
enum class ESeesawBuffType_N : uint8 {
    None,
    B_TouchRingInSec,
    B_BattleRoyal,
    B_CriticalAtk,
    B_InjuryAtk,
    P_EndSpecialState,
    P_RevFinisherDamager,
    P_RevSignatureDamager,
    P_EndExciteState,
    P_CriticalDamage,
    P_InjuryDamage,
};

