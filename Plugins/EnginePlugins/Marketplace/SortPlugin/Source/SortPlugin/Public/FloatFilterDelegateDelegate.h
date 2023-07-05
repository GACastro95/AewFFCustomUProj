#pragma once
#include "CoreMinimal.h"
#include "FloatFilterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FFloatFilterDelegate, const float&, Value, bool&, Result);

