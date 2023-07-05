#pragma once
#include "CoreMinimal.h"
#include "eSSModeAPIType.generated.h"

UENUM(BlueprintType)
enum class eSSModeAPIType : uint8 {
    eSSModeAPIType_None,
    eSSModeAPIType_FlexMatchStart,
    eSSModeAPIType_FlexMatchStatus,
    eSSModeAPIType_FlexMatchCancel,
};

