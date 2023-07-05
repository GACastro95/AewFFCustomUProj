#pragma once
#include "CoreMinimal.h"
#include "EJukeBoxContent.generated.h"

UENUM(BlueprintType)
enum class EJukeBoxContent : uint8 {
    Button,
    Index,
    TrackingGroup,
    WrestlerID,
    WrestlerName,
    EntranceCueEvent,
    VictoryCueEvent,
    JukeBox,
    DefaultSelect,
    SongTitle,
    JukeBoxCue,
};

