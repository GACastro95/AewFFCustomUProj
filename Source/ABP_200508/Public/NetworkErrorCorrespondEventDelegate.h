#pragma once
#include "CoreMinimal.h"
#include "SSNetworkErrorInfo.h"
#include "NetworkErrorCorrespondEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FNetworkErrorCorrespondEvent, const FSSNetworkErrorInfo&, errInfo);

