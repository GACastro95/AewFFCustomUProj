#pragma once
#include "CoreMinimal.h"
#include "ESSUpperBodyAnimState.generated.h"

UENUM(BlueprintType)
enum class ESSUpperBodyAnimState : uint8 {
    Default,
    HoldGun,
    HoldWeaponThrow,
    HoldWeaponThrow2,
    HoldWeaponTrap,
};

