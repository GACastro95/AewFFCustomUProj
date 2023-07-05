#pragma once
#include "CoreMinimal.h"
#include "CloseLoginUIEventHandlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FCloseLoginUIEventHandler, int32, HostIndex);

