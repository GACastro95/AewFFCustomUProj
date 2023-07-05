#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatActionReason.generated.h"

UENUM(BlueprintType)
enum class EEOSAntiCheatActionReason : uint8 {
    Invalid,
    InternalError,
    InvalidMessage,
    AuthenticationFailed,
    NullClient,
    HeartbeatTimeout,
    ClientViolation,
    BackendViolation,
    TemporaryCooldown,
    TemporaryBanned,
    PermanentBanned,
};

