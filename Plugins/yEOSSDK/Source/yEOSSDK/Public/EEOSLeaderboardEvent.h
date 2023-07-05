#pragma once
#include "CoreMinimal.h"
#include "EEOSLeaderboardEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSLeaderboardEvent : uint8 {
    QueryDefinitions,
    QueryDefinitionsErr,
    QueryRank,
    QueryRankErr,
    QueryUserScore,
    QueryUserScoreErr,
    QueryUserScoreNotFound,
};

