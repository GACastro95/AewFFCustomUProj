#pragma once
#include "CoreMinimal.h"
#include "ChangedInputDeviceDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangedInputDevice, bool, Connected, int32, ControllerId);

