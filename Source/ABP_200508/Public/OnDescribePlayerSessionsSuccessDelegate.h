#pragma once
#include "CoreMinimal.h"
#include "DescribePlayerSessions_RequestParam.h"
#include "GameLiftPlayerSessions_Response.h"
#include "OnDescribePlayerSessionsSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnDescribePlayerSessionsSuccess, const FDescribePlayerSessions_RequestParam&, Request, const FGameLiftPlayerSessions_Response&, response);

