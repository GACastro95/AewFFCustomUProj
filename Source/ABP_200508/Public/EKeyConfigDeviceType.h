#pragma once
#include "CoreMinimal.h"
#include "EKeyConfigDeviceType.generated.h"

UENUM(BlueprintType)
enum class EKeyConfigDeviceType : uint8 {
    NONE,
    PC,
    PS4,
    PS5,
    XBOX,
    SWITCH,
    KEYBOARD,
};

