#pragma once
#include "CoreMinimal.h"
#include "ESSAbilitySlotState.generated.h"

UENUM(BlueprintType)
enum class ESSAbilitySlotState : uint8 {
    Empty,
    Passive,
    Active_Using,
    Active_CoolTime,
    Active_Charged,
    Auto_Using,
    Auto_CoolTime,
    Auto_Charged,
    Used,
};

