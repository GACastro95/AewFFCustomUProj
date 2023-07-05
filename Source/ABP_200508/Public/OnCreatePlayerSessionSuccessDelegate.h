#pragma once
#include "CoreMinimal.h"
#include "CreatePlayerSession_RequestParam.h"
#include "GameLiftPlayerSession_Response.h"
#include "OnCreatePlayerSessionSuccessDelegate.generated.h"

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnCreatePlayerSessionSuccess, const FCreatePlayerSession_RequestParam&, Request, const FGameLiftPlayerSession_Response&, response);

