#pragma once
#include "CoreMinimal.h"
#include "EELYGS2ServerType.generated.h"

UENUM(BlueprintType)
enum class EELYGS2ServerType : uint8 {
    Default,
    Override,
    Primary,
    Secondary,
    Local,
};

