#pragma once
#include "CoreMinimal.h"
#include "ECareerMatchRule_MenuMatchType.generated.h"

UENUM(BlueprintType)
enum class ECareerMatchRule_MenuMatchType : uint8 {
    SINGLE_MATCH_ONLINE,
    SINGLE_MATCH,
    SINGLE_MATCH_1PMG,
    SINGLE_MATCH_2PMG,
    SINGLE_MATCH_1P2PMG,
    TAG_TEAM_MATCH,
    TAG_TEAM_MATCH_1TMG,
    TAG_TEAM_MATCH_2TMG,
    TAG_TEAM_MATCH_1T2TMG,
    WAY3_MATCH,
    WAY4_MATCH,
    TRIPLE_TEAM_MATCH,
    CASINO_BATTLE_ROYAL,
    HANDICAP_1ON2,
    NONE,
    ECareerMatchRule_MAX UMETA(Hidden),
};

