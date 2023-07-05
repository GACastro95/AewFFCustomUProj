#pragma once
#include "CoreMinimal.h"
#include "EPossessedItemType.generated.h"

UENUM(BlueprintType)
enum class EPossessedItemType : uint8 {
    None,
    Extend,
    Consume,
};

