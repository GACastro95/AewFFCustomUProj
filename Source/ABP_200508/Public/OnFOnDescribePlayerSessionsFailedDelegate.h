#pragma once
#include "CoreMinimal.h"
#include "OnFOnDescribePlayerSessionsFailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFOnDescribePlayerSessionsFailed, const FString&, ErrorMessage);

