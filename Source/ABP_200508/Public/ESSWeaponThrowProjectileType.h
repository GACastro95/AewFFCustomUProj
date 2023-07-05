#pragma once
#include "CoreMinimal.h"
#include "ESSWeaponThrowProjectileType.generated.h"

UENUM(BlueprintType)
enum class ESSWeaponThrowProjectileType : uint8 {
    None,
    Oil,
    Pushpin,
    FireBottle,
    Bomb,
    Ball,
    Max,
};

