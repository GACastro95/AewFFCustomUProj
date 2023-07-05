#pragma once
#include "CoreMinimal.h"
#include "Engine/EngineBaseTypes.h"
#include "InGameInputEvent_AnyKeyDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInGameInputEvent_AnyKey, TEnumAsByte<EInputEvent>, KeyEvent);

