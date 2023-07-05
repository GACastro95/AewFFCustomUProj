#pragma once
#include "CoreMinimal.h"
#include "OnFinishedVehicleMove_ResultIntegerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedVehicleMove_ResultInteger, int32, Result);

