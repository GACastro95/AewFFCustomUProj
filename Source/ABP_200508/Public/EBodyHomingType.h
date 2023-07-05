#pragma once
#include "CoreMinimal.h"
#include "EBodyHomingType.generated.h"

UENUM(BlueprintType)
enum class EBodyHomingType : uint8 {
    None,
    NoTime,
    Fast,
    Normal,
    LittleSlow,
    Slow,
    QuickStart,
    Attack,
};

