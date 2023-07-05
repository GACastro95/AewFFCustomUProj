#pragma once
#include "CoreMinimal.h"
#include "ECareerDebug_AutoPlay_MatchTransition.generated.h"

UENUM(BlueprintType)
enum class ECareerDebug_AutoPlay_MatchTransition : uint8 {
    NoLimit,
    NoTransition,
    ECareerDebug_AutoPlay_MAX UMETA(Hidden),
};

