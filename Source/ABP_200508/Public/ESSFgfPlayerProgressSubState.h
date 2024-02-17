#pragma once
#include "CoreMinimal.h"
#include "ESSFgfPlayerProgressSubState.generated.h"

UENUM(BlueprintType)
enum class ESSFgfPlayerProgressSubState : uint8 {
    None,
    Standby,
    OpenScreen,
    Completed,
};

