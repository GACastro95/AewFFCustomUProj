#pragma once
#include "CoreMinimal.h"
#include "ESaveDataAccessFlag.generated.h"

UENUM(BlueprintType)
enum class ESaveDataAccessFlag : uint8 {
    None,
    Validation,
    Comparation,
    Type = 0x4,
    ALL = 0xFF,
};

