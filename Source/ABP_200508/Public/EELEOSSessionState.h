#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionState.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionState : uint8 {
    STATE_SESSION_NONE,
    STATE_SESSION_EXIST,
};

