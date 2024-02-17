#pragma once
#include "CoreMinimal.h"
#include "ESSFgfRoundFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSFgfRoundFlowState : uint8 {
    None,
    Initialize,
    RoundSetup,
    RoundOpening,
    RoundPlaying,
    RoundFinished,
    RoundClosing,
    Finished,
};

