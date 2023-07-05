#pragma once
#include "CoreMinimal.h"
#include "EMonitorMode.generated.h"

UENUM(BlueprintType)
enum class EMonitorMode : uint8 {
    SimpleMode,
    DetailMode,
    ModeMax,
};

