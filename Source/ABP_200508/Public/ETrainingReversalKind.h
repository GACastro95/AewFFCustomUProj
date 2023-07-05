#pragma once
#include "CoreMinimal.h"
#include "ETrainingReversalKind.generated.h"

UENUM(BlueprintType)
enum class ETrainingReversalKind : uint8 {
    HitStrike,
    HitGrapple,
    ReversalStrike,
    ReversalGrapple,
    GuardStrike,
    GuardGrapple,
    FailedRandomChoice,
};

