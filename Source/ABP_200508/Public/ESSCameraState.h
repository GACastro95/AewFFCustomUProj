#pragma once
#include "CoreMinimal.h"
#include "ESSCameraState.generated.h"

UENUM(BlueprintType)
enum class ESSCameraState : uint8 {
    Default,
    Jumping,
    JumpingDown,
    Falling,
    DeadStart,
    Dead,
    Grapple,
    GrappleThrow,
    VehicleDefault,
    VehicleMoving,
    HorseDefault,
    HorseMoving,
    GunAim,
    ThrowAim,
    PutTrapAim,
};

