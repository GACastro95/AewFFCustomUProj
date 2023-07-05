#pragma once
#include "CoreMinimal.h"
#include "Request_ErrSetupData.h"
#include "RequestErrorDialogEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FRequestErrorDialogEvent, const bool, isYES, const FRequest_ErrSetupData, errDialogData);

