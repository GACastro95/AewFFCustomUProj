#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PDestroyDispatcherDelegate.generated.h"

class UEOSSession;
class UEOSSessionInfo;
class UEOSSessionP2P;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionP2PDestroyDispatcher, UEOSSession*, EOSSession, UEOSSessionInfo*, EOSSessionInfo, UEOSSessionP2P*, EOSSessionP2P);

