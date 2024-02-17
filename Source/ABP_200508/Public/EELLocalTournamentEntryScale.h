#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentEntryScale.generated.h"

UENUM(BlueprintType)
enum class EELLocalTournamentEntryScale : uint8 {
    EntryScale_x4,
    EntryScale_x8,
    EntryScale_MAX UMETA(Hidden),
};

