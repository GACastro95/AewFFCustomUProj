#pragma once
#include "CoreMinimal.h"
#include "EEOSAttrVariableType.generated.h"

UENUM(BlueprintType)
enum class EEOSAttrVariableType : uint8 {
    Boolean,
    Int64,
    Double,
    String,
};

