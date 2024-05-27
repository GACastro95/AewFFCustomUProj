#pragma once
#include "CoreMinimal.h"
#include "ECareerItemEffect.generated.h"

UENUM(BlueprintType)
enum class ECareerItemEffect : uint8 {
    None,
    EnagyUpEffect = 2,
    MotivationUpEffect = 4,
    CareInjuryEffect = 8,
    NextMatchSkillPointUpEffect = 16,
    NextMatchMomentumUPEffect = 32,
    NextMatchFinisherMode = 64,
};

