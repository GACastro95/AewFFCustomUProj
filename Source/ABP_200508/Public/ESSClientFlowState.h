#pragma once
#include "CoreMinimal.h"
#include "ESSClientFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSClientFlowState : uint8 {
    None,
    BeforeGamePlay,
    GamePlay,
    Finish,
    VictoryRoyale,
    Result,
    WatchGame,
    WatchVictoryRoyale,
    Closing,
    Exit,
};

