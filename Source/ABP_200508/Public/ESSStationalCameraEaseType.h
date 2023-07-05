#pragma once
#include "CoreMinimal.h"
#include "ESSStationalCameraEaseType.generated.h"

UENUM(BlueprintType)
enum class ESSStationalCameraEaseType : uint8 {
    Linear,
    EaseIn,
    EaseOut,
    EaseInOut,
    Max,
};

