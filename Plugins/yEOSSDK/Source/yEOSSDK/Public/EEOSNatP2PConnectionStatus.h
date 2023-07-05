#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PConnectionStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSNatP2PConnectionStatus : uint8 {
    NotConnected,
    Connected,
    RejectConnection,
    ConnectionAPIFailed,
    DisconnectionAPIFailed,
};

