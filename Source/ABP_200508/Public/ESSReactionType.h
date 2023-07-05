#pragma once
#include "CoreMinimal.h"
#include "ESSReactionType.generated.h"

UENUM(BlueprintType)
enum class ESSReactionType : uint8 {
    None,
    KnockBack,
    Blow,
};

