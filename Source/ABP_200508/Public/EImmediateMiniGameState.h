#pragma once
#include "CoreMinimal.h"
#include "EImmediateMiniGameState.generated.h"

UENUM(BlueprintType)
enum class EImmediateMiniGameState : uint8 {
    None,
    HomeRunDerby_SkipButter,
    HomeRunDerby_SkipToResult,
    HomeRunDerby_SkipToNextInning,
    ObjectCount_ChangeCamera,
    MiniGame_Localize,
    MiniGame_Restart,
    MiniGame_SkipToResult,
    MiniGame_Pause,
};

