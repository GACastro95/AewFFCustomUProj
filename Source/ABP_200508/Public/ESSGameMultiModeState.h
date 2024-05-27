#pragma once
#include "CoreMinimal.h"
#include "ESSGameMultiModeState.generated.h"

UENUM(BlueprintType)
enum class ESSGameMultiModeState : uint8 {
    EGameMultiModeState_None,
    EGameMultiModeState_Match,
    EGameMultiModeState_LobbyEnd,
    EGameMultiModeState_Prepare,
    EGameMultiModeState_Game,
    EGameMultiModeState_End,
};

