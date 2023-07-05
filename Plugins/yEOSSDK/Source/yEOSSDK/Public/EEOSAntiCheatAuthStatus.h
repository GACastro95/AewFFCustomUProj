#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatAuthStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSAntiCheatAuthStatus : uint8 {
    Invalid,
    LocalAuthComplete,
    RemoteAuthComplete,
};

