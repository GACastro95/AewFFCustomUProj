#pragma once
#include "CoreMinimal.h"
#include "EEOSTitleStorageEvent.h"
#include "EOSTitleStorageProgress.h"
#include "EOSTitleStorageEventDispatcherDelegate.generated.h"

class UEOSTitleStorageBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSTitleStorageEventDispatcher, EEOSTitleStorageEvent, EEOSTitleStorageEvent, UEOSTitleStorageBase*, UEOSTitleStorageBase, const FEOSTitleStorageProgress&, EOSTitleStorageProgress);

