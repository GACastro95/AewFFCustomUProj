#pragma once
#include "CoreMinimal.h"
#include "ESSActorType.generated.h"

UENUM(BlueprintType)
enum class ESSActorType : uint8 {
    Misc,
    Storm,
    Character,
    Vehicle,
    GunBullet,
    DestructibleProp,
    PickupItem,
    PickupWeapon,
    PickupShield,
    WeaponThrowProjectie,
    WeaponTrapObject,
    ItemBox,
    TreasureBox,
    Gimmick,
};

