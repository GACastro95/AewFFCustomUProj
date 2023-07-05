#pragma once
#include "CoreMinimal.h"
#include "EAttachConditionBit.generated.h"

UENUM(BlueprintType)
enum class EAttachConditionBit : uint8 {
    LocationX = 0x1,
    LocationY,
    LocationZ = 0x4,
    RotationX = 0x8,
    RotationY = 0x10,
    RotationZ = 0x20,
    NoEffect = 0x0,
    LocationAll = 0x7,
    RotationAll = 0x38,
    All = 0x3F,
};

