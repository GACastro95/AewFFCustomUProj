#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameSessionPlacement_Response.h"
#include "StartGameSessionPlace_RequestParam.h"
#include "OnStartGameSessionPlacementDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnStartGameSessionPlacement, const FStartGameSessionPlace_RequestParam&, requestParam, const FGameLiftGameSessionPlacement_Response&, responseParam);

