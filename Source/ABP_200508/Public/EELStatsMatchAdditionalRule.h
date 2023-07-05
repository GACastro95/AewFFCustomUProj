#pragma once
#include "CoreMinimal.h"
#include "EELStatsMatchAdditionalRule.generated.h"

UENUM(BlueprintType)
enum class EELStatsMatchAdditionalRule : uint8 {
    Normal,
    LightsOut,
    FallsCountAnyWhere,
    ExplodingBarbedWire,
    Ladder,
};

