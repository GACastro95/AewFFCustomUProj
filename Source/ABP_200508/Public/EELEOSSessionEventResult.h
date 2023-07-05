#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionEventResult.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionEventResult : uint8 {
    Success,
    Error,
};

