#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PDataSharingReceivedDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PSynchronizedPacketBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FEOSSessionP2PDataSharingReceivedDispatcher, UEOSSessionP2P*, EOSSessionP2P, UEOSSessionP2PSynchronizedPacketBase*, EOSSessionP2PSynchronizedPacketBaseForCurrent, UEOSSessionP2PSynchronizedPacketBase*, SessionP2PSynchronizedPacketBaseForReceivedAndReply, const FString&, ProductUserID, bool, Overwrite);

