#pragma once
#include "CoreMinimal.h"
#include "EELEOSLobbyDebugEventType.h"
#include "EOSLobbyEventNotifyDelegate.generated.h"

class UEOSCommunityInfoBase;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEOSLobbyEventNotify, EELEOSLobbyDebugEventType, EventType, const FString&, _Message, UEOSUserBase*, _User, UEOSCommunityInfoBase*, _CommunityInfoBase);

