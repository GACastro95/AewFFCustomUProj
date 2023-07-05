#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionNotificationType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionNotificationType : uint8 {
    UpdateReceived,
    MemberUpdateReceived,
    UpdateMemberDescription,
    SesionGameStarted,
    SesionGameEnded,
    Accepted,
    Blocked,
    SessionFull,
    SessionAlreadyStarted,
    SessionAlreadyEnded,
};

