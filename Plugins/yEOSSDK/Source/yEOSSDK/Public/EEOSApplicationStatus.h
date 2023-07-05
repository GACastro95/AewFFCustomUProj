#pragma once
#include "CoreMinimal.h"
#include "EEOSApplicationStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSApplicationStatus : uint8 {
    BackgroundConstrained,
    BackgroundUnconstrained,
    BackgroundSuspended,
    Foreground,
};

