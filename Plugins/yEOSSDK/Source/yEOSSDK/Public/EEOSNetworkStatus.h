#pragma once
#include "CoreMinimal.h"
#include "EEOSNetworkStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSNetworkStatus : uint8 {
    Disabled,
    Offline,
    Online,
};

