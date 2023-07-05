#pragma once
#include "CoreMinimal.h"
#include "ECareerStoryCardRegularReward.generated.h"

UENUM(BlueprintType)
enum class ECareerStoryCardRegularReward : uint8 {
    None,
    SkillPoint,
    CareerMoney,
    Motivation,
    Energy,
};

