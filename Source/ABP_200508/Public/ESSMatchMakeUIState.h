#pragma once
#include "CoreMinimal.h"
#include "ESSMatchMakeUIState.generated.h"

UENUM(BlueprintType)
enum class ESSMatchMakeUIState : uint8 {
    Default,
    Matching,
    MatchingWithCancel,
    Canceling,
    ConnectToMatch,
};

