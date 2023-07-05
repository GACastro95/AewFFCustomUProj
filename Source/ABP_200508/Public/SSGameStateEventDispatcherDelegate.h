#pragma once
#include "CoreMinimal.h"
#include "SSGameStateEventDispatcherDelegate.generated.h"

class AELSSGameState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSGameStateEventDispatcher, AELSSGameState*, inGameState);

