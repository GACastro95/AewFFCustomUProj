#pragma once
#include "CoreMinimal.h"
#include "ECareerRewardParamType.generated.h"

UENUM(BlueprintType)
enum class ECareerRewardParamType : uint8 {
    WinBonusSkillPoint,
    WinBonusCareerMoney,
    WinBonusMiniGameSkillPoint,
    WinBonusMiniGameCareerMoney,
    ScoreBonusSkillPoint,
    ScoreBonusCareerMoney,
};

