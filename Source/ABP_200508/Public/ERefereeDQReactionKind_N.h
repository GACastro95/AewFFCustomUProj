#pragma once
#include "CoreMinimal.h"
#include "ERefereeDQReactionKind_N.generated.h"

UENUM(BlueprintType)
enum class ERefereeDQReactionKind_N : uint8 {
    None,
    Normal,
    Anger,
    PreDQ,
    DQ,
};

