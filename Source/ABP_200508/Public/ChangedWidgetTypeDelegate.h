#pragma once
#include "CoreMinimal.h"
#include "yEnMenuWidgetType.h"
#include "ChangedWidgetTypeDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedWidgetType, yEnMenuWidgetType, Type);

