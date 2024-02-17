#pragma once
#include "CoreMinimal.h"
#include "ESSRuleChangeResult.generated.h"

UENUM(BlueprintType)
enum class ESSRuleChangeResult : uint8 {
    Success,
    FailedChangeMaxPlayers,
    RuleScheduleIsExpired,
};

