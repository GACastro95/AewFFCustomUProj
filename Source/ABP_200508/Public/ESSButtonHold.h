#pragma once
#include "CoreMinimal.h"
#include "ESSButtonHold.generated.h"

UENUM(BlueprintType)
enum class ESSButtonHold : uint8 {
    Punch,
    Kick,
    Grapple,
    Interact,
    Max,
};

