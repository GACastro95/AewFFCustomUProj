#pragma once
#include "CoreMinimal.h"
#include "ECareerAutoPlay_MatchWeek.generated.h"

UENUM(BlueprintType)
enum class ECareerAutoPlay_MatchWeek : uint8 {
    None,
    Week1,
    Week2,
    Week3,
    Week4,
    Week4EX,
    ECareerAutoPlay_MAX UMETA(Hidden),
};

