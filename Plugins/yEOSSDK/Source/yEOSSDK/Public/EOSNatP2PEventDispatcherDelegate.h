#pragma once
#include "CoreMinimal.h"
#include "EEOSNatP2PEvent.h"
#include "EOSNatP2PEventDispatcherDelegate.generated.h"

class UEOSNatP2P;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSNatP2PEventDispatcher, EEOSNatP2PEvent, EOSP2PEvent, UEOSNatP2P*, EOSNatP2P, UEOSUserBase*, EOSUserBase);

