#pragma once
#include "CoreMinimal.h"
#include "ESSFgfTeamAnnounce.generated.h"

UENUM(BlueprintType)
enum class ESSFgfTeamAnnounce : uint8 {
    None,
    EndRoundGoal,
    EndRoundDefend,
    OffenceStart,
    CalledGamePossibility,
    LastRoundTop,
    LastRoundBottom,
    TimeupDefenceSuccess,
    Max,
};

