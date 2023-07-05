#pragma once
#include "CoreMinimal.h"
#include "ESSAttackDirectionType.generated.h"

UENUM(BlueprintType)
enum class ESSAttackDirectionType : uint8 {
    None,
    Forward,
    Radial,
};

