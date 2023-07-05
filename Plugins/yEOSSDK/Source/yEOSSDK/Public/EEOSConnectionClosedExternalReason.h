#pragma once
#include "CoreMinimal.h"
#include "EEOSConnectionClosedExternalReason.generated.h"

UENUM(BlueprintType)
enum class EEOSConnectionClosedExternalReason : uint8 {
    None,
    Blocked,
    SessionFull,
    SessionAlreadyStarted,
    SessionAlreadyEnded,
};

