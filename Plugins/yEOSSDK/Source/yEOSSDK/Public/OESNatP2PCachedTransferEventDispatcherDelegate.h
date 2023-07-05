#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PCachedTransferEvent.h"
#include "OESNatP2PCachedTransferEventDispatcherDelegate.generated.h"

class UEOSNatP2PCachedTransfer;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FOESNatP2PCachedTransferEventDispatcher, EEOSNatP2PCachedTransferEvent, EOSP2PCachedTransferEvent, UEOSNatP2PCachedTransfer*, EOSNatP2PCachedTransfer, UEOSUserBase*, EOSUserBase);

