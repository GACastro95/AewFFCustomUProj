#pragma once
#include "CoreMinimal.h"
#include "ESSSpawnItemCategory.generated.h"

UENUM(BlueprintType)
enum class ESSSpawnItemCategory : uint8 {
    None,
    HpItem,
    ExpItem,
    ShieldItem,
    OtherItem,
    Weapon,
    Max,
};

