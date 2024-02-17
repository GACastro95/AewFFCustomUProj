#pragma once
#include "CoreMinimal.h"
#include "ESSLobbyRequestStatus.generated.h"

UENUM(BlueprintType)
enum class ESSLobbyRequestStatus : uint8 {
    NoRequest,
    Doing,
    Success,
    Failed,
    Timeout,
};

