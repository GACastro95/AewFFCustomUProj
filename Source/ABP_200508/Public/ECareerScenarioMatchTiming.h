#pragma once
#include "CoreMinimal.h"
#include "ECareerScenarioMatchTiming.generated.h"

UENUM(BlueprintType)
enum class ECareerScenarioMatchTiming : uint8 {
    PROLOGUE,
    ALLOUT_WEEK1,
    ALLOUT_WEEK2,
    ALLOUT_WEEK3,
    ALLOUT_WEEK4,
    FULLGEAR_WEEK1,
    FULLGEAR_WEEK2,
    FULLGEAR_WEEK3,
    FULLGEAR_WEEK4,
    REVOLUTION_WEEK1,
    REVOLUTION_WEEK2,
    REVOLUTION_WEEK3,
    REVOLUTION_WEEK4,
    DON_WEEK1,
    DON_WEEK2,
    DON_WEEK3,
    DON_WEEK4,
    EXTRA_ALLOUT_WEEK4,
    EXTRA_DON_WEEK4,
    UNKNOWN,
};

