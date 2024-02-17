#pragma once
#include "CoreMinimal.h"
#include "eSSWebRequestErrorDialogType.generated.h"

UENUM(BlueprintType)
enum class eSSWebRequestErrorDialogType : uint8 {
    eSSWebRequestErrorDialogType_Notice,
    eSSWebRequestErrorDialogType_Caution,
    eSSWebRequestErrorDialogType_Help,
    eSSWebRequestErrorDialogType_MAX UMETA(Hidden),
};

