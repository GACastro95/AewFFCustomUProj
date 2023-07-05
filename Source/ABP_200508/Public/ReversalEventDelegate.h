#pragma once
#include "CoreMinimal.h"
#include "ESpecialMovesType.h"
#include "ReversalEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FReversalEvent, bool, Reversal, ESpecialMovesType, SpecialMovesType);

