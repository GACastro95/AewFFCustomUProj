#pragma once
#include "CoreMinimal.h"
#include "EEOSStatsEvent.h"
#include "EOSStatsEventDispatcherDelegate.generated.h"

class UEOSStats;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FEOSStatsEventDispatcher, EEOSStatsEvent, EOSStatsEvent, UEOSStats*, EOSStats, const FString&, ProductUserID);

