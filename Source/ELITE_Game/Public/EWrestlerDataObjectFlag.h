#pragma once
#include "CoreMinimal.h"
#include "EWrestlerDataObjectFlag.generated.h"

UENUM(BlueprintType)
enum class EWrestlerDataObjectFlag : uint8 {
    None,
    Ready,
    Unlocked,
    Editable = 4,
    Modify = 8,
    Disabled = 16,
    UsingCreateTeam = 32,
    UsingCareer = 64,
    SaveRequest = 128,
};

