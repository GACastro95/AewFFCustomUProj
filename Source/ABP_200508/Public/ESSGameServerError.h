#pragma once
#include "CoreMinimal.h"
#include "ESSGameServerError.generated.h"

UENUM(BlueprintType)
enum class ESSGameServerError : uint8 {
    None,
    RuleIsExpired,
};

