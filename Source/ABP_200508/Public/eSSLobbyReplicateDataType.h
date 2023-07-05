#pragma once
#include "CoreMinimal.h"
#include "eSSLobbyReplicateDataType.generated.h"

UENUM(BlueprintType)
enum class eSSLobbyReplicateDataType : uint8 {
    eSSLobbyReplicateDataType_LobbyState,
    eSSLobbyReplicateDataType_StartTime,
    eSSLobbyReplicateDataType_CountPlayer,
    eSSLobbyReplicateDataType_CountNPC,
    eSSLobbyReplicateDataType_LobbyData,
};

