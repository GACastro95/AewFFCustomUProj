#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionState.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionState : uint8 {
    None,
    Creating,
    Pending,
    Starting,
    InProgress,
    Ending,
    Ended,
    Destroying,
};

