#pragma once
#include "CoreMinimal.h"
#include "yEnDialogBoxChoices.generated.h"

UENUM(BlueprintType)
enum class yEnDialogBoxChoices : uint8 {
    Ok,
    Cancel,
    Yes,
    No,
    Back,
};

