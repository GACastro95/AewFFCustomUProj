#pragma once
#include "CoreMinimal.h"
#include "eSSLobbyReplicateDataType.h"
#include "LobbyDataReplicateEventDelegate.generated.h"

class UELSSGameLobby;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLobbyDataReplicateEvent, const eSSLobbyReplicateDataType, lobbyState, const UELSSGameLobby*, targetLobby);

