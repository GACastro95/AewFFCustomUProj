#pragma once
#include "CoreMinimal.h"
#include "ESSHeatSkillCategory.generated.h"

UENUM(BlueprintType)
enum class ESSHeatSkillCategory : uint8 {
    Strike,
    Grapple,
    HighFly,
    Weapon,
    Max,
};

