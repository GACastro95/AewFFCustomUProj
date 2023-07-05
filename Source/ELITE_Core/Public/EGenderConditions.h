#pragma once
#include "CoreMinimal.h"
#include "EGenderConditions.generated.h"

UENUM(BlueprintType)
enum class EGenderConditions : uint8 {
    Disable,
    MaleOnly,
    FemaleOnly,
    Any,
};

