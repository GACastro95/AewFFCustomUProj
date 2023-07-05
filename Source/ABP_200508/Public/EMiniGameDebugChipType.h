#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugChipType.generated.h"

UENUM(BlueprintType)
enum class EMiniGameDebugChipType : uint8 {
    ChipGather_SpawnCoin,
    ChipGather_SpawnBomb,
    ChipGather_SpawnSpeedUpItem,
    ChipGather_SpawnSpeedDownItem,
    ChipGather_TypeMax,
    ChipGather_MAX UMETA(Hidden),
};

