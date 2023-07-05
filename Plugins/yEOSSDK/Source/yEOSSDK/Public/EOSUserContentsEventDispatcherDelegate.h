#pragma once
#include "CoreMinimal.h"
#include "EEOSUserContentsEvent.h"
#include "EOSUserContentProgress.h"
#include "EOSUserContentsEventDispatcherDelegate.generated.h"

class UEOSUserContentsBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSUserContentsEventDispatcher, EEOSUserContentsEvent, EOSUserContentsEvent, UEOSUserContentsBase*, EOSUserContentsBase, const FEOSUserContentProgress&, EOSUserContentProgress);

