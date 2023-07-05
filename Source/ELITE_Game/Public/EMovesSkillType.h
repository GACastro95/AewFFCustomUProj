#pragma once
#include "CoreMinimal.h"
#include "EMovesSkillType.generated.h"

UENUM(BlueprintType)
enum class EMovesSkillType : uint8 {
    Passive,
    Finisher,
    Signature,
};

