#pragma once
#include "CoreMinimal.h"
#include "ESSThrowPredictionType.generated.h"

UENUM(BlueprintType)
enum class ESSThrowPredictionType : uint8 {
    None,
    ThrowWeapon,
    DirectionalThrow,
};

