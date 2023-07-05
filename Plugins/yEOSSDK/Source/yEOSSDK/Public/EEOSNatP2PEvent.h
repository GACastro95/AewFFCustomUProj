#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSNatP2PEvent : uint8 {
    GetNatType,
    GetNatTypeErr,
    ConfirmConnection,
    Connection,
    ConnectionErrSocketID,
    ConnectionErrUnknownUser,
    ConnectionErr,
    Closed,
    ClosedErr,
    ClosedSocket,
    ClosedSocketErr,
};

