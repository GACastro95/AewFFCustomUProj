#pragma once
#include "CoreMinimal.h"
#include "EEnvironmentGroggy.generated.h"

UENUM(BlueprintType)
enum class EEnvironmentGroggy : uint8 {
    None,
    Apron,
    Barricade,
    CornerPost,
    SteelStepFront,
    SteelStepSide,
    StageMonitor,
};

