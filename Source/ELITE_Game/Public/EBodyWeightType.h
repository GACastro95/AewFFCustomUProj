#pragma once
#include "CoreMinimal.h"
#include "EBodyWeightType.generated.h"

UENUM(BlueprintType)
enum class EBodyWeightType : uint8 {
    Normal,
    Light,
    Heavy,
};

