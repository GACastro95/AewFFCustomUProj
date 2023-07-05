#pragma once
#include "CoreMinimal.h"
#include "EEOSAPIRequestDataFlag.generated.h"

UENUM(BlueprintType)
enum class EEOSAPIRequestDataFlag : uint8 {
    None,
    Cancelable,
    Canceled,
};

