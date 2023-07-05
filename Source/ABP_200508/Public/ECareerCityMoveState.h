#pragma once
#include "CoreMinimal.h"
#include "ECareerCityMoveState.generated.h"

UENUM(BlueprintType)
enum class ECareerCityMoveState : uint8 {
    None,
    MoveDirAdjust,
    WaitStartMove,
    Moving,
    WaitStopArrive,
    Arrive,
    End,
};

