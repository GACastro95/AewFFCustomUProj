#pragma once
#include "CoreMinimal.h"
#include "ESSWheeledVehicleDrivingPose.generated.h"

UENUM(BlueprintType)
enum class ESSWheeledVehicleDrivingPose : uint8 {
    None,
    Default,
    L,
    R,
    Back,
    BackL,
    BackR,
};

