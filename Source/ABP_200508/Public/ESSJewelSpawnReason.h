#pragma once
#include "CoreMinimal.h"
#include "ESSJewelSpawnReason.generated.h"

UENUM(BlueprintType)
enum class ESSJewelSpawnReason : uint8 {
    None,
    Ko,
    Finisher,
    Destructible,
    ItemBox,
    TreasureBox,
    TeamTreasureBox,
    Slot777,
};

