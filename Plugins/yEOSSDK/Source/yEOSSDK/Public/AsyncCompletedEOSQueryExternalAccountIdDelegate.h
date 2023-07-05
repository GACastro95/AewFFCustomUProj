#pragma once
#include "CoreMinimal.h"
#include "EOSExternalAccountId.h"
#include "AsyncCompletedEOSQueryExternalAccountIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedEOSQueryExternalAccountId, bool, Success, const FEOSExternalAccountId&, ExternalAccountId);

