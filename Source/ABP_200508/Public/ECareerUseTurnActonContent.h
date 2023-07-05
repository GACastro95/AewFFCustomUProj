#pragma once
#include "CoreMinimal.h"
#include "ECareerUseTurnActonContent.generated.h"

UENUM(BlueprintType)
enum class ECareerUseTurnActonContent : uint8 {
    SkillPoint,
    CareerMoney,
    Energy,
    Motivation,
    Injury,
};

