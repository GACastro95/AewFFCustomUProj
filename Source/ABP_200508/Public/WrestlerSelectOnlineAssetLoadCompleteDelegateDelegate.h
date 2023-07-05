#pragma once
#include "CoreMinimal.h"
#include "WrestlerSetupParam.h"
#include "WrestlerSelectOnlineAssetLoadCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_TwoParams(FWrestlerSelectOnlineAssetLoadCompleteDelegate, int32, PositionIndex, FWrestlerSetupParam, WrestlerSetupParam);

