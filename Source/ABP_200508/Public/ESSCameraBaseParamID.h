#pragma once
#include "CoreMinimal.h"
#include "ESSCameraBaseParamID.generated.h"

UENUM(BlueprintType)
enum class ESSCameraBaseParamID : uint8 {
    Default,
    DeadStart,
    Dead,
    Grapple,
    GrappleThrow,
    Vehicle,
    Horse,
    GunAim,
    ThrowAim,
    PutTrapAim,
};

