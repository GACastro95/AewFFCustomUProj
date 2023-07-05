#pragma once
#include "CoreMinimal.h"
#include "EWrestlerPresetButtonType.generated.h"

UENUM(BlueprintType)
enum class EWrestlerPresetButtonType : uint8 {
    EWrestlerPresetButtonType_Preset,
    EWrestlerPresetButtonType_Start,
    EWrestlerPresetButtonType_NUM,
};

