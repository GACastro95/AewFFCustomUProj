#pragma once
#include "CoreMinimal.h"
#include "ESSStormState.generated.h"

UENUM(BlueprintType)
enum class ESSStormState : uint8 {
    None,
    Announce,
    Shrink,
    Interval,
};

