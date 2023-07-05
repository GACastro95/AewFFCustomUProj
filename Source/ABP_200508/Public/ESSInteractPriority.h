#pragma once
#include "CoreMinimal.h"
#include "ESSInteractPriority.generated.h"

UENUM(BlueprintType)
enum class ESSInteractPriority : uint8 {
    Default,
    Player = 0xFF,
    Vehicle = 0xFE,
    TreasureBox = 0xFD,
    GimmickInteractable = 0xFC,
    PickupDefault = 0xFB,
    PickupWeapon = 0xFA,
    PickupItem = 0xF9,
    ESSInteractPriority_MAX = 0x100,
};

