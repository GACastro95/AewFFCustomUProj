#pragma once
#include "CoreMinimal.h"
#include "ESSAbilitySlotType.generated.h"

UENUM(BlueprintType)
enum class ESSAbilitySlotType : uint8 {
    None,
    ItemBox,
    OpponentRader,
    SafeFeild,
    XRaySpecs,
    Max,
};

