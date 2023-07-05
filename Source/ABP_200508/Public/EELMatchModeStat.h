#pragma once
#include "CoreMinimal.h"
#include "EELMatchModeStat.generated.h"

UENUM(BlueprintType)
enum class EELMatchModeStat : uint8 {
    Total_Score,
    Total_PlayTime,
    Total_MAX UMETA(Hidden),
};

