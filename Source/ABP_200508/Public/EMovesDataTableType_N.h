#pragma once
#include "CoreMinimal.h"
#include "EMovesDataTableType_N.generated.h"

UENUM(BlueprintType)
enum class EMovesDataTableType_N : uint8 {
    StandStrike,
    DownGrapple,
    ChainStrike,
    ChainGrapple,
    SpecialStrike,
    SpecialGrapple,
    CornerDiving,
    ApronSpringboard,
    CornerSpringboard,
    RopeSpringboard,
    TwoPlatoons,
    Reset,
};

