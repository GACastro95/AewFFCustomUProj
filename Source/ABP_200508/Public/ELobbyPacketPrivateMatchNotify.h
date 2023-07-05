#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketPrivateMatchNotify.generated.h"

UENUM(BlueprintType)
enum class ELobbyPacketPrivateMatchNotify : uint8 {
    MatchCancel,
    MovePositionSelect,
    MoveWrestlerSelect,
    MatchStart,
    MatchStartCancel,
    MatchReady,
    MatchUnready,
    MatchUnready_Accept,
    MatchUnready_Reject,
    MatchCancelRequest,
    MoveMiniGameSelect,
    MoveNextMenu,
    MiniGameStartOwnerSelect,
    MiniGameEndOwnerSelect,
    MiniGameWaitReceiveStatus,
    MoveOnMainMenu,
    RequestResendCurrentWrestler,
    Test,
};

