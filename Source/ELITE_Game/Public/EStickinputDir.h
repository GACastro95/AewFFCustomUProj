#pragma once
#include "CoreMinimal.h"
#include "EStickinputDir.generated.h"

UENUM(BlueprintType)
enum class EStickinputDir : uint8 {
    None,
    Up,
    Down,
    Left,
    Right,
};

