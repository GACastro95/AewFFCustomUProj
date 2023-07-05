#pragma once
#include "CoreMinimal.h"
#include "DebugSettingActiveFlagChangedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDebugSettingActiveFlagChangedDispatcher, const FString&, Key, bool, Active);

