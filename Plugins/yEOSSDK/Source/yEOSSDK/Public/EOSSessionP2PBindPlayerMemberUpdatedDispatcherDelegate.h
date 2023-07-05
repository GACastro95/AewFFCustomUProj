#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PBindPlayerMemberUpdatedDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PMemberInfoPacket;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSSessionP2PBindPlayerMemberUpdatedDispatcher, UEOSSessionP2P*, EOSSessionP2P, UEOSSessionP2PMemberInfoPacket*, EOSSessionP2PMemberInfoPacket);

