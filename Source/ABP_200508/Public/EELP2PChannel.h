#pragma once
#include "CoreMinimal.h"
#include "EELP2PChannel.generated.h"

UENUM(BlueprintType)
enum class EELP2PChannel : uint8 {
    Default,
    BlueprintRPC,
    PartyChat,
    FriendChat,
    SessionObject,
    PartyObject,
};

