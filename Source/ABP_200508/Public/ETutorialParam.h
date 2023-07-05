#pragma once
#include "CoreMinimal.h"
#include "ETutorialParam.generated.h"

UENUM(BlueprintType)
enum class ETutorialParam : uint8 {
    StrikeReversalMatchCount,
    ReachReversalMatchCount,
    ReversalSuccess,
};

