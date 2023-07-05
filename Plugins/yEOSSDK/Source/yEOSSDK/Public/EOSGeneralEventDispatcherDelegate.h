#pragma once
#include "CoreMinimal.h"
#include "EEOSGeneralEvent.h"
#include "EEOSObjectType.h"
#include "EOSGeneralEventDispatcherDelegate.generated.h"

class UEOSCommon;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSGeneralEventDispatcher, EEOSGeneralEvent, GeneralEvent, EEOSObjectType, EOSObjectType, UEOSCommon*, EOSCommon);

