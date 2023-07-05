#pragma once
#include "CoreMinimal.h"
#include "EErrDialogType.generated.h"

UENUM(BlueprintType)
enum class EErrDialogType : uint8 {
    EErrDialogType_Default,
    EErrDialogType_BackMenu,
    EErrDialogType_BackSSMenu,
    EErrDialogType_Retry,
    EErrDialogType_RetryBackMenu,
    RPT_00,
    None,
};

