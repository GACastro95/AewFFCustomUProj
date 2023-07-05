#pragma once
#include "CoreMinimal.h"
#include "ESSFallReason.generated.h"

UENUM(BlueprintType)
enum class ESSFallReason : uint8 {
    None,
    Fall,
    Jump,
    Damage,
    Max,
};

