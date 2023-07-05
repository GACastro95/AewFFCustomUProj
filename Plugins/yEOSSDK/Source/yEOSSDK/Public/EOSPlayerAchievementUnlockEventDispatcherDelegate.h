#pragma once
#include "CoreMinimal.h"
#include "EOSPlayerAchievementUnlockInfo.h"
#include "EOSPlayerAchievementUnlockEventDispatcherDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FEOSPlayerAchievementUnlockEventDispatcher, FEOSPlayerAchievementUnlockInfo, EOSPlayerAchievementUnlockInfo);

