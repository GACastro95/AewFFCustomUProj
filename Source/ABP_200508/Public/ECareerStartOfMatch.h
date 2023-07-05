#pragma once
#include "CoreMinimal.h"
#include "ECareerStartOfMatch.generated.h"

UENUM(BlueprintType)
enum class ECareerStartOfMatch : uint8 {
    Default,
    DownFaceUp,
    DownFaceDown,
};

