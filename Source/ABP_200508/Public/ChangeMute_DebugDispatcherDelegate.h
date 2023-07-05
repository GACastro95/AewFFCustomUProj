#pragma once
#include "CoreMinimal.h"
#include "ChangeMute_DebugDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeMute_DebugDispatcher, int32, Category, bool, IsMute);

