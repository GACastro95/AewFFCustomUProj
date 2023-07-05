#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationClientResultType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionHostMigrationClientResultType : uint8 {
    None,
    LeaveSession,
    LeaveSessionErr,
    WaitInvite,
    WaitInviteErr,
    JoinSession,
    JoinSessionErr,
    WaitMemberInfo,
    WaitMemberInfoErr,
    WaitConnection,
    WaitConnectionErr,
    WaitExchangeData,
    WaitExchangeDataErr,
    EndOfExchangeData,
    EndOfExchangeDataErr,
    ReceivedFixed,
    ForceReset,
};

