#pragma once
#include "CoreMinimal.h"
#include "EELNetworkStatus.h"
#include "NetworkStatusChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkStatusChanged, EELNetworkStatus, NetworkStatus);

