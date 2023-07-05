#pragma once
#include "CoreMinimal.h"
#include "EEOSAchievementEvent.h"
#include "EOSAchievementEventDispatcherDelegate.generated.h"

class UEOSAchievement;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FEOSAchievementEventDispatcher, EEOSAchievementEvent, EOSAchievementEvent, UEOSAchievement*, EOSAchievement);

