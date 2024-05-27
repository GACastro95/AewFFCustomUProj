#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentNodeState.generated.h"

UENUM(BlueprintType)
enum class EELLocalTournamentNodeState : uint8 {
    Edit_Empty,
    Edit_Select,
    Edit_NotSelect,
    Progress_Empty,
    Progress_Select,
    Progress_NotSelect,
    Progress_Winner,
    Progress_Loser,
};

