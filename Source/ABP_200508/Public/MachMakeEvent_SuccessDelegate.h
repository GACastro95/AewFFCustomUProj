#pragma once
#include "CoreMinimal.h"
#include "EGameLiftMatchMakeState.h"
#include "EMatchMakeExecuteType.h"
#include "MatchMakeSystemData.h"
#include "MachMakeEvent_SuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachMakeEvent_Success, const EGameLiftMatchMakeState&, nowState, const EMatchMakeExecuteType&, callType, const FMatchMakeSystemData&, matchmake);

