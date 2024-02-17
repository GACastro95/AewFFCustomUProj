#pragma once
#include "CoreMinimal.h"
#include "eSSLobbyState.generated.h"

UENUM(BlueprintType)
enum class eSSLobbyState : uint8 {
    eSSLobbyState_None,
    eSSLobbyState_LobbyCheck,
    eSSLobbyState_GameStart,
    eSSLobbyState_HotTestSetup,
    eSSLobbyState_HotPlayer,
    eSSLobbyState_END,
    eSSLobbyState_EmptyLobby,
    eSSLobbyState_MAX UMETA(Hidden),
};

