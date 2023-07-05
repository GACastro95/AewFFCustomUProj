#pragma once
#include "CoreMinimal.h"
#include "EEOSPresenceEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSPresenceEvent : uint8 {
    PresenceSet,
    PresenceSetErr,
    PresenceGet,
    PresenceGetErr,
    PresenceChanged,
    FriendPresenceGet,
    FriendPresenceGetErr,
    FriendPresenceChanged,
    JoinGameAccepted,
};

