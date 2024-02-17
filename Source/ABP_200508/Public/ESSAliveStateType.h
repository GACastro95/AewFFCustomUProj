#pragma once
#include "CoreMinimal.h"
#include "ESSAliveStateType.generated.h"

UENUM(BlueprintType)
enum class ESSAliveStateType : uint8 {
    Default,
    Ko,
    Dead,
    Disappear,
};

