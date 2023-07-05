#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PEvent.generated.h"

UENUM(BlueprintType)
enum class EEOSSessionP2PEvent : uint8 {
    GetNatType,
    GetNatTypeErr,
    IncommingPlayer,
    ConnectedPlayer,
    DisconnectedPlayer,
    ReceivedPacket,
    ReceivedSynchronizedPacket,
    LatencyCheck,
    LatencyCheckErr,
    ClosedSocket,
    ClosedSocketErr,
    LeaveSession,
    HostMigration,
    HostMigration_Owner,
    AllPlayersLeaved,
};

