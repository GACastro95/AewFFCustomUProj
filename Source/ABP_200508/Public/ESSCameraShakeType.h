#pragma once
#include "CoreMinimal.h"
#include "ESSCameraShakeType.generated.h"

UENUM(BlueprintType)
enum class ESSCameraShakeType : uint8 {
    None,
    DamageWeak,
    DamageMedium,
    DamageStrong,
    GroundImpact_Weak,
    GroundImpact_Medium,
    GroundImpact_Strong,
};

