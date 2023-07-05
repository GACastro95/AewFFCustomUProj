#pragma once
#include "CoreMinimal.h"
#include "ESSActionStateSyncMode.generated.h"

UENUM(BlueprintType)
enum class ESSActionStateSyncMode : uint8 {
    Predict,
    Delay,
};

