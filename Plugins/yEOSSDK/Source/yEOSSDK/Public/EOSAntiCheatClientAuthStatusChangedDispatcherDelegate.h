#pragma once
#include "CoreMinimal.h"
#include "EEOSAntiCheatAuthStatus.h"
#include "EOSAntiCheatClientAuthStatusChangedDispatcherDelegate.generated.h"

class UEOSIDs;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAntiCheatClientAuthStatusChangedDispatcher, UEOSIDs*, UserId, EEOSAntiCheatAuthStatus, AuthStatus);

