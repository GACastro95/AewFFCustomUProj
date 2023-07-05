#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionPacketTransfterState.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionPacketTransfterState : uint8 {
    None,
    Sending,
    Sent,
    Compare,
    Compare_Sent,
    OW_Sending,
    OW_Sent,
    ReceivedResult,
    Sent_Result,
    APIError,
};

