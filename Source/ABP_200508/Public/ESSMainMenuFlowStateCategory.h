#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuFlowStateCategory.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuFlowStateCategory : uint8 {
    BeforeInitialize,
    Setup = 16,
    Opening = 32,
    OnlineSetup = 48,
    Menu = 64,
    Closing = 112,
};

