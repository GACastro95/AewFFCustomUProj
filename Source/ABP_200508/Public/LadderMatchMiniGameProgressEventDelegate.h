#pragma once
#include "CoreMinimal.h"
#include "LadderMatchMiniGameProgressEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FLadderMatchMiniGameProgressEvent, int32, Step, bool, Finish);

