#pragma once
#include "CoreMinimal.h"
#include "ECareerIconTextureType.generated.h"

UENUM(BlueprintType)
enum class ECareerIconTextureType : uint8 {
    IconNone,
    IconSkillPoint,
    IconCareerMoney,
    IconEnergy,
    IconMotivation,
    IconInjury,
    IconFinisher,
    IconInjuryRecovery,
    IconMotivationBoost,
    IconMomentumBoost,
    IconSkillPointBoost,
};

