#pragma once
#include "CoreMinimal.h"
#include "NameFilterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FNameFilterDelegate, const FName&, Value, bool&, Result);

