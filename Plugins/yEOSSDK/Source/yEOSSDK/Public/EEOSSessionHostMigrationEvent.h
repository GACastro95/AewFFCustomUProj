#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionHostMigrationEvent : uint8 {
    None,
    ExchangedLatencyInfo,
    DetectedLostHost,
    DetectedQuitGame,
    ReceivedLostHost,
    ReceivedQuitGame,
    UpdatedHostMigrationStatus,
    ChangeHost,
    LeaveOldSession,
    LeaveOldSessionErr,
    CreateSession,
    CreateSessionErr,
    InviteSession,
    InviteSessionErr,
    JoinNewSession,
    JoinNewSessionErr,
    InviteReceived,
    RetryAPI,
    RetryOnTimeout,
    Fixed,
};

