#pragma once
#include "CoreMinimal.h"
#include "IntFilterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FIntFilterDelegate, const int32&, Value, bool&, Result);

