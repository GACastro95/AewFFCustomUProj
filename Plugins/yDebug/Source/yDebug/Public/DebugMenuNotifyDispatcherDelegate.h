#pragma once
#include "CoreMinimal.h"
#include "FYDebugMenuNotifyType.h"
#include "YDebugMenuSimpleUIParam.h"
#include "DebugMenuNotifyDispatcherDelegate.generated.h"

class UYDebugMenuUIBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDebugMenuNotifyDispatcher, FYDebugMenuNotifyType, DebugMenuNotifyType, UYDebugMenuUIBase*, DebugMenuUIBase, const FString&, RegistKey, const FYDebugMenuSimpleUIParam&, YDebugMenuSimpleUIParam);

