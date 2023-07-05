#pragma once
#include "CoreMinimal.h"
#include "ESSRoundState.generated.h"

UENUM(BlueprintType)
enum class ESSRoundState : uint8 {
    Default,
    BeforeShrink,
    Shrinking,
    AfterShrink,
};

