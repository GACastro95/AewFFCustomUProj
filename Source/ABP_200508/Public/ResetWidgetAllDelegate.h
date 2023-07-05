#pragma once
#include "CoreMinimal.h"
#include "ResetWidgetAllDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FResetWidgetAll, int32, Num);

