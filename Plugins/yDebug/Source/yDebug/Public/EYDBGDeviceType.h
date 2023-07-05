#pragma once
#include "CoreMinimal.h"
#include "EYDBGDeviceType.generated.h"

UENUM(BlueprintType)
enum class EYDBGDeviceType : uint8 {
    Unknown,
    Windows,
    Mac,
    IOS,
    Android,
    XboxOne,
    PS4,
    Switch,
};

