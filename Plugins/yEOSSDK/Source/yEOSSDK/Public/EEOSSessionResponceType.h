#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionResponceType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionResponceType : uint8 {
    Success,
    Broken,
    Broken_NeedToRetry,
    UnknownUser,
};

