#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSFriendEvent : uint8 {
    FriendInfo,
    FriendInfo_Empty,
    FriendStatus,
    FriendGetInfo,
    FriendUpdatePUID,
    FriendInfo_Failed,
    FriendUpdateExternalAccount,
};

