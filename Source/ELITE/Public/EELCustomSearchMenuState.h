#pragma once
#include "CoreMinimal.h"
#include "EELCustomSearchMenuState.generated.h"

UENUM(BlueprintType)
enum class EELCustomSearchMenuState : uint8 {
    SearchSelect,
    CAW_Item,
    CAM_Item,
    Purchase,
    CAM_ItemSelect,
    CAM_ColorPallet,
};

