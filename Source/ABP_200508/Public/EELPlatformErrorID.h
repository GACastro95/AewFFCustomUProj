#pragma once
#include "CoreMinimal.h"
#include "EELPlatformErrorID.generated.h"

UENUM(BlueprintType)
enum class EELPlatformErrorID : uint8 {
    GenericFailure,
    RequiredPatchAvailable,
    RequiredSystemUpdate,
    AgeRestrictionFailure,
    AccountTypeFailure,
    UserNotFound,
    UserNotLoggedIn,
    ChatRestriction,
    UGCRestriction,
    OnlinePlayRestricted,
    NetworkConnectionUnavailable,
};

