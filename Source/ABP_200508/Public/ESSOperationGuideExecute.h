#pragma once
#include "CoreMinimal.h"
#include "ESSOperationGuideExecute.generated.h"

UENUM(BlueprintType)
enum class ESSOperationGuideExecute : uint8 {
    None,
    Default,
    MeleeWeapon,
    GunWeaponNormal,
    GunWeaponAim,
    ThrowingWeaponNormal,
    ThrowingWeaponAim,
    TrapWeaponNormal,
    TrapWeaponAim,
    ItemOperation,
    RidingCar,
    RidingHorse,
    DefaultJump,
    HighFlyJump,
    FGFShortPass,
    FGFShoot,
};

