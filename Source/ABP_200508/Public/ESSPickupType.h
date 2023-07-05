#pragma once
#include "CoreMinimal.h"
#include "ESSPickupType.generated.h"

UENUM(BlueprintType)
enum class ESSPickupType : uint8 {
    None,
    Item,
    Shield,
    Weapon,
    Max,
};

