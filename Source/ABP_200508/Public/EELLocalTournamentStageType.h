#pragma once
#include "CoreMinimal.h"
#include "EELLocalTournamentStageType.generated.h"

UENUM(BlueprintType)
enum class EELLocalTournamentStageType : uint8 {
    QuarterFinal,
    SemiFinal,
    Final,
    Complete,
};

