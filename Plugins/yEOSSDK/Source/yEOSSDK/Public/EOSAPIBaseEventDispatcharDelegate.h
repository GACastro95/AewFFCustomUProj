#pragma once
#include "CoreMinimal.h"
#include "EEOSApiResult.h"
#include "EOSAPIBaseEventDispatcharDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAPIBaseEventDispatchar, bool, Success, EEOSApiResult, ApiResult);

