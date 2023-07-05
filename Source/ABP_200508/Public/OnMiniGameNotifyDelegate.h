#pragma once
#include "CoreMinimal.h"
#include "OnMiniGameNotifyDelegate.generated.h"

class UEOSUserBase;
class ULobbyPacketPrivateMatchNotify;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FOnMiniGameNotify, UEOSUserBase*, Owner, ULobbyPacketPrivateMatchNotify*, Notify);

