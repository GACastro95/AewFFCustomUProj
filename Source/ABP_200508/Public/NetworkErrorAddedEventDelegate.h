#pragma once
#include "CoreMinimal.h"
#include "SSNetworkErrorInfo.h"
#include "NetworkErrorAddedEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkErrorAddedEvent, const FSSNetworkErrorInfo&, errInfo);

