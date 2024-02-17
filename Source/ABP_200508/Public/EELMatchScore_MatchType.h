#pragma once
#include "CoreMinimal.h"
#include "EELMatchScore_MatchType.generated.h"

UENUM(BlueprintType)
enum class EELMatchScore_MatchType : uint8 {
    None,
    SingleMatch,
    TagMatch,
    ThreeWay,
    FourWay,
    CasinoBattleRoyale,
};

