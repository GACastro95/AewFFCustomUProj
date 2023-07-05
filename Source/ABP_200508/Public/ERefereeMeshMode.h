#pragma once
#include "CoreMinimal.h"
#include "ERefereeMeshMode.generated.h"

UENUM(BlueprintType)
enum class ERefereeMeshMode : uint8 {
    Default,
    CloneForDitherOpacityMask,
};

