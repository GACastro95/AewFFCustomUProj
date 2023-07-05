#pragma once
#include "CoreMinimal.h"
#include "ProductUserIdMap.h"
#include "AsyncCompletedEOSActionQueryProductUserIdDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedEOSActionQueryProductUserId, bool, Success, const FProductUserIdMap&, ProductUserIdMap);

