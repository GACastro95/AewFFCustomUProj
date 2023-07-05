#pragma once
#include "CoreMinimal.h"
#include "ECareerMenuParameterType.generated.h"

UENUM(BlueprintType)
enum class ECareerMenuParameterType : uint8 {
    None,
    Energy,
    Motivation,
    SkillPoint,
    CareerMoney,
    SuccessRate,
};

