#pragma once
#include "CoreMinimal.h"
#include "SSRoundParam.h"
#include "SSRoundEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FSSRoundEventDispatcher, const FSSRoundParam&, inRoundParam);

