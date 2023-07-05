#pragma once
#include "CoreMinimal.h"
#include "ELobbyPacketNotifyType.generated.h"

UENUM(BlueprintType)
enum class ELobbyPacketNotifyType : uint8 {
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
    MatchLeave,
    MoveMiniGameSelect,
    MoveNextMenu,
    MiniGameStartOwnerSelect,
    MiniGameEndOwnerSelect,
    MiniGameWaitReceiveStatus,
    MoveOnMainMenu,
    RequestResendCurrentWrestler,
    Test,
};

