#pragma once
#include "CoreMinimal.h"
#include "ESSStationalCameraBaseTransformMode.generated.h"

UENUM(BlueprintType)
enum class ESSStationalCameraBaseTransformMode : uint8 {
    Continue,
    Owner,
    OwnerInitial,
    Receiver,
    ReceiverInitial,
};

