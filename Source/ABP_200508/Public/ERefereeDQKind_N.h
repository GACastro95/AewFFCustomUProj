#pragma once
#include "CoreMinimal.h"
#include "ERefereeDQKind_N.generated.h"

UENUM(BlueprintType)
enum class ERefereeDQKind_N : uint8 {
    WeaponAttack,
    ManagerDisturbance,
    ManagerWeapon,
    ManagerApron,
    ERefereeDQKind_MAX UMETA(Hidden),
};

