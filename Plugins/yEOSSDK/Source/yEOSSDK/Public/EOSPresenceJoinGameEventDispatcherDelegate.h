#pragma once
#include "CoreMinimal.h"
#include "EOSPresenceJoinGameEventDispatcherDelegate.generated.h"

class UEOSPresenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEOSPresenceJoinGameEventDispatcher, UEOSPresenceBase*, EOSPresenceBase, const FString&, SessionID, const FString&, SessionName, const FString&, ProductUserID);

