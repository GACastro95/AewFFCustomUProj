#pragma once
#include "CoreMinimal.h"
#include "EKeyConfig_KeyType_C.generated.h"

UENUM(BlueprintType)
enum class EKeyConfig_KeyType_C : uint8 {
    LSTick,
    RSTick,
    D_Pad,
    A,
    B,
    Y,
    X,
    RB,
    LB,
    RT,
    LT,
    R3,
    L3,
    Start,
    Back,
    EKeyConfig_KeyType_MAX UMETA(Hidden),
};

