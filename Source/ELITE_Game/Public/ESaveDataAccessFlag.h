#pragma once
#include "CoreMinimal.h"
#include "ESaveDataAccessFlag.generated.h"

UENUM(BlueprintType)
enum class ESaveDataAccessFlag : uint8 {
    None,
    Validation,
    Comparation,
    Type = 4,
    ALL = 255,
};

