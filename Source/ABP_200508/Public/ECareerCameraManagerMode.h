#pragma once
#include "CoreMinimal.h"
#include "ECareerCameraManagerMode.generated.h"

UENUM(BlueprintType)
enum class ECareerCameraManagerMode : uint8 {
    None,
    FreeCamera,
    SquareCamera,
};

