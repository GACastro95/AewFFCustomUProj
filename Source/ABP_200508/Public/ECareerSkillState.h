#pragma once
#include "CoreMinimal.h"
#include "ECareerSkillState.generated.h"

UENUM(BlueprintType)
enum class ECareerSkillState : uint8 {
    Lock,
    Unlock,
    Acquired,
    Error,
};

