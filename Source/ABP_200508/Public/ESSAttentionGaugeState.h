#pragma once
#include "CoreMinimal.h"
#include "ESSAttentionGaugeState.generated.h"

UENUM(BlueprintType)
enum class ESSAttentionGaugeState : uint8 {
    Default,
    Fever,
};

