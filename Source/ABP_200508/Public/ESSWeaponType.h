#pragma once
#include "CoreMinimal.h"
#include "ESSWeaponType.generated.h"

UENUM(BlueprintType)
enum class ESSWeaponType : uint8 {
    None,
    Melee,
    Gun,
    Throw,
    Trap,
    Max,
};

