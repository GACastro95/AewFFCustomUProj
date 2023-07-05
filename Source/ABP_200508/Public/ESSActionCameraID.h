#pragma once
#include "CoreMinimal.h"
#include "ESSActionCameraID.generated.h"

UENUM(BlueprintType)
enum class ESSActionCameraID : uint8 {
    None,
    Dead,
    GunAim,
    ThrowWeaponAim,
    PutTrapAim,
    SyncMotion,
    SyncMotionFar,
};

