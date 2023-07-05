#pragma once
#include "CoreMinimal.h"
#include "EYDebugMenuShortcutKeyCheckType.generated.h"

UENUM(BlueprintType)
enum class EYDebugMenuShortcutKeyCheckType : uint8 {
    KeyDown,
    LongPress_0_5sec,
    LongPress_1sec,
    LongPress_1_5sec,
    LongPress_2sec,
};

