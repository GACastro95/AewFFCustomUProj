#pragma once
#include "CoreMinimal.h"
#include "ESSClientFlowState.generated.h"

UENUM(BlueprintType)
enum class ESSClientFlowState : uint8 {
    None,
    BeforeGamePlay = 0x10,
    GamePlay = 0x20,
    Battle,
    WatchTeam,
    WaitingFinish,
    WaitingRespawn,
    Finish = 0x40,
    VictoryRoyale,
    Result,
    WatchGame = 0x50,
    WatchVictoryRoyale,
    Closing = 0x70,
    Exit,
};

