#pragma once
#include "CoreMinimal.h"
#include "ESSMainMenuFlowStateCategory.generated.h"

UENUM(BlueprintType)
enum class ESSMainMenuFlowStateCategory : uint8 {
    BeforeInitialize,
    Setup = 0x10,
    Opening = 0x20,
    OnlineSetup = 0x30,
    Menu = 0x40,
    Closing = 0x70,
};

