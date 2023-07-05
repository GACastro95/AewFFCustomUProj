#pragma once
#include "CoreMinimal.h"
#include "EEOSAttrJudgeType.generated.h"

UENUM(BlueprintType)
enum class EEOSAttrJudgeType : uint8 {
    Equal,
    NotEqual,
    Greater,
    GreaterEqual,
    Less,
    LessEqual,
    Distance,
    AnyOf,
    NotAnyOf,
};

