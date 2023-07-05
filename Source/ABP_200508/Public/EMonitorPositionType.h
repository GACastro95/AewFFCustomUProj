#pragma once
#include "CoreMinimal.h"
#include "EMonitorPositionType.generated.h"

UENUM(BlueprintType)
enum class EMonitorPositionType : uint8 {
    UpperLeft,
    UpperRight,
    LowerLeft,
    LowerRight,
    LowerHorizon,
    PositionMax,
};

