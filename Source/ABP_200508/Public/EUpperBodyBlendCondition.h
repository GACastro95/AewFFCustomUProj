#pragma once
#include "CoreMinimal.h"
#include "EUpperBodyBlendCondition.generated.h"

UENUM(BlueprintType)
enum class EUpperBodyBlendCondition : uint8 {
    CoreHP_Over,
    CoreHP_Under,
    HeadHP_Over,
    HeadHP_Under,
    BodyHP_Over,
    BodyHP_Under,
    LegHP_Over,
    LegHP_Under,
    ArmHP_Over,
    ArmHP_Under,
    Momentum_Over,
    Momentum_Under,
    Momentum_Special,
    Arg_Over,
    Arg_Under,
    SpringBoard,
    Fence,
    Topecon,
    DirectionReverse,
};

