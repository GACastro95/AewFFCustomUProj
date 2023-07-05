#pragma once
#include "CoreMinimal.h"
#include "EELStatsDataType.generated.h"

UENUM(BlueprintType)
enum class EELStatsDataType : uint8 {
    Unknown,
    Sum,
    Latest,
    Min,
    Max,
};

