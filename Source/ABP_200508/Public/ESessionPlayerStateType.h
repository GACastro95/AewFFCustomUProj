#pragma once
#include "CoreMinimal.h"
#include "ESessionPlayerStateType.generated.h"

UENUM(BlueprintType)
enum class ESessionPlayerStateType : uint8 {
    None,
    Invalid,
    Busy,
    Ready,
    Skip,
    Wait,
    Quit,
};

