#pragma once
#include "CoreMinimal.h"
#include "EYGS2DebugMenuClientStep.generated.h"

UENUM(BlueprintType)
enum class EYGS2DebugMenuClientStep : uint8 {
    None,
    BeginWait,
    Requested,
    Respond,
    Error,
    Max,
};

