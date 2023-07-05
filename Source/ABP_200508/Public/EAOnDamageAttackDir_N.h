#pragma once
#include "CoreMinimal.h"
#include "EAOnDamageAttackDir_N.generated.h"

UENUM(BlueprintType)
enum class EAOnDamageAttackDir_N : uint8 {
    Front,
    Right,
    Left,
    EAOnDamageAttackDir_MAX UMETA(Hidden),
};

