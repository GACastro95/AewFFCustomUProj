#pragma once
#include "CoreMinimal.h"
#include "ESSInteractPriority.generated.h"

UENUM(BlueprintType)
enum class ESSInteractPriority : uint8 {
    Default,
    Player = 255,
    Vehicle = 254,
    TreasureBox = 253,
    GimmickInteractable = 252,
    PickupDefault = 251,
    PickupWeapon = 250,
    PickupItem = 249,
};

