#pragma once
#include "CoreMinimal.h"
#include "ETrainingReversalKind.h"
#include "TrainingReversalKindEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FTrainingReversalKindEvent, ETrainingReversalKind, Kind);

