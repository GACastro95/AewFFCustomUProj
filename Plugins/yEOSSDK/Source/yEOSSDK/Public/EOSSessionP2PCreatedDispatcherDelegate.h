#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PCreatedDispatcherDelegate.generated.h"

class UEOSSession;
class UEOSSessionInfo;
class UEOSSessionP2P;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionP2PCreatedDispatcher, UEOSSession*, EOSSession, UEOSSessionInfo*, EOSSessionInfo, UEOSSessionP2P*, EOSSessionP2P);

