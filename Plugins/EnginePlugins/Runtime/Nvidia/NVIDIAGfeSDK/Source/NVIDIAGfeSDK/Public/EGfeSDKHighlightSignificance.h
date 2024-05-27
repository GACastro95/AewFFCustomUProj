#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightSignificance.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKHighlightSignificance : uint8 {
    NONE,
    ExtremelyBad,
    VeryBad,
    Bad = 4,
    Neutral = 8,
    Good = 16,
    VeryGood = 32,
    ExtremelyGood = 64,
    MAX = 128,
};

