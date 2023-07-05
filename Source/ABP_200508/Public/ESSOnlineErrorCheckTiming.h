#pragma once
#include "CoreMinimal.h"
#include "ESSOnlineErrorCheckTiming.generated.h"

UENUM(BlueprintType)
enum class ESSOnlineErrorCheckTiming : uint8 {
    None,
    EnterSSMainMenu,
    StaySSMainMenu,
    Matchmaking,
    MatchStart,
};

