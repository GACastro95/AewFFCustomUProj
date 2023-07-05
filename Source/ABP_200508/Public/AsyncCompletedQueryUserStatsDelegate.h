#pragma once
#include "CoreMinimal.h"
#include "AsyncCompletedQueryUserStatsDelegate.generated.h"

class UELLeaderboardUserStats;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedQueryUserStats, UELLeaderboardUserStats*, UserStats);

