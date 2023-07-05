#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionP2PEvent.h"
#include "EOSSessionP2PEventDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionUserPacketMap;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionP2PEventDispatcher, EEOSSessionP2PEvent, EOSSessionP2PEvent, UEOSSessionP2P*, EOSSessionP2P, UEOSSessionUserPacketMap*, EOSSessionUserPacketMap);

