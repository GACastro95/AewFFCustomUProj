#pragma once
#include "CoreMinimal.h"
#include "EGfeSDKHighlightType.generated.h"

UENUM(BlueprintType)
enum class EGfeSDKHighlightType : uint8 {
    NONE,
    Milestone,
    Achievement,
    Incident = 4,
    StateChange = 8,
    Unannounced = 16,
    MAX = 32,
};

