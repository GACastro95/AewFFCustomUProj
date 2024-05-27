#pragma once
#include "CoreMinimal.h"
#include "ESSClientFlowStateCategory.generated.h"

UENUM(BlueprintType)
enum class ESSClientFlowStateCategory : uint8 {
    None,
    BeforeGamePlay = 16,
    GamePlay = 32,
    ResultFlow = 64,
    AfterResult = 80,
    Closing = 112,
};

