#pragma once
#include "CoreMinimal.h"
#include "ESSAI_FgfOffenseRole.generated.h"

UENUM(BlueprintType)
enum class ESSAI_FgfOffenseRole : uint8 {
    None,
    BallHolder,
    PassReceiverL,
    PassReceiverR,
    Partisan,
};

