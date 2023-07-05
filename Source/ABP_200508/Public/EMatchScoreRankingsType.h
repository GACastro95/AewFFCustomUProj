#pragma once
#include "CoreMinimal.h"
#include "EMatchScoreRankingsType.generated.h"

UENUM(BlueprintType)
enum class EMatchScoreRankingsType : uint8 {
    NONE,
    ONE_ON_ONE,
    TWO_ON_TWO,
    THREE_WAY_MATCH,
    FOUR_WAY_MATCH,
    CASINO_BATTLE_ROYALE_SOLO,
    CASINO_BATTLE_ROYALE_GROUP,
    LIGHTS_OUT_MATCH,
    FALLS_COUNT_ANYWHERE,
    EXPLODING_BARBED_WIRE_DEATH_MATCH,
    LADDER_MATCH,
    STADIUM_STAMPEDE,
    MAX,
};

