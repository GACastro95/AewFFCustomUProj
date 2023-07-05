#pragma once
#include "CoreMinimal.h"
#include "EWhipState.generated.h"

UENUM(BlueprintType)
enum class EWhipState : uint8 {
    None,
    Front_Stand,
    Back_Stand,
    Front_HandStand,
    Back_HandStand,
    Back_StandLeftHead,
    Back_StandRightHead,
};

