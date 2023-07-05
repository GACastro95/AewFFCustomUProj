#pragma once
#include "CoreMinimal.h"
#include "ESSBadStatus.generated.h"

UENUM(BlueprintType)
enum class ESSBadStatus : uint8 {
    None,
    Slow,
    FireBottle,
    Max,
};

