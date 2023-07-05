#pragma once
#include "CoreMinimal.h"
#include "ECareerEventCameraType.generated.h"

UENUM(BlueprintType)
enum class ECareerEventCameraType : uint8 {
    WHOLE,
    INDIVIDUAL,
    INDIVIDUAL_SNAPSHOT,
    INDIVIDUAL_HEAD,
    INDIVIDUAL_NECK,
    INDIVIDUAL_CHEST,
    INDIVIDUAL_SPINE,
};

