#pragma once
#include "CoreMinimal.h"
#include "EMatchRecordsMatchType.generated.h"

UENUM(BlueprintType)
enum class EMatchRecordsMatchType : uint8 {
    OneOnOne,
    TwoOnTwo,
    ThreeWay,
    FourWay,
    LightsOut,
    FallsCountAnywhere,
    CasinoBattleRoyalSolo,
    CasinoBattleRoyalTeam,
    ExplodingDeathMatch,
    Max,
};

