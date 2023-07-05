#pragma once
#include "CoreMinimal.h"
#include "EELApplicationStatus.generated.h"

UENUM(BlueprintType)
enum class EELApplicationStatus : uint8 {
    Unknown,
    Suspend,
    Resume,
    Constrained,
    Unconstrained,
    Running,
};

