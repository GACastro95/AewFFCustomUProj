#pragma once
#include "CoreMinimal.h"
#include "ChangeMenuInputDeviceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangeMenuInputDevice, bool, IsGamepad);

