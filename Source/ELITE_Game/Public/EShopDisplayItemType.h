#pragma once
#include "CoreMinimal.h"
#include "EShopDisplayItemType.generated.h"

UENUM(BlueprintType)
enum class EShopDisplayItemType : uint8 {
    None,
    UnlockableItem,
    PossessItem,
};

