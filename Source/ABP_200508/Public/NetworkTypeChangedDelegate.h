#pragma once
#include "CoreMinimal.h"
#include "EELNetworkType.h"
#include "NetworkTypeChangedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkTypeChanged, EELNetworkType, NetworkType);

