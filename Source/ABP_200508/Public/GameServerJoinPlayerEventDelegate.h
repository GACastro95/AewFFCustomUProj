#pragma once
#include "CoreMinimal.h"
#include "SSOnlinePlayerData.h"
#include "GameServerJoinPlayerEventDelegate.generated.h"

class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FGameServerJoinPlayerEvent, APlayerController*, pController, const FSSOnlinePlayerData&, PlayerData, bool, isLogin);

