#pragma once
#include "CoreMinimal.h"
#include "eSSRequestResultType.h"
#include "WebRequestEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FWebRequestEvent, const int32, responseCode, const FString&, responseData, eSSRequestResultType, resultType);

