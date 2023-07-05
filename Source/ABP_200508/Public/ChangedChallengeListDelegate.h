#pragma once
#include "CoreMinimal.h"
#include "ChangedChallengeListDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FChangedChallengeList, bool, ChangedDailyChallenge, bool, ChangedWeeklyChallenge);

