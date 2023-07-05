#pragma once
#include "CoreMinimal.h"
#include "EUnlockableItemRarityType.generated.h"

UENUM(BlueprintType)
enum class EUnlockableItemRarityType : uint8 {
    Common,
    Uncommon,
    Rare,
    Epic,
    Legendary,
    None,
};

