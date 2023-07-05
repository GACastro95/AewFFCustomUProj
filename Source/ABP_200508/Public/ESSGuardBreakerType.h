#pragma once
#include "CoreMinimal.h"
#include "ESSGuardBreakerType.generated.h"

UENUM(BlueprintType)
enum class ESSGuardBreakerType : uint8 {
    Strike1,
    Strike2,
    Strike3,
    HighFly1,
    HighFly2,
    HighFly3,
    Weapon1,
    Weapon2,
    Weapon3,
    IgnoreGuard,
    Default = 0x0,
    ESSGuardBreakerType_MAX = 0xA,
};

