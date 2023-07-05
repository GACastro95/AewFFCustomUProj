#pragma once
#include "CoreMinimal.h"
#include "EEOSAuthEvent.h"
#include "EOSAuthEventDispatcherDelegate.generated.h"

class UEOSAuth;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAuthEventDispatcher, EEOSAuthEvent, EOSAuthEvent, UEOSAuth*, EOSAuth);

