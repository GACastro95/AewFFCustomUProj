#pragma once
#include "CoreMinimal.h"
#include "EELMatchType.generated.h"

UENUM(BlueprintType)
enum class EELMatchType : uint8 {
    SINGLE_MATCH,
    TAG_TEAM_MATCH,
    THREE_WAY_MATCH,
    FOUR_WAY_MATCH,
    FIVE_MAN_MATCH,
    SIX_MAN_MATCH,
    CASINO_BATTLEROYAL,
    CASINO_BATTLEROYAL_TEAM,
    STADIUM_STAMPEDE,
    NONE,
};

