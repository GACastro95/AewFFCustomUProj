#pragma once
#include "CoreMinimal.h"
#include "EEOSLeaderboardEvent.h"
#include "EOSLeaderboardEventDispatcherDelegate.generated.h"

class UEOSLeaderboard;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSLeaderboardEventDispatcher, EEOSLeaderboardEvent, EOSLeaderboardEvent, UEOSLeaderboard*, EOSLeaderboard);

