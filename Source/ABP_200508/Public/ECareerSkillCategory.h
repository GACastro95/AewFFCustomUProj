#pragma once
#include "CoreMinimal.h"
#include "ECareerSkillCategory.generated.h"

UENUM(BlueprintType)
enum class ECareerSkillCategory : uint8 {
    ParameterSkill,
    ActionSkill,
    PassiveSkill,
    SkillCategoryMax,
};

