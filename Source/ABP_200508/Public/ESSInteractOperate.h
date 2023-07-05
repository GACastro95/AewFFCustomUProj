#pragma once
#include "CoreMinimal.h"
#include "ESSInteractOperate.generated.h"

UENUM(BlueprintType)
enum class ESSInteractOperate : uint8 {
    None,
    Pickup,
    InventoryFull,
    Change,
};

