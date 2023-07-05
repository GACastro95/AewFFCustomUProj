#pragma once
#include "CoreMinimal.h"
#include "EAttireCondition.generated.h"

UENUM(BlueprintType)
enum class EAttireCondition : uint8 {
    Disable,
    ForRing,
    ForEntrance,
    ForPlain,
    ForMatch,
    Any,
};

