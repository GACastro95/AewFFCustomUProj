#pragma once
#include "CoreMinimal.h"
#include "ESSActionTransitableCondition.generated.h"

UENUM(BlueprintType)
enum class ESSActionTransitableCondition : uint8 {
    None,
    Idle,
    Action,
    ActionCancel,
    Max,
};

