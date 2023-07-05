#pragma once
#include "CoreMinimal.h"
#include "EELNetworkConnectionStatus.generated.h"

UENUM(BlueprintType)
enum class EELNetworkConnectionStatus : uint8 {
    NoConnection,
    Connected,
    Maintenance,
    ServerDown,
    NetworkError,
};

