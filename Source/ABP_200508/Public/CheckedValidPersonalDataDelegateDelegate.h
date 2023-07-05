#pragma once
#include "CoreMinimal.h"
#include "CheckedValidPersonalDataDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_OneParam(FCheckedValidPersonalDataDelegate, bool, ValidParam);

