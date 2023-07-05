#pragma once
#include "CoreMinimal.h"
#include "ESSWeaponTrapMode.generated.h"

UENUM(BlueprintType)
enum class ESSWeaponTrapMode : uint8 {
    None,
    Guide,
    Trap,
};

