#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionObjectParamType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionObjectParamType : uint8 {
    None,
    Character,
    Object,
};

