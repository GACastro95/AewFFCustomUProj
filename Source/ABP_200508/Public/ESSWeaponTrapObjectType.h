#pragma once
#include "CoreMinimal.h"
#include "ESSWeaponTrapObjectType.generated.h"

UENUM(BlueprintType)
enum class ESSWeaponTrapObjectType : uint8 {
    None,
    Barricade,
    Max,
};

