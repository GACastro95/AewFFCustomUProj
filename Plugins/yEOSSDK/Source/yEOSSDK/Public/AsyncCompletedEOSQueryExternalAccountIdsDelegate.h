#pragma once
#include "CoreMinimal.h"
#include "EOSExternalAccountId.h"
#include "AsyncCompletedEOSQueryExternalAccountIdsDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedEOSQueryExternalAccountIds, bool, Success, const TArray<FEOSExternalAccountId>&, ExternalAccountIds);

