#pragma once
#include "CoreMinimal.h"
#include "ESSDamageReason.generated.h"

UENUM(BlueprintType)
enum class ESSDamageReason : uint8 {
    None,
    Strike,
    Weapon,
    Grapple,
    Finisher,
    SyncAttack,
    Projectile,
    Explosion,
    Pushpin,
    BadStatus,
    VehicleRunOver,
    VehicleDetach,
    AttackFeedback,
    Involve,
    InvolveFeedback,
    Storm,
    KoDamage,
    LandingDamage,
    Tramp,
    AttackToDown,
    Max,
};

