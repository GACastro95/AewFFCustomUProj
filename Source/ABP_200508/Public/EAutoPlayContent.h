#pragma once
#include "CoreMinimal.h"
#include "EAutoPlayContent.generated.h"

UENUM(BlueprintType)
enum class EAutoPlayContent : uint8 {
    Widget,
    Pad,
    Info,
    AutoPlayContentMax,
};

