#pragma once
#include "CoreMinimal.h"
#include "EWrestlerDataObjectFlag.generated.h"

UENUM(BlueprintType)
enum class EWrestlerDataObjectFlag : uint8 {
    None,
    Ready,
    Unlocked,
    Editable = 0x4,
    Modify = 0x8,
    Disabled = 0x10,
    UsingCreateTeam = 0x20,
    UsingCareer = 0x40,
    SaveRequest = 0x80,
};

