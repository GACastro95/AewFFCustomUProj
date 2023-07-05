#pragma once
#include "CoreMinimal.h"
#include "ESSHeatSkillKind.generated.h"

UENUM(BlueprintType)
enum class ESSHeatSkillKind : uint8 {
    None,
    DamageBoost,
    BlowBoost,
    IgnoreLandingDamage,
    WeaponQuantityPlus,
    AttentionBoost,
    WeaponGunRangeBoost,
    WeaponThrowExpand,
    MoveLevelUp,
    DamageBoostToShield,
    AttackCapsuleExpand,
    ComboPlus,
    GuardLevelUp,
    MotionSpeedUp,
    Max,
};

