#pragma once
#include "CoreMinimal.h"
#include "LastHitMovesSituationIndexEventDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLastHitMovesSituationIndexEvent, int32, MovesSituationIndex);

