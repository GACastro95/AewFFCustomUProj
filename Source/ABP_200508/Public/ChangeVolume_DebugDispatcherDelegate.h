#pragma once
#include "CoreMinimal.h"
#include "ChangeVolume_DebugDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeVolume_DebugDispatcher, int32, Category, float, Volume);

