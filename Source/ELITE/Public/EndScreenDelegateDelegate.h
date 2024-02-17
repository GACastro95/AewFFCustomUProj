#pragma once
#include "CoreMinimal.h"
#include "EndScreenDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEndScreenDelegate, int32, DecideControllerID, bool, IsExitGame);

