#pragma once
#include "CoreMinimal.h"
#include "ESSInteractState.generated.h"

UENUM(BlueprintType)
enum class ESSInteractState : uint8 {
    None,
    Pickup,
    Change,
    SelectingInventory,
    SelectingTaregtItem,
};

