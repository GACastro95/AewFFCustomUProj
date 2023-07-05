#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionGameEventType.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionGameEventType : uint8 {
    None,
    DisconnectedHost,
    WaitingForJoinPlayres,
    RegisteredAllMembers,
    WaitingClientForReady,
    ReadyAllClients,
    WaitingForMemberInfo,
    WaitingForReceivedAPackets,
    SynchronizedAllPackets,
    QuitGame,
    ResendRequestPlayerData,
};

