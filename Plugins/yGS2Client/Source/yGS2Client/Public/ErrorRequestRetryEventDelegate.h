#pragma once
#include "CoreMinimal.h"
#include "Request_ErrSetupData.h"
#include "ErrorRequestRetryEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FErrorRequestRetryEvent, const FRequest_ErrSetupData&, apiErrData, const int32, errRetryCnt);

