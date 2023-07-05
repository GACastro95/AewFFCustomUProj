#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerFlag.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerFlag : uint8 {
    None,
    UsingAbility1,
    UsingAbility2,
    UsingAbility3,
    PressingAbilityShiftForWatcher,
    ViewWholeMapForWatcher,
    GunAimForWatcher,
    ThrowWeaponAimForWatcher,
    PutTrapAimForWatcher,
    Max,
};

