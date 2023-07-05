#pragma once
#include "CoreMinimal.h"
#include "EEOSDisposeStep.generated.h"

UENUM(BlueprintType)
enum class EEOSDisposeStep : uint8 {
    None,
    BeginRelease,
    WaitBeginRelease,
    EndRelease,
    WaitEndRelease,
};

