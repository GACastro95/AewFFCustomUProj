#pragma once
#include "CoreMinimal.h"
#include "ECareerDebug_AutoPlay_RepeatUseTurn.generated.h"

UENUM(BlueprintType)
enum class ECareerDebug_AutoPlay_RepeatUseTurn : uint8 {
    NoRepeat,
    Training,
    Dining,
    SightSeeing,
};

