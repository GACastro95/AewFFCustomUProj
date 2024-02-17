#pragma once
#include "CoreMinimal.h"
#include "ESSClientFlowStateCategory.generated.h"

UENUM(BlueprintType)
enum class ESSClientFlowStateCategory : uint8 {
    None,
    BeforeGamePlay = 0x10,
    GamePlay = 0x20,
    ResultFlow = 0x40,
    AfterResult = 0x50,
    Closing = 0x70,
};

