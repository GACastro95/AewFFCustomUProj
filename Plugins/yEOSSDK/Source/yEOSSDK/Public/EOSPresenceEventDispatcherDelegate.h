#pragma once
#include "CoreMinimal.h"
#include "EEOSPresenceEvent.h"
#include "EOSPresenceEventDispatcherDelegate.generated.h"

class UEOSPresenceBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSPresenceEventDispatcher, EEOSPresenceEvent, EOSPresenceEvent, UEOSPresenceBase*, EOSPresenceBase, const FString&, FriendEpicAccountID);

