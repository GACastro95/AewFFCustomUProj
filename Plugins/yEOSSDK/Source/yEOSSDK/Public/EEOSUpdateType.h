#pragma once
#include "CoreMinimal.h"
#include "EEOSUpdateType.generated.h"

UENUM(BlueprintType)
enum class EEOSUpdateType : uint8 {
    Manual,
    Tick,
    BackThread,
    BackThreadNoSync,
};

