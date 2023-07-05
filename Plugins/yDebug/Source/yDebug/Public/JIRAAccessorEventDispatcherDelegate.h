#pragma once
#include "CoreMinimal.h"
#include "EJIRAAccessorEvent.h"
#include "JIRAAccessorEventDispatcherDelegate.generated.h"

class UYJIRAAccessor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FJIRAAccessorEventDispatcher, EJIRAAccessorEvent, JIRAAccessorEvent, UYJIRAAccessor*, JIRAAccessor, bool, Result);

