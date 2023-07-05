#pragma once
#include "CoreMinimal.h"
#include "ERA_Slot_ChampionState.generated.h"

UENUM(BlueprintType)
enum class ERA_Slot_ChampionState : uint8 {
    NONE,
    CHAMPION,
    CHALLENGER,
    ERA_Slot_MAX UMETA(Hidden),
};

