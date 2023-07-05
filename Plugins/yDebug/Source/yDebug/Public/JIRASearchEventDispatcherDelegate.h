#pragma once
#include "CoreMinimal.h"
#include "EJIRAAccessorEvent.h"
#include "JIRASearchResultInfo.h"
#include "JIRASearchEventDispatcherDelegate.generated.h"

class UYJIRAAccessor;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FJIRASearchEventDispatcher, EJIRAAccessorEvent, JIRAAccessorEvent, UYJIRAAccessor*, JIRAAccessor, const FJIRASearchResultInfo&, JIRASearchResultInfo);

