#pragma once
#include "CoreMinimal.h"
#include "ECareerStartSequenceState.generated.h"

UENUM(BlueprintType)
enum class ECareerStartSequenceState : uint8 {
    None,
    GameStart,
    WrestlerSelect,
};

