#pragma once
#include "CoreMinimal.h"
#include "ItemPurchaseCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FItemPurchaseCompleteDelegate, bool, Successed);

