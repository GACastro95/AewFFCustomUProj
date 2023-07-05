#pragma once
#include "CoreMinimal.h"
#include "EOSCachedTransferReceivedDispatcherDelegate.generated.h"

class UEOSNatP2PBinary;
class UEOSNatP2PCachedTransfer;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSCachedTransferReceivedDispatcher, UEOSNatP2PCachedTransfer*, EOSNatP2PCachedTransfer, UEOSUserBase*, EOSUserBase, UEOSNatP2PBinary*, EOSNatP2PBinary);

