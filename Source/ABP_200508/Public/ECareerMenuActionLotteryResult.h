#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuActionLotteryResult.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuActionLotteryResult : uint8 {
    NONE,
    FAILED,
    SUCCESS,
    GREAT_SUCCESS,
};

