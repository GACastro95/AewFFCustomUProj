#pragma once
#include "CoreMinimal.h"
#include "EBodyHeightType.generated.h"

UENUM(BlueprintType)
enum class EBodyHeightType : uint8 {
    Medium,
    SuperSmall,
    Small,
    MediumSmall,
    MediumLarge,
    Large,
    BigMan,
    Staff,
};

