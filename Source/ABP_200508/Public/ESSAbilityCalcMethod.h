#pragma once
#include "CoreMinimal.h"
#include "ESSAbilityCalcMethod.generated.h"

UENUM(BlueprintType)
enum class ESSAbilityCalcMethod : uint8 {
    None,
    EnableCheckOnly,
    FirstOnly,
    MaxOnly,
    Add,
    ParcentMinOnly,
    ParcentMaxOnly,
    ParcentAdd,
    ParcentMulti,
};

