#pragma once
#include "CoreMinimal.h"
#include "EELYGS2RequestFunctionType.generated.h"

UENUM(BlueprintType)
enum class EELYGS2RequestFunctionType : uint8 {
    Default,
    Read,
    Create,
    Update,
    Delete,
    Cancel,
};

