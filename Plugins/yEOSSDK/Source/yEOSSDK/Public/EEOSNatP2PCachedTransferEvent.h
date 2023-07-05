#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PCachedTransferEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSNatP2PCachedTransferEvent : uint8 {
    ConnectedUser,
    DisconnectedUser,
};

