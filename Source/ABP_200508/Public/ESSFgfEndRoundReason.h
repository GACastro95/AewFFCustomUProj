#pragma once
#include "CoreMinimal.h"
#include "ESSFgfEndRoundReason.generated.h"

UENUM(BlueprintType)
enum class ESSFgfEndRoundReason : uint8 {
    None,
    Goal,
    Timeup,
    BallStole,
    BallLost,
};

