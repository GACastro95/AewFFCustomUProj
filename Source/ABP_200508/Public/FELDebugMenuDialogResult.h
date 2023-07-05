#pragma once
#include "CoreMinimal.h"
#include "FELDebugMenuDialogResult.generated.h"

UENUM(BlueprintType)
enum class FELDebugMenuDialogResult : uint8 {
    None,
    YES_OK,
    NO,
    Cancel,
};

