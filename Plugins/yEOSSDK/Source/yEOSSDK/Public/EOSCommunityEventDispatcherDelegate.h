#pragma once
#include "CoreMinimal.h"
#include "EEOSCommunityEvent.h"
#include "EOSCommunityEventDispatcherDelegate.generated.h"

class UEOSCommunityBase;
class UEOSCommunityInfoBase;
class UEOSCommunityUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEOSCommunityEventDispatcher, EEOSCommunityEvent, EOSCommunityEvent, UEOSCommunityBase*, EOSCommunityBase, UEOSCommunityInfoBase*, EOSCommunityInfo, UEOSCommunityUserBase*, EOSLobbyUser);

