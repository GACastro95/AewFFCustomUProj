#pragma once
#include "CoreMinimal.h"
#include "EELBeltAttachPosition.generated.h"

UENUM(BlueprintType)
enum class EELBeltAttachPosition : uint8 {
    None,
    Waist,
    Body,
    LeftShoulder,
    RightShoulder,
    Chest,
};

