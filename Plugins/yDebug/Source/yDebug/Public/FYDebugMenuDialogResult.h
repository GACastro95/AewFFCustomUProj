#pragma once
#include "CoreMinimal.h"
#include "FYDebugMenuDialogResult.generated.h"

UENUM(BlueprintType)
enum class FYDebugMenuDialogResult : uint8 {
    None,
    YES_OK,
    NO,
    Cancel,
};

