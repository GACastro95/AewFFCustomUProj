#pragma once
#include "CoreMinimal.h"
#include "ECareerEventMoveCameraType.generated.h"

UENUM(BlueprintType)
enum class ECareerEventMoveCameraType : uint8 {
    Fix,
    Translation,
};

