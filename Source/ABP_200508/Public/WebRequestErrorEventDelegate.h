#pragma once
#include "CoreMinimal.h"
#include "eSSRequestResultType.h"
#include "WebRequestErrorEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FWebRequestErrorEvent, const int32, responseCode, const FString&, responseData, const FString&, apiUniqueID, eSSRequestResultType, resultType);

