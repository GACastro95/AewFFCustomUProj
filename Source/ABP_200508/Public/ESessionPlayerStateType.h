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
    Timeout,
    Num_0 = None,
    Num_1 = Invalid,
    Num_2 = Busy,
    Num_3 = Ready,
    Num_4 = Skip,
    Num_5 = Wait,
    Num_6 = Quit,
    Num_7 = Timeout,
    Num_8,
    Num_9,
};

