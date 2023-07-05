#pragma once
#include "CoreMinimal.h"
#include "EELEOSEventResult.h"
#include "EELEOSEventType.h"
#include "EOSEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSEvent, EELEOSEventType, EventType, EELEOSEventResult, EventResult);

