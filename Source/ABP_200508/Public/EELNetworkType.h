#pragma once
#include "CoreMinimal.h"
#include "EELNetworkType.generated.h"

UENUM(BlueprintType)
enum class EELNetworkType : uint8 {
    Unknown,
    Disabled,
    Wireless,
    Wired,
};

