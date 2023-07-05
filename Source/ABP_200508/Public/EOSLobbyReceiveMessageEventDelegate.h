#pragma once
#include "CoreMinimal.h"
#include "EOSLobbyReceiveMessageEventDelegate.generated.h"

class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSLobbyReceiveMessageEvent, UEOSUserBase*, _User, const FString&, _DisplayName, const FString&, _Message);

