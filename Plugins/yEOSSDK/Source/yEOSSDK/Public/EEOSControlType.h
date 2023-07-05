#pragma once
#include "CoreMinimal.h"
#include "EEOSControlType.generated.h"

UENUM(BlueprintType)
enum class EEOSControlType : uint8 {
    Unknown,
    MouseKeyboard,
    GamePad,
    Touch,
};

