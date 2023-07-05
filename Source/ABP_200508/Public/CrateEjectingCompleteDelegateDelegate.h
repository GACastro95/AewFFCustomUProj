#pragma once
#include "CoreMinimal.h"
#include "CrateEjectingCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCrateEjectingCompleteDelegate, bool, Successed);

