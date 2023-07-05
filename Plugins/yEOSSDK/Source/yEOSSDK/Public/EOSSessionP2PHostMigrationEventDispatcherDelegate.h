#pragma once
#include "CoreMinimal.h"
#include "EEOSSessionHostMigrationEvent.h"
#include "EOSSessionP2PHostMigrationEventDispatcherDelegate.generated.h"

class UEOSSessionP2P;
class UEOSSessionP2PAFHostMigration;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSSessionP2PHostMigrationEventDispatcher, UEOSSessionP2P*, EOSSessionP2P, EEOSSessionHostMigrationEvent, EOSSessionHostMigrationEvent, UEOSSessionP2PAFHostMigration*, EOSSessionP2PAFHostMigration);

