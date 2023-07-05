#pragma once
#include "CoreMinimal.h"
#include "ECareerSkillLevelState.generated.h"

UENUM(BlueprintType)
enum class ECareerSkillLevelState : uint8 {
    None,
    Level1,
    Level2,
    Level3,
    Level4,
    LevelMax,
    Error,
};

