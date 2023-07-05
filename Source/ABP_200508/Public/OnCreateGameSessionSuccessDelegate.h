#pragma once
#include "CoreMinimal.h"
#include "CreateGameSession_RequestParam.h"
#include "GameLiftGameSession_Response.h"
#include "OnCreateGameSessionSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreateGameSessionSuccess, const FCreateGameSession_RequestParam&, reqestParam, const FGameLiftGameSession_Response&, responseParam);

