#pragma once
#include "CoreMinimal.h"
#include "EMomentumStateType.generated.h"

UENUM(BlueprintType)
enum class EMomentumStateType : uint8 {
    Neutral,
    Excite,
    StockSpecial,
    Special,
    Calm,
    Danger,
};

