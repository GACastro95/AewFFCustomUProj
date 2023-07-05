#pragma once
#include "CoreMinimal.h"
#include "ESSMoveSetCategory.generated.h"

UENUM(BlueprintType)
enum class ESSMoveSetCategory : uint8 {
    None,
    Strike,
    Grapple,
    HighFly,
    Weapon,
};

