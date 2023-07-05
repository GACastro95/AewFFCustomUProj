#pragma once
#include "CoreMinimal.h"
#include "EShopDisplayCategory.generated.h"

UENUM(BlueprintType)
enum class EShopDisplayCategory : uint8 {
    None,
    HotItems,
    Apparrels,
    Accessories,
    Moves,
    Entrance,
    MoreItems,
};

