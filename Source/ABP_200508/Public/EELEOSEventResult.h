#pragma once
#include "CoreMinimal.h"
#include "EELEOSEventResult.generated.h"

UENUM(BlueprintType)
enum class EELEOSEventResult : uint8 {
    Success,
    Error,
};

