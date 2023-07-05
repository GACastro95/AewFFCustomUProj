#pragma once
#include "CoreMinimal.h"
#include "EEOSLoginType.generated.h"

UENUM(BlueprintType)
enum class EEOSLoginType : uint8 {
    None,
    Password,
    ExchangeCode,
    PersistentAuth,
    DeviceCode,
    Developer,
    RefreshToken,
    AccountPortal,
    ExternalAuth,
};

