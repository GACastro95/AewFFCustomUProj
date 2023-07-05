#pragma once
#include "CoreMinimal.h"
#include "GLAPI_ErrorData.h"
#include "OnErrorDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnError, const FGLAPI_ErrorData&, err);

