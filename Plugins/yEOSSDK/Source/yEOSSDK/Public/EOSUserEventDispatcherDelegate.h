#pragma once
#include "CoreMinimal.h"
#include "EEOSUserEvent.h"
#include "EOSUserEventDispatcherDelegate.generated.h"

class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSUserEventDispatcher, EEOSUserEvent, EOSUserEvent, UEOSUserBase*, EOSUserBase);

