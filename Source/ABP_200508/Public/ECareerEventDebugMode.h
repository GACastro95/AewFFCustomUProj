#pragma once
#include "CoreMinimal.h"
#include "ECareerEventDebugMode.generated.h"

UENUM(BlueprintType)
enum class ECareerEventDebugMode : uint8 {
    None,
    CameraMove,
    LocationMove,
    Yaw,
    Animation,
    Facial,
    Talk,
    Prop,
    PropAnimation,
    Max,
};

