#pragma once
#include "CoreMinimal.h"
#include "EELActivityUpdateMatchStatus.generated.h"

UENUM(BlueprintType)
enum class EELActivityUpdateMatchStatus : uint8 {
    Invalid,
    InProgress,
    Paused,
    Aborted,
};

