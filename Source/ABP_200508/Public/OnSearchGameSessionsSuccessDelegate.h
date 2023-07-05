#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameSessions_Response.h"
#include "OnSearchGameSessionsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnSearchGameSessionsSuccess, const FGameLiftGameSessions_Response&, gameSessionList);

