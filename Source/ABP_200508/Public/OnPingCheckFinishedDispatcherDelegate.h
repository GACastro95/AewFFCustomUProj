#pragma once
#include "CoreMinimal.h"
#include "OnPingCheckFinishedDispatcherDelegate.generated.h"

class UELGameServerSelector;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnPingCheckFinishedDispatcher, UELGameServerSelector*, OnlineParam);

