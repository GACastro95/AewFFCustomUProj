#pragma once
#include "CoreMinimal.h"
#include "EEOSFriendEvent.h"
#include "EOSFriendEventDispatcherDelegate.generated.h"

class UEOSFriend;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSFriendEventDispatcher, EEOSFriendEvent, EOSFriendEvent, UEOSFriend*, EOSFriend, UEOSUserBase*, EOSFriendUser);

