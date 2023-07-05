#pragma once
#include "CoreMinimal.h"
#include "ESSCanUseAbility.generated.h"

UENUM(BlueprintType)
enum class ESSCanUseAbility : uint8 {
    CanUse,
    CanNotUse_Empty,
    CanNotUse_CoolTime,
    CanNotUse_State,
    CanNotUse_Passive,
    CanNotUse_Using,
    CanNotUse_Other,
};

