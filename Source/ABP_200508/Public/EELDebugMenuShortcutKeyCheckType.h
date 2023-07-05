#pragma once
#include "CoreMinimal.h"
#include "EELDebugMenuShortcutKeyCheckType.generated.h"

UENUM(BlueprintType)
enum class EELDebugMenuShortcutKeyCheckType : uint8 {
    KeyDown,
    LongPress_0_5sec,
    LongPress_1sec,
    LongPress_1_5sec,
    LongPress_2sec,
};

