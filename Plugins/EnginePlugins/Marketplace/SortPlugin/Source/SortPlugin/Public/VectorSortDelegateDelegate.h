#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "VectorSortDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_ThreeParams(FVectorSortDelegate, const FVector&, A, const FVector&, B, bool&, Result);

