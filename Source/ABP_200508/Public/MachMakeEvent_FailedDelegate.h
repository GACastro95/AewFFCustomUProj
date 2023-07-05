#pragma once
#include "CoreMinimal.h"
#include "EGameLiftMatchMakeState.h"
#include "EMatchMakeExecuteType.h"
#include "MachMakeEvent_FailedDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FMachMakeEvent_Failed, const EGameLiftMatchMakeState&, nowState, const EMatchMakeExecuteType&, callType, const FString&, errorMsg);

