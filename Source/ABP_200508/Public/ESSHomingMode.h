#pragma once
#include "CoreMinimal.h"
#include "ESSHomingMode.generated.h"

UENUM(BlueprintType)
enum class ESSHomingMode : uint8 {
    Linear,
    InterpTo,
};

