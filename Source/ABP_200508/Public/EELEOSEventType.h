#pragma once
#include "CoreMinimal.h"
#include "EELEOSEventType.generated.h"

UENUM(BlueprintType)
enum class EELEOSEventType : uint8 {
    Login,
    Logout,
    UpdateUserInfo,
    UpdateFriendUserInfo,
    NoConnection,
    UnexpectedError,
    RequestLogout,
    InvalidLinkedUser,
    LinkEpicAccount,
};

