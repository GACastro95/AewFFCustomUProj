#pragma once
#include "CoreMinimal.h"
#include "EEOSSDKLogLevel.generated.h"

UENUM(BlueprintType)
enum class EEOSSDKLogLevel : uint8 {
    Off,
    SDK_Error,
    SDK_Warn,
    SDK_Info,
    SDK_ALL,
};

