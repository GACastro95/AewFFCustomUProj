#pragma once
#include "CoreMinimal.h"
#include "OnDescribeGameSessionQueuesSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnDescribeGameSessionQueuesSuccess, const TArray<FString>&, FleetARNs);

