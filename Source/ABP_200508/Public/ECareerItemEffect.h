#pragma once
#include "CoreMinimal.h"
#include "ECareerItemEffect.generated.h"

UENUM(BlueprintType)
enum class ECareerItemEffect : uint8 {
    None,
    EnagyUpEffect = 0x2,
    MotivationUpEffect = 0x4,
    CareInjuryEffect = 0x8,
    NextMatchSkillPointUpEffect = 0x10,
    NextMatchMomentumUPEffect = 0x20,
    NextMatchFinisherMode = 0x40,
};

