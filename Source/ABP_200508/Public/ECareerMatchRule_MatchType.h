#pragma once
#include "CoreMinimal.h"
#include "ECareerMatchRule_MatchType.generated.h"

UENUM(BlueprintType)
enum class ECareerMatchRule_MatchType : uint8 {
    SINGLE_MATCH,
    TAG_TEAM_MATCH,
    WAY3_MATCH,
    WAY4_MATCH,
    MAN5_MATCH,
    MAN6_MATCH,
    CASINO_BATTLE_ROYAL,
    CASINO_BATTLE_ROYAL_TEAM,
    NONE,
    ECareerMatchRule_MAX UMETA(Hidden),
};

