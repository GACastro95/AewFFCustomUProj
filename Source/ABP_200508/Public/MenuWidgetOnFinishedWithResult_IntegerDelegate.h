#pragma once
#include "CoreMinimal.h"
#include "MenuWidgetOnFinishedWithResult_IntegerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FMenuWidgetOnFinishedWithResult_Integer, int32, Result);

