#pragma once
#include "CoreMinimal.h"
#include "EELEOSDisconnectReason.h"
#include "EOSDisconnectEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSDisconnectEvent, EELEOSDisconnectReason, Reason);

