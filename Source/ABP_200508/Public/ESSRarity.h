#pragma once
#include "CoreMinimal.h"
#include "ESSRarity.generated.h"

UENUM(BlueprintType)
enum class ESSRarity : uint8 {
    None,
    Common,
    UnCommon,
    Rare,
    Epic,
    Legendary,
    Max,
};

