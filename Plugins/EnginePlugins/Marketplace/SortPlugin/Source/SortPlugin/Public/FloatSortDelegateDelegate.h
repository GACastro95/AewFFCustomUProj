#pragma once
#include "CoreMinimal.h"
#include "FloatSortDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFloatSortDelegate, const float&, A, const float&, B, bool&, Result);

