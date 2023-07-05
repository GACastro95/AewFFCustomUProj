#pragma once
#include "CoreMinimal.h"
#include "ESSAutoMatch.generated.h"

UENUM(BlueprintType)
enum class ESSAutoMatch : uint8 {
    None,
    StartOnly,
    StartAndErrorSkip,
    Max,
};

