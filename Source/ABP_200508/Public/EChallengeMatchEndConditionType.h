#pragma once
#include "CoreMinimal.h"
#include "EChallengeMatchEndConditionType.generated.h"

UENUM(BlueprintType)
enum class EChallengeMatchEndConditionType : uint8 {
    None,
    Win,
    PinFallFinish,
    SubmissionFinish,
    CountOutFinish,
};

