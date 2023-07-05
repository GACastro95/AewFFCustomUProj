#pragma once
#include "CoreMinimal.h"
#include "Request_ErrSetupData.h"
#include "SSGameMatchMakeErrorEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FSSGameMatchMakeErrorEvent, const bool, isDialogYES, const FRequest_ErrSetupData, errDialogData);

