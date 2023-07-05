#pragma once
#include "CoreMinimal.h"
#include "ESSPlayerDebugFlag.generated.h"

UENUM(BlueprintType)
enum class ESSPlayerDebugFlag : uint8 {
    None,
    CriticalAttack,
    NoDamage,
    Invincible,
    IgnoreAbilityCoolTime,
    HighSpeed,
    SuperJump,
    IgnoreGimmickCoolTime,
    FixedAttentionPoint,
    TestReliableRPC,
    TestUnreliableRPC,
    MaxHpBoost,
    UnlimitedUseItemAndWeapon,
    AutoAttack,
    AutoInput_MoveForward,
    AutoInput_MoveRotate,
    AutoInput_MoveToTarget,
    AutoInput_Guard,
    AutoInput_Jump,
    AutoInput_AirJump,
    AutoInput_Attack,
    AutoInput_AirAttack,
    IgnoreMovementTimeout,
    Max,
};

