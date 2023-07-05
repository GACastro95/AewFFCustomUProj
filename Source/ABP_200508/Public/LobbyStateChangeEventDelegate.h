#pragma once
#include "CoreMinimal.h"
#include "eSSLobbyState.h"
#include "LobbyStateChangeEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLobbyStateChangeEvent, const eSSLobbyState, lobbyState);

