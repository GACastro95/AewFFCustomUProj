#pragma once
#include "CoreMinimal.h"
#include "ESSHeatLevelSkillType.generated.h"

UENUM(BlueprintType)
enum class ESSHeatLevelSkillType : uint8 {
    None,
    StlikeDamageUp,
    GrappleDamageUp,
    HighFlyDamageUp,
    WeaponDamageUp,
    RecoveryQuantityUp,
    Max,
};

