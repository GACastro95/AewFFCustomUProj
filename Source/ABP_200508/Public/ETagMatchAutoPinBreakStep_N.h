#pragma once
#include "CoreMinimal.h"
#include "ETagMatchAutoPinBreakStep_N.generated.h"

UENUM(BlueprintType)
enum class ETagMatchAutoPinBreakStep_N : uint8 {
    None,
    RingIn,
    Run,
    ETagMatchAutoPinBreakStep_MAX UMETA(Hidden),
};

