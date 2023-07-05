#pragma once
#include "CoreMinimal.h"
#include "EChallengeMatchRuleType.generated.h"

UENUM(BlueprintType)
enum class EChallengeMatchRuleType : uint8 {
    OneOnOne,
    TwoOnTwo,
    ThreeWay,
    FourWay,
    BattleRoyale,
    CasinoBattleRoyale,
    CasinoBattleRoyaleTeam,
    ExplodingBarbedWireDeathMatch,
    LightsOutMatch,
    FallsCountAnywhere,
    Max,
    WatchingGames,
    Anything,
    StadiumStampedeMode,
};

