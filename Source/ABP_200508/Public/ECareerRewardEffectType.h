#pragma once
#include "CoreMinimal.h"
#include "ECareerRewardEffectType.generated.h"

UENUM(BlueprintType)
enum class ECareerRewardEffectType : uint8 {
    None,
    Good,
    Bad,
};

