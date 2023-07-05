#pragma once
#include "CoreMinimal.h"
#include "EEOSGeneralEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSGeneralEvent : uint8 {
    DisableDispatcher,
    BeginReleaseManager,
    EndReleaseManager,
    RequestLogin,
    RequestLogout,
    LoggedOut,
    LoggedIn,
    Success,
    NoConnection,
    UnexpectedError,
};

