#pragma once
#include "CoreMinimal.h"
#include "ESSVehicleType.generated.h"

UENUM(BlueprintType)
enum class ESSVehicleType : uint8 {
    None,
    Wheeled,
    Horse,
    Max,
};

