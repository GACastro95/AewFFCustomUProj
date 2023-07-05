#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "WrestlerSelectAssetLoadCompleteDelegateDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_DELEGATE_FourParams(FWrestlerSelectAssetLoadCompleteDelegate, int32, PositionIndex, EWrestlerID_N, WrestlerID, FGuid, WrestlerUID, int32, PresetIndex);

