#pragma once
#include "CoreMinimal.h"
#include "ESSSpawnPickupSE.generated.h"

UENUM(BlueprintType)
enum class ESSSpawnPickupSE : uint8 {
    None,
    ExpCommon,
    Common,
    ExpUnCommon,
    UnCommon,
    ExpRare,
    Rare,
    ExpEpic,
    Epic,
    ExpLegendary,
    Legendary,
    Max,
};

