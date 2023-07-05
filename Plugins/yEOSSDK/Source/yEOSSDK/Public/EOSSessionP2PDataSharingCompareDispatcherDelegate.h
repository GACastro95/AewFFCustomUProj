#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PDataSharingCompareDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PSynchronizedPacketBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FEOSSessionP2PDataSharingCompareDispatcher, UEOSSessionP2P*, EOSSessionP2P, UEOSSessionP2PSynchronizedPacketBase*, EOSSessionP2PSynchronizedPacketBaseForCurrent, UEOSSessionP2PSynchronizedPacketBase*, EOSSessionP2PSynchronizedPacketBaseForReply, const FString&, ProductUserID);

