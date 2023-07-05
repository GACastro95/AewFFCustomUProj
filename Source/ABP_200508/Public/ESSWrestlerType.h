#pragma once
#include "CoreMinimal.h"
#include "ESSWrestlerType.generated.h"

UENUM(BlueprintType)
enum class ESSWrestlerType : uint8 {
    None,
    Normal,
    HighFly,
    Power,
    Max,
};

