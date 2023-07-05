#pragma once
#include "CoreMinimal.h"
#include "EEOSApiResult.generated.h"

UENUM(BlueprintType)
enum class EEOSApiResult : uint8 {
    Unknown,
    Success,
    ConnectionError,
    ServerError,
    GatewayError,
    BadRequest,
};

