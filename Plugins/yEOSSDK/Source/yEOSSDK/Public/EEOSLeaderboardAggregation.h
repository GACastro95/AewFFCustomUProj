#pragma once
#include "CoreMinimal.h"
#include "EEOSLeaderboardAggregation.generated.h"

UENUM(BlueprintType)
enum class EEOSLeaderboardAggregation : uint8 {
    Min,
    Max,
    Sum,
    Latest,
};

