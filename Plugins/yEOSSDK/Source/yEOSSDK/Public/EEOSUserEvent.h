#pragma once
#include "CoreMinimal.h"
#include "EEOSUserEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSUserEvent : uint8 {
    UserInfo,
    UserInfoErr,
    FriendUserInfo,
    FriendUserInfoErr,
    LoggedOutUser,
    UpdatedAuthState,
};

