#pragma once
#include "CoreMinimal.h"
#include "EWrestlerSelectError.generated.h"

UENUM(BlueprintType)
enum class EWrestlerSelectError : uint8 {
    EWrestlerSelectError_FailedMatchMake,
    EWrestlerSelectError_MAX UMETA(Hidden),
};

