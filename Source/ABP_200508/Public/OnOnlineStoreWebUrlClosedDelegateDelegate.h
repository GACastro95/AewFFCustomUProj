#pragma once
#include "CoreMinimal.h"
#include "OnOnlineStoreWebUrlClosedDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FOnOnlineStoreWebUrlClosedDelegate, const FString&, OutReason);

