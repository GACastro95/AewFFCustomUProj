#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendGetInfoBit.generated.h"

UENUM(BlueprintType)
enum class EEOSFriendGetInfoBit : uint8 {
    None,
    UserInfo,
    Presence,
    ALL,
};

