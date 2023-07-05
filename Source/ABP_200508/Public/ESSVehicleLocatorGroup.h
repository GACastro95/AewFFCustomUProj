#pragma once
#include "CoreMinimal.h"
#include "ESSVehicleLocatorGroup.generated.h"

UENUM(BlueprintType)
enum class ESSVehicleLocatorGroup : uint8 {
    None,
    All,
    VehicleLocator1,
    VehicleLocator2,
    VehicleLocator3,
    VehicleLocator4,
};

