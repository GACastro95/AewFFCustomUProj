#pragma once
#include "CoreMinimal.h"
#include "FELDebugMenuDialogButtonType.generated.h"

UENUM(BlueprintType)
enum class FELDebugMenuDialogButtonType : uint8 {
    OK,
    OK_Cancel,
    YES_NO,
    YES_NO_Cancel,
};

