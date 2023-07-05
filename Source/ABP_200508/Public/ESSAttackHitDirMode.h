#pragma once
#include "CoreMinimal.h"
#include "ESSAttackHitDirMode.generated.h"

UENUM(BlueprintType)
enum class ESSAttackHitDirMode : uint8 {
    Default,
    ForceFront,
    ForceBack,
};

