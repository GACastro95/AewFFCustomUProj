#pragma once
#include "CoreMinimal.h"
#include "ESSAttentionGaugeStateLevel.generated.h"

UENUM(BlueprintType)
enum class ESSAttentionGaugeStateLevel : uint8 {
    Low,
    Middle,
    High,
};

