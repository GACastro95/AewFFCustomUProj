#pragma once
#include "CoreMinimal.h"
#include "PlayerSpawnPointChangeResultDelegate.generated.h"

class AELSSPlayerState;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FPlayerSpawnPointChangeResult, AELSSPlayerState*, PlayerState, bool, isChange);

