#pragma once
#include "CoreMinimal.h"
#include "EGameIntentStatus.generated.h"

UENUM(BlueprintType)
enum class EGameIntentStatus : uint8 {
    None,
    Received,
    Skipped,
};

