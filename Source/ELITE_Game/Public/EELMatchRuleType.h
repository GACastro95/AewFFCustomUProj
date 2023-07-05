#pragma once
#include "CoreMinimal.h"
#include "EELMatchRuleType.generated.h"

UENUM(BlueprintType)
enum class EELMatchRuleType : uint8 {
    NORMAL,
    BATTLE_ROYAL,
    MATCH_RULE_MAX UMETA(Hidden),
};

