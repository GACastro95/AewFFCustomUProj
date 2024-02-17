#pragma once
#include "CoreMinimal.h"
#include "ESSDamageReceiverState.generated.h"

UENUM(BlueprintType)
enum class ESSDamageReceiverState : uint8 {
    Default,
    DefaultOnGround,
    DefaultInAir,
    Guard,
    Attack,
    AttackWithArmor,
    LongRangeAttack,
    Grapple,
    Sync,
    DamagedOnGround,
    DamagedInAir,
    DamagedBlow,
    DamagedWaitSituationMove,
    DamagedWallHit,
    Down,
    DownStandUp,
    VehicleRiding,
    Invincible,
    AfterDownStandUp,
    AdditionalSuperArmor,
    AfterRespawn,
};

