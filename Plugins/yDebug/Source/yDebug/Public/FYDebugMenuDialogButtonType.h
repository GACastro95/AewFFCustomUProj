#pragma once
#include "CoreMinimal.h"
#include "FYDebugMenuDialogButtonType.generated.h"

UENUM(BlueprintType)
enum class FYDebugMenuDialogButtonType : uint8 {
    OK,
    OK_Cancel,
    YES_NO,
    YES_NO_Cancel,
};

