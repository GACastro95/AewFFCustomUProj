#pragma once
#include "CoreMinimal.h"
#include "EMiniGameDebugPitcherFlags.generated.h"

UENUM(BlueprintType)
enum class EMiniGameDebugPitcherFlags : uint8 {
    RadioButton_None,
    RadioButton_StraightUp,
    RadioButton_StraightDown,
    RadioButton_Changeup,
    RadioButton_Slowball,
};

