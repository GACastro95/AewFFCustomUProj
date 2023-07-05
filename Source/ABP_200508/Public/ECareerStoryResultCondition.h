#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryResultCondition.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryResultCondition : uint8 {
    NONE,
    WIN,
    LOSE,
    WIN_OPP_A,
    WIN_OPP_B,
    WIN_OPP_C,
    WIN_OPP_D,
    SELECT_A,
    SELECT_B,
    SELECT_C,
    SELECT_D,
    SCR_TRUE,
    SCR_FALSE,
    TARGET_OPP_A,
    TARGET_OPP_B,
    TARGET_OPP_C,
    TARGET_OPP_D,
    HEIGHT_SUPER_SMALL,
    HEIGHT_SMALL,
    HEIGHT_MEDIUM_SMALL,
    HEIGHT_MEDIUM,
    HEIGHT_MEDIUM_LARGE,
    HEIGHT_LARGE,
    HEIGHT_BIGMAN,
    OTHER,
};

