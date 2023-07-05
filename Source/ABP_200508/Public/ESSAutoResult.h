#pragma once
#include "CoreMinimal.h"
#include "ESSAutoResult.generated.h"

UENUM(BlueprintType)
enum class ESSAutoResult : uint8 {
    None,
    SkipAll,
    SkipResultOnly,
    Max,
};

