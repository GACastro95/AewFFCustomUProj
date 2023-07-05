#pragma once
#include "CoreMinimal.h"
#include "FYDebugMenuNotifyType.generated.h"

UENUM(BlueprintType)
enum class FYDebugMenuNotifyType : uint8 {
    None,
    OnSetup,
    OnReset,
    OnClick,
    OnValueChanged,
};

