#pragma once
#include "CoreMinimal.h"
#include "ECareerCheckMaxValue.generated.h"

UENUM(BlueprintType)
enum class ECareerCheckMaxValue : uint8 {
    MatchRecord,
    AverageScore,
};

