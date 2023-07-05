#pragma once
#include "CoreMinimal.h"
#include "StringFilterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FStringFilterDelegate, const FString&, Value, bool&, Result);

