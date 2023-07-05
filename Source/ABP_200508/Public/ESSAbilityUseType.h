#pragma once
#include "CoreMinimal.h"
#include "ESSAbilityUseType.generated.h"

UENUM(BlueprintType)
enum class ESSAbilityUseType : uint8 {
    Passive,
    Active,
    Auto,
    ActiveWhenKo,
};

