#pragma once
#include "CoreMinimal.h"
#include "ELLeaderboardUserData.h"
#include "AsyncCompletedQueryLeaderboardDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FAsyncCompletedQueryLeaderboard, const TArray<FELLeaderboardUserData>&, Data);

