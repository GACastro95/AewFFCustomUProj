#pragma once
#include "CoreMinimal.h"
#include "ESSWrestlerSelectState.generated.h"

UENUM(BlueprintType)
enum class ESSWrestlerSelectState : uint8 {
    ESSWrestlerSelectState_SelectWrestler,
    ESSWrestlerSelectState_SelectWrestlerType,
    ESSWrestlerSelectState_SelectWrestlerTypeView,
    ESSWrestlerSelectState_SelectWrestlerPreset,
    ESSWrestlerSelectState_DecisionWait,
    ESSWrestlerSelectState_Cancel,
    ESSWrestlerSelectState_End,
    ESSWrestlerSelectState_MAX UMETA(Hidden),
};

