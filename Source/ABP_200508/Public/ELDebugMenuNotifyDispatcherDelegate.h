#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuSimpleUIParam.h"
#include "FELDebugMenuNotifyType.h"
#include "ELDebugMenuNotifyDispatcherDelegate.generated.h"

class UELDebugMenuUIBase;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FELDebugMenuNotifyDispatcher, FELDebugMenuNotifyType, DebugMenuNotifyType, UELDebugMenuUIBase*, DebugMenuUIBase, const FString&, RegistKey, const FELDebugMenuSimpleUIParam&, ELDebugMenuSimpleUIParam);

