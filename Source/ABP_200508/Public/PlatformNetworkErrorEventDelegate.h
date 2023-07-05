#pragma once
#include "CoreMinimal.h"
#include "ESSOnlineErrorType.h"
#include "SSPlatformNetworkData.h"
#include "PlatformNetworkErrorEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlatformNetworkErrorEvent, const FSSPlatformNetworkData&, errInfo, const ESSOnlineErrorType, errType);

