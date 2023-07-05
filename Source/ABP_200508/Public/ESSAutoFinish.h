#pragma once
#include "CoreMinimal.h"
#include "ESSAutoFinish.generated.h"

UENUM(BlueprintType)
enum class ESSAutoFinish : uint8 {
    None,
    ForceWin,
    ForceLose,
    Max,
};

