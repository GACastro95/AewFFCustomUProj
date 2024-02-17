#pragma once
#include "CoreMinimal.h"
#include "ESSFgfLaunchType.generated.h"

UENUM(BlueprintType)
enum class ESSFgfLaunchType : uint8 {
    None,
    FreeThrow,
    Pass,
    Shoot,
    LongThrow,
    Fumble,
    AimShoot,
};

