#pragma once
#include "CoreMinimal.h"
#include "ECareerMapCameraType.generated.h"

UENUM(BlueprintType)
enum class ECareerMapCameraType : uint8 {
    Travel,
    City,
    Max,
};

