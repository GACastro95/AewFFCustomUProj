#pragma once
#include "CoreMinimal.h"
#include "ESSWheeledVehicleDamagedState.generated.h"

UENUM(BlueprintType)
enum class ESSWheeledVehicleDamagedState : uint8 {
    None,
    DamagedLv1,
    DamagedMax,
};

