#pragma once
#include "CoreMinimal.h"
#include "EChallengeTextFormatType.generated.h"

UENUM(BlueprintType)
enum class EChallengeTextFormatType : uint8 {
    NoFormat,
    UseAchievementCount,
    UseOptional,
    UseDiffculty,
    UseWrestlerName,
    UseOnlineRank,
    UseMiniGame,
    UseMatchTypeAndAchievementCount,
};

