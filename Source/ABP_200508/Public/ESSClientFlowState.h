#pragma once
#include "CoreMinimal.h"
#include "ESSClientFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSClientFlowState : uint8 {
    None,
    BeforeGamePlay = 16,
    GamePlay = 32,
    Battle,
    WatchTeam,
    WaitingFinish,
    WaitingRespawn,
    Finish = 64,
    VictoryRoyale,
    Result,
    WatchGame = 80,
    WatchVictoryRoyale,
    Closing = 112,
    Exit,
};

