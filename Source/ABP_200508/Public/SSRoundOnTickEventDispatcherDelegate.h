#pragma once
#include "CoreMinimal.h"
#include "SSRoundParam.h"
#include "SSRoundOnTickEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FSSRoundOnTickEventDispatcher, const FSSRoundParam&, inRoundParam, float, inNewRoundTime, float, inPrevRoundTime);

