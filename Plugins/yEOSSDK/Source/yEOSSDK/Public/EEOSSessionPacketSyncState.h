#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketSyncState.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketSyncState : uint8 {
    None,
    Update,
    Compare,
    Compare_Synchronized,
    Retry,
    Synchronized,
};

