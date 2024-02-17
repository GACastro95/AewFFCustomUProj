#pragma once
#include "CoreMinimal.h"
#include "EWrestlerSelectEndType.generated.h"

UENUM(BlueprintType)
enum class EWrestlerSelectEndType : uint8 {
    EWrestlerSelectEndType_Success,
    EWrestlerSelectEndType_Cancel,
    EWrestlerSelectEndType_MAX UMETA(Hidden),
};

