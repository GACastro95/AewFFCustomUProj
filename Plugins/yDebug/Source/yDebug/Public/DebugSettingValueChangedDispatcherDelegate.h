#pragma once
#include "CoreMinimal.h"
#include "EDBGSettingValueType.h"
#include "DebugSettingValueChangedDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDebugSettingValueChangedDispatcher, const FString&, Key, EDBGSettingValueType, Type, float, Value, const FString&, Text);

