#pragma once
#include "CoreMinimal.h"
#include "ESSMatchmakeType.generated.h"

UENUM(BlueprintType)
enum class ESSMatchmakeType : uint8 {
    Default,
    Ruleset_2x12,
    Ruleset_4x6,
    Ruleset_4x2,
    Ruleset_5x2,
};

