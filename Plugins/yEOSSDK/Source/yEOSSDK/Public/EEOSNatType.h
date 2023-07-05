#pragma once
#include "CoreMinimal.h"
#include "EEOSNatType.generated.h"

UENUM(BlueprintType)
enum class EEOSNatType : uint8 {
    Unknown,
    Open,
    Moderate,
    Strict,
};

