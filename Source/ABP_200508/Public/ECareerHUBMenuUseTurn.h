#pragma once
#include "CoreMinimal.h"
#include "ECareerHUBMenuUseTurn.generated.h"

UENUM(BlueprintType)
enum class ECareerHUBMenuUseTurn : uint8 {
    WorkoutOrHospital,
    Dining,
    Outing,
    OtherMatch,
    DynamiteOrPPV,
};

