#pragma once
#include "CoreMinimal.h"
#include "ECareerMessageWindowStatus.generated.h"

UENUM(BlueprintType)
enum class ECareerMessageWindowStatus : uint8 {
    Close,
    Open,
    Finish,
};

