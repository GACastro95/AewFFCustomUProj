#pragma once
#include "CoreMinimal.h"
#include "ESSHitStopType.generated.h"

UENUM(BlueprintType)
enum class ESSHitStopType : uint8 {
    None,
    Weak,
    Medium,
    Strong,
};

