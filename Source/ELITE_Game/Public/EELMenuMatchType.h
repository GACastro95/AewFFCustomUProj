#pragma once
#include "CoreMinimal.h"
#include "EELMenuMatchType.generated.h"

UENUM(BlueprintType)
enum class EELMenuMatchType : uint8 {
    SINGLE_MATCH_ONLINE,
    SINGLE_MATCH,
    SINGLE_MATCH_1PMG,
    SINGLE_MATCH_2PMG,
    SINGLE_MATCH_1P2PMG,
    TAG_TEAM_MATCH,
    TAG_TEAM_MATCH_1TMG,
    TAG_TEAM_MATCH_2TMG,
    TAG_TEAM_MATCH_1T2TMG,
    THREE_WAY_MATCH,
    FOUR_WAY_MATCH,
    TRIPLE_TEAM_MATCH,
    CASINO_BATTLE_ROYAL,
    HANDICAP_1ON2,
};

