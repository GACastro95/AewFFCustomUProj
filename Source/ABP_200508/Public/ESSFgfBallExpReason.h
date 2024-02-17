#pragma once
#include "CoreMinimal.h"
#include "ESSFgfBallExpReason.generated.h"

UENUM(BlueprintType)
enum class ESSFgfBallExpReason : uint8 {
    None,
    Pass,
    Finisher,
    RunWithBall,
    DefenseBonus,
};

