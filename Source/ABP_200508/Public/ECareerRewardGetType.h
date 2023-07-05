#pragma once
#include "CoreMinimal.h"
#include "ECareerRewardGetType.generated.h"

UENUM(BlueprintType)
enum class ECareerRewardGetType : uint8 {
    None,
    SkillPoint,
    CareerMoney,
    Energy,
    Motivation,
    Injury,
    InjuryRecovery,
    WinBonusSkillPoint,
    WinBonusCareerMoney,
    ScoreBonusSkillPoint,
    ScoreBonusCareerMoney,
    WinBonusMiniGameSkillPoint,
    WinBonusMiniGameCareerMoney,
    MAX,
};

