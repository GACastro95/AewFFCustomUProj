#pragma once
#include "CoreMinimal.h"
#include "EOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PLatencyInfoPacket;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionP2PHostMigrationUpdatedLatencyInfoDispatcher, UEOSSessionP2P*, EOSSessionP2P, UEOSSessionP2PLatencyInfoPacket*, EOSSessionP2PLatencyInfoPacket, bool, IsHost);

