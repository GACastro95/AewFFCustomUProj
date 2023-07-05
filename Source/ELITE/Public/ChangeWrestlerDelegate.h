#pragma once
#include "CoreMinimal.h"
#include "ChangeWrestlerDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FChangeWrestler, int32, WrestlerID, int32, WrestlerIndex, int32, CostumeNo, bool, EntCostume);

