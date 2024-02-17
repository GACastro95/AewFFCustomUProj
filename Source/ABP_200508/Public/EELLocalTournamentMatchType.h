#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentMatchType.generated.h"

UENUM(BlueprintType)
enum class EELLocalTournamentMatchType : uint8 {
    Normal,
    LightsOutMatch,
    FallsCountAnywhere,
    ExplodingBarbedWireDeathMatch,
    LadderMatch,
};

