#pragma once
#include "CoreMinimal.h"
#include "ESSReactionParamCategory.generated.h"

UENUM(BlueprintType)
enum class ESSReactionParamCategory : uint8 {
    KnockBack,
    Blow,
    WallHit,
    WaitSituation,
    WallOver,
    Max,
};

