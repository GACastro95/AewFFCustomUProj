#pragma once
#include "CoreMinimal.h"
#include "EEOSAuthEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSAuthEvent : uint8 {
    Logedin,
    LogedinFailed,
    LogedinConfirm,
    Logedout,
    Connected,
    ConnectedAndCreated,
    ConnectFailed,
    InvalidLinkedUser,
    LinkedAccount,
    InvalidUser,
    Expired,
    InvalidAuth,
    ConnectLinkAccount,
    ConnectLinkAccountFailed,
    ConnectUnlinkAccount,
    ConnectUnlinkAccountFailed,
    ExternalConnected,
    ExternalConnectFailed,
    InvalidExternalUser,
    LinkedAccountFailed,
};

