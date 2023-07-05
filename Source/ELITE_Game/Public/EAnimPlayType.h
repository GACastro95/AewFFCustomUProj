#pragma once
#include "CoreMinimal.h"
#include "EAnimPlayType.generated.h"

UENUM(BlueprintType)
enum class EAnimPlayType : uint8 {
    OneShot,
    Start,
    Loop,
    End,
};

