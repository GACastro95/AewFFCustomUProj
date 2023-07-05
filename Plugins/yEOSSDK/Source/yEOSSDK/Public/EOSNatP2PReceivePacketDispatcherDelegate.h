#pragma once
#include "CoreMinimal.h"
#include "EOSNatP2PReceivePacketDispatcherDelegate.generated.h"

class UEOSNatP2P;
class UEOSNatP2PBinary;
class UEOSUserBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSNatP2PReceivePacketDispatcher, UEOSNatP2P*, EOSNatP2P, UEOSUserBase*, EOSUserBase, UEOSNatP2PBinary*, EOSNatP2PBinary);

