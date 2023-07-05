#pragma once
#include "CoreMinimal.h"
#include "ChangeValue_DebugDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangeValue_DebugDispatcher, int32, Category, float, Value);

