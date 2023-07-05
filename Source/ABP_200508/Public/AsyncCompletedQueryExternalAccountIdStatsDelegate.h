#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedQueryExternalAccountIdStatsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedQueryExternalAccountIdStats, const FString&, ProductUserID, const FString&, ExternalAccountId);

