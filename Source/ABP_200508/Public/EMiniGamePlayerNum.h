#pragma once
#include "CoreMinimal.h"
#include "EMiniGamePlayerNum.generated.h"

UENUM(BlueprintType)
enum class EMiniGamePlayerNum : uint8 {
    Single,
    Two,
    Three,
    Four,
    Max,
};

