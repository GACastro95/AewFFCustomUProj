#pragma once
#include "CoreMinimal.h"
#include "ChangedTouchLeaveRingDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FChangedTouchLeaveRing, bool, Flag);

