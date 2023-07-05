#pragma once
#include "CoreMinimal.h"
#include "EEOSQueryStatus.generated.h"

UENUM(BlueprintType)
enum class EEOSQueryStatus : uint8 {
    NotQueried,
    Querying,
    Queried,
};

