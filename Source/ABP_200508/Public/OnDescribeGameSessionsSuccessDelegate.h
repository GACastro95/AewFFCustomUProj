#pragma once
#include "CoreMinimal.h"
#include "DescribeGameSessions_RequestParam.h"
#include "GameLiftGameSessions_Response.h"
#include "OnDescribeGameSessionsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDescribeGameSessionsSuccess, const FDescribeGameSessions_RequestParam&, Request, const FGameLiftGameSessions_Response&, response);

