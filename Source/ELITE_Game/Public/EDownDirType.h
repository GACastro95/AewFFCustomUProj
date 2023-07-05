#pragma once
#include "CoreMinimal.h"
#include "EDownDirType.generated.h"

UENUM(BlueprintType)
enum class EDownDirType : uint8 {
    None,
    Head,
    RightArm,
    LeftArm,
    Leg,
};

