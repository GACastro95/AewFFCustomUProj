#pragma once
#include "CoreMinimal.h"
#include "EELEOSApiType.generated.h"

UENUM(BlueprintType)
enum class EELEOSApiType : uint8 {
    None,
    Achievements,
    AntiCheat,
    Connect,
    Leaderboards,
    Lobby,
    P2P,
    Platform,
    PlayerDataStorage,
    Reports,
    Sanctions,
    Sessions,
    Stats,
    TitleStorage,
    Voice,
    Login,
};

