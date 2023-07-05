#pragma once
#include "CoreMinimal.h"
#include "SSPlayerEventDispatcherDelegate.generated.h"

class AELSSPlayer;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSPlayerEventDispatcher, AELSSPlayer*, inPlayer);

