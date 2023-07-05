#pragma once
#include "CoreMinimal.h"
#include "EnPreviewInputMode.generated.h"

UENUM(BlueprintType)
enum class EnPreviewInputMode : uint8 {
    InputEnabled,
    KeyboardNavigationEnabled,
    GamepadNavigationEnabled,
    KeyboardInputShared,
    GamepadInputShared,
    MouseInputShared,
    MAX,
};

