#pragma once
#include "CoreMinimal.h"
#include "ESSSpawnPickupReason.generated.h"

UENUM(BlueprintType)
enum class ESSSpawnPickupReason : uint8 {
    None,
    ItemBox,
    Gimmick,
    Attention,
};

