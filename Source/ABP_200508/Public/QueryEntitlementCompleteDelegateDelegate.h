#pragma once
#include "CoreMinimal.h"
#include "QueryEntitlementCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FQueryEntitlementCompleteDelegate, bool, Successed);

