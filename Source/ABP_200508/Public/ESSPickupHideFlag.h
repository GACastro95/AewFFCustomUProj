#pragma once
#include "CoreMinimal.h"
#include "ESSPickupHideFlag.generated.h"

UENUM(BlueprintType)
enum class ESSPickupHideFlag : uint8 {
    None,
    Internal,
    External,
    UnEquip = 4,
    ActionState = 8,
};

