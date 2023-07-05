#pragma once
#include "CoreMinimal.h"
#include "ESSGameFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSGameFlowState : uint8 {
    None,
    BeforeInProgress,
    Initialize,
    Loading,
    Setup,
    Entrance,
    OpenGamePlayScreen,
    Description,
    Ready,
    GamePlay,
    AfterGamePlay,
    Exit,
    Max,
};

