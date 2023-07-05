#pragma once
#include "CoreMinimal.h"
#include "IntSortDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FIntSortDelegate, const int32&, A, const int32&, B, bool&, Result);

