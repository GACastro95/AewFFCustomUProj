#pragma once
#include "CoreMinimal.h"
#include "EWrestlerDataGamePlayFlag.generated.h"

UENUM(BlueprintType)
enum class EWrestlerDataGamePlayFlag : uint8 {
    None,
    NewFace,
    FinishedCareerMode,
};

