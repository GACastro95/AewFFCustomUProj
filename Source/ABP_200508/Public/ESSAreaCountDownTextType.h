#pragma once
#include "CoreMinimal.h"
#include "ESSAreaCountDownTextType.generated.h"

UENUM(BlueprintType)
enum class ESSAreaCountDownTextType : uint8 {
    None,
    UntilAreaShrink,
    AreaShrinking,
};

