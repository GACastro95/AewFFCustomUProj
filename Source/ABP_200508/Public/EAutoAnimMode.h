#pragma once
#include "CoreMinimal.h"
#include "EAutoAnimMode.generated.h"

UENUM(BlueprintType)
enum class EAutoAnimMode : uint8 {
    None,
    PreviewTest,
    AllPreviewTest,
    DistanceTest,
};

