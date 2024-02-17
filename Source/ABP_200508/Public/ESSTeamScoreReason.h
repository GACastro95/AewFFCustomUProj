#pragma once
#include "CoreMinimal.h"
#include "ESSTeamScoreReason.generated.h"

UENUM(BlueprintType)
enum class ESSTeamScoreReason : uint8 {
    None,
    Jewel,
    BlackDia,
    FgfGoal,
    Debug,
};

