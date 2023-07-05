#pragma once
#include "CoreMinimal.h"
#include "EELSessionPacketNotifyType.generated.h"

UENUM(BlueprintType)
enum class EELSessionPacketNotifyType : uint8 {
    NOTIFY_REQUEST_LEAVESESSION,
    NOTIFY_REQUEST_INVITEPARTYPLAYER,
    NOTIFY_RECIEVE_POSITIONDATA,
    NOTIFY_REQUEST_RESENDPLAYERSTATE,
    NOTIFY_REQUEST_RESENDPLAYERDATA,
    NOTIFY_TEST,
    NOTIFY_TEST_RESPONSE,
    NOTIFY_MAX UMETA(Hidden),
};

