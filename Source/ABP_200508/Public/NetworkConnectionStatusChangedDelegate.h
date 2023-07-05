#pragma once
#include "CoreMinimal.h"
#include "EELNetworkConnectionStatus.h"
#include "EELServerType.h"
#include "NetworkConnectionStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FNetworkConnectionStatusChanged, EELNetworkConnectionStatus, NetworkConnectionStatus, EELServerType, ServerType);

