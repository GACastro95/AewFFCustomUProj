#pragma once
#include "CoreMinimal.h"
#include "EPlatformType.generated.h"

UENUM(BlueprintType)
enum class EPlatformType : uint8 {
    PLATFORM_TYPE_WINDOWS,
    PLATFORM_TYPE_PS4,
    PLATFORM_TYPE_PS5,
    PLATFORM_TYPE_XBOXONE,
    PLATFORM_TYPE_XBOXSX,
    PLATFORM_TYPE_SWITCH,
    PLATFORM_TYPE_STEAM,
    PLATFORM_TYPE_EPIC,
    PLATFORM_TYPE_NONE,
};

