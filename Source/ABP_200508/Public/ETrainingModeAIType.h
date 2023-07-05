#pragma once
#include "CoreMinimal.h"
#include "ETrainingModeAIType.generated.h"

UENUM(BlueprintType)
enum class ETrainingModeAIType : uint8 {
    Stop,
    Normal,
    StrikeGuard,
    GrappleGuard,
    Agressive,
};

