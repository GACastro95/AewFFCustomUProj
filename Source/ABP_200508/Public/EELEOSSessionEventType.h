#pragma once
#include "CoreMinimal.h"
#include "EELEOSSessionEventType.generated.h"

UENUM(BlueprintType)
enum class EELEOSSessionEventType : uint8 {
    SessionSearch,
    SessionSearchResult,
    SessionSearchEnd,
    SessionSearchCancel,
    GameSessionCreated,
    SessionCreate,
    SessionDestroyed,
    SessionJoin,
    SessionLeave,
    SessionGameStart,
    SessionGameEnd,
    Start,
    End,
    UpdateSessionMember,
    ReceivePlayerData,
    ReceiveWrestlerData,
    ReceiveArenaData,
    ReceiveMatchRuleData,
    UpdatePlayerStateData,
    Disconnected,
    ReceiveInvite,
    Release,
};

