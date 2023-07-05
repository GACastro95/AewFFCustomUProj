#pragma once
#include "CoreMinimal.h"
#include "ESSLocatorType.generated.h"

UENUM(BlueprintType)
enum class ESSLocatorType : uint8 {
    Default,
    PlayerStart,
    ItemBox,
    Vehicle,
    Max,
};

