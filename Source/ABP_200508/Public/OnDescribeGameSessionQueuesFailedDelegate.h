#pragma once
#include "CoreMinimal.h"
#include "OnDescribeGameSessionQueuesFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDescribeGameSessionQueuesFailed, const FString&, ErrorMessage);

