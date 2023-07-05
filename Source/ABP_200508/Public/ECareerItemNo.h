#pragma once
#include "CoreMinimal.h"
#include "ECareerItemNo.generated.h"

UENUM(BlueprintType)
enum class ECareerItemNo : uint8 {
    None,
    EnagyUp,
    MotivationUp,
    CareInjury,
    SkillPointUp,
    MomentumUp,
    FinisherMode,
    TShirt,
    CareerItemNoMax,
};

