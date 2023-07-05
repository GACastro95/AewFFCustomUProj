#pragma once
#include "CoreMinimal.h"
#include "yEnMenuWidgetType.h"
#include "ChangedWidgetDelegate.generated.h"

class UELOperationalWidgetBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangedWidget, UELOperationalWidgetBase*, MenuWidget, yEnMenuWidgetType, Type);

