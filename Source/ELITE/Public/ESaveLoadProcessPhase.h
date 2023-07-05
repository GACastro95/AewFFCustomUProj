#pragma once
#include "CoreMinimal.h"
#include "ESaveLoadProcessPhase.generated.h"

UENUM(BlueprintType)
enum class ESaveLoadProcessPhase : uint8 {
    Idle,
    Load,
    Save,
    Validate,
};

