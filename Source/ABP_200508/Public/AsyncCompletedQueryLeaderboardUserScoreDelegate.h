#pragma once
#include "CoreMinimal.h"
#include "ELLeaderboardUserData.h"
#include "AsyncCompletedQueryLeaderboardUserScoreDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedQueryLeaderboardUserScore, const TArray<FELLeaderboardUserData>&, Data);

