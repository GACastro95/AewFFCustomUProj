#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionGameEventRequestType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionGameEventRequestType : uint8 {
    None,
    NotifyCurrentStatus,
    RequestGetCurrentStatus,
};

