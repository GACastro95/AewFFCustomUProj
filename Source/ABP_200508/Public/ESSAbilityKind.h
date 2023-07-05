#pragma once
#include "CoreMinimal.h"
#include "ESSAbilityKind.generated.h"

UENUM(BlueprintType)
enum class ESSAbilityKind : uint8 {
    None,
    HpRecover,
    HeatMeterBonus,
    Speedup,
    JumpPowerup,
    AttackPowerup,
    WeaponAttackPowerup,
    EnemyVisible,
    ItemVisible,
    SeeThrough,
    SpawnItemBox,
    ReduceDamage,
    ReviveFromKo,
    SuperArmor,
    ReduceStorm,
    Fever,
    SlowAttack,
    HammerThrow,
    SafeLanding,
    AvoidTrap,
    Move,
    Max,
};

