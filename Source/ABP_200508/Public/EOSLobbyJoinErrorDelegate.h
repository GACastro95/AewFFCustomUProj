#pragma once
#include "CoreMinimal.h"
#include "LobbyInvite.h"
#include "ELobbyInviteError.h"
#include "EOSLobbyJoinErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSLobbyJoinError, FLobbyInvite, InLobbyInvite, ELobbyInviteError, OutReason);

