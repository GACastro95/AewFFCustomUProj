#pragma once
#include "CoreMinimal.h"
#include "ELobbyCheckStepForHost.generated.h"

UENUM(BlueprintType)
enum class ELobbyCheckStepForHost : uint8 {
    None,
    MemberJoined,
    MemberUpdatedAfterMemberJoined,
    Callback,
    CallbackAfterMemberJoined,
    Canceled_AccountType,
};

