#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionErrorType.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionErrorType : uint8 {
    None,
    JoinError,
};

