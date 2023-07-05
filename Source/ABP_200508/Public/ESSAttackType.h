#pragma once
#include "CoreMinimal.h"
#include "ESSAttackType.generated.h"

UENUM(BlueprintType)
enum class ESSAttackType : uint8 {
    None,
    Strike,
    Grapple,
    Storm,
    Vehicle,
    Pushpin,
};

