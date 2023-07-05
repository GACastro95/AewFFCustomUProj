#pragma once
#include "CoreMinimal.h"
#include "ExternalAccountIdMap.h"
#include "AsyncCompletedEOSQueryExternalAccountIdMapDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedEOSQueryExternalAccountIdMap, bool, Success, const FExternalAccountIdMap&, ExternalAccountIdMap);

