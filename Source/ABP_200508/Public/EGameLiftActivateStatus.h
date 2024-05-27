#pragma once
#include "CoreMinimal.h"
#include "EGameLiftActivateStatus.generated.h"

UENUM(BlueprintType)
enum class EGameLiftActivateStatus : uint8 {
    eACTIVATE_Success,
    eACTIVATE_NoGameLift,
    eACTIVATE_NoSuccessCallback,
    eACTIVATE_NoFailCallback,
};

