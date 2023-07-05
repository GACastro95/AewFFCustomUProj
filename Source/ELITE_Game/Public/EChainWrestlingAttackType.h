#pragma once
#include "CoreMinimal.h"
#include "EChainWrestlingAttackType.generated.h"

UENUM(BlueprintType)
enum class EChainWrestlingAttackType : uint8 {
    None,
    Start_Up,
    Start_Down,
    Start_Left,
    Start_Right,
    Failure,
    Reversal,
    Release,
};

