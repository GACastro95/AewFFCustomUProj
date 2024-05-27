#pragma once
#include "CoreMinimal.h"
#include "OnOnlineStoreUIClosedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnOnlineStoreUIClosedDelegate, bool, Successed);

