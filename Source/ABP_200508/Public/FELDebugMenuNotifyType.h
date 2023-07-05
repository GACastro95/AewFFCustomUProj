#pragma once
#include "CoreMinimal.h"
#include "FELDebugMenuNotifyType.generated.h"

UENUM(BlueprintType)
enum class FELDebugMenuNotifyType : uint8 {
    None,
    OnSetup,
    OnReset,
    OnClick,
    OnValueChanged,
};

