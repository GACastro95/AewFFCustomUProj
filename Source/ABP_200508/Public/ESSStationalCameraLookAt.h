#pragma once
#include "CoreMinimal.h"
#include "ESSStationalCameraLookAt.generated.h"

UENUM(BlueprintType)
enum class ESSStationalCameraLookAt : uint8 {
    None,
    Attacker,
    Receiver,
    Both,
    Max,
};

