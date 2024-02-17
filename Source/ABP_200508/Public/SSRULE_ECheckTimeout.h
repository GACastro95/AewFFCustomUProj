#pragma once
#include "CoreMinimal.h"
#include "SSRULE_ECheckTimeout.generated.h"

UENUM(BlueprintType)
enum class SSRULE_ECheckTimeout : uint8 {
    NOT_TIMEOUT,
    TIMEOUT,
};

