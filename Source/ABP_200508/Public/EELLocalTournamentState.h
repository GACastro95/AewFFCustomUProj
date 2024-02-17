#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentState.generated.h"

UENUM(BlueprintType)
enum class EELLocalTournamentState : uint8 {
    None,
    Edit,
    NextMatch,
    MatchResult,
    Winner,
};

