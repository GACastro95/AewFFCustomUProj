#pragma once
#include "CoreMinimal.h"
#include "EChallengePeriodType.generated.h"

UENUM(BlueprintType)
enum class EChallengePeriodType : uint8 {
    Daily,
    Weekly,
    Normal,
    Secret,
};

