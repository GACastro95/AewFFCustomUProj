#pragma once
#include "CoreMinimal.h"
#include "ESSWeaponThrowProjectileState.generated.h"

UENUM(BlueprintType)
enum class ESSWeaponThrowProjectileState : uint8 {
    Hold,
    Stocked,
    Launched,
    PostImpact,
};

