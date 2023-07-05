#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorFilterDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FVectorFilterDelegate, const FVector&, Value, bool&, Result);

