#pragma once
#include "CoreMinimal.h"
#include "EAttachConditionBit.generated.h"

UENUM(BlueprintType)
enum class EAttachConditionBit : uint8 {
    LocationX = 1,
    LocationY,
    LocationZ = 4,
    RotationX = 8,
    RotationY = 16,
    RotationZ = 32,
    NoEffect = 0,
    LocationAll = 7,
    RotationAll = 56,
    All = 63,
};

