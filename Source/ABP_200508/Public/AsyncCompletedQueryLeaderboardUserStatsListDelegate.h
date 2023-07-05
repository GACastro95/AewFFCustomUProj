#pragma once
#include "CoreMinimal.h"
#include "ELLeaderboardUserData.h"
#include "AsyncCompletedQueryLeaderboardUserStatsListDelegate.generated.h"

class UELLeaderboardUserStats;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FAsyncCompletedQueryLeaderboardUserStatsList, const TArray<FELLeaderboardUserData>&, UserData, const TArray<UELLeaderboardUserStats*>&, UserStats);

