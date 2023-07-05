#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyMiniGameSteps.generated.h"

UENUM(BlueprintType)
enum class EELEOSLobbyMiniGameSteps : uint8 {
    None,
    Setup_WaitForReceiveMiniGameInfo,
    Setup_End,
    Select_Start,
    Select_End,
};

