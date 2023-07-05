#pragma once
#include "CoreMinimal.h"
#include "OnFinishedWithActionDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnFinishedWithAction, int32, Result);

