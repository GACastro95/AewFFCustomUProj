#pragma once
#include "CoreMinimal.h"
#include "UpdateItemQuantityCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FUpdateItemQuantityCompleteDelegate, bool, Successed);

