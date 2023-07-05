#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyEventType.h"
#include "EOSLobbyEvent2Delegate.generated.h"

class UEOSCommunityInfoBase;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSLobbyEvent2, EELEOSLobbyEventType, EventType, UEOSUserBase*, _User, UEOSCommunityInfoBase*, _CommunityInfoBase);

