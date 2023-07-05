#pragma once
#include "CoreMinimal.h"
#include "EOutGamePanelEventType.h"
#include "OutGamePanelEventDelegate.generated.h"

class UELSSPanelOutGameBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOutGamePanelEvent, const EOutGamePanelEventType, EventType, UELSSPanelOutGameBase*, callPanel);

