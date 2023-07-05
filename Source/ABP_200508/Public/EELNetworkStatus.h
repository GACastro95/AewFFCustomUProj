#pragma once
#include "CoreMinimal.h"
#include "EELNetworkStatus.generated.h"

UENUM(BlueprintType)
enum class EELNetworkStatus : uint8 {
    Disabled,
    Offline,
    Online,
};

