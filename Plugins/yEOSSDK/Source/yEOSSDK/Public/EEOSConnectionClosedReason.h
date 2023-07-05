#pragma once
#include "CoreMinimal.h"
#include "EEOSConnectionClosedReason.generated.h"

UENUM(BlueprintType)
enum class EEOSConnectionClosedReason : uint8 {
    Unknown,
    ClosedByLocalUser,
    ClosedByPeer,
    TimedOut,
    TooManyConnections,
    InvalidMessage,
    InvalidData,
    ConnectionFailed,
    ConnectionClosed,
    NegotiationFailed,
    UnexpectedError,
};

