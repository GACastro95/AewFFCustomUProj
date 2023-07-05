#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSFriendStatus : uint8 {
    NotFriends,
    InviteSent,
    InviteReceived,
    Friends,
};

