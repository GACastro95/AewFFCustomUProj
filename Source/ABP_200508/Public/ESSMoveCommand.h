#pragma once
#include "CoreMinimal.h"
#include "ESSMoveCommand.generated.h"

UENUM(BlueprintType)
enum class ESSMoveCommand : uint8 {
    None,
    Punch1,
    Punch2,
    Kick1,
    Kick2,
    Throw1,
    Throw2,
    DashPunch1,
    DashPunch2,
    DashKick1,
    DashKick2,
    DashThrow1,
    DashThrow2,
    AirPunch1,
    AirPunch2,
    AirKick1,
    AirKick2,
    AirThrow1,
    AirThrow2,
    Finisher,
    SituationMove,
    AbilityMove1,
    AbilityMove2,
    AbilityMove3,
    Max,
};

