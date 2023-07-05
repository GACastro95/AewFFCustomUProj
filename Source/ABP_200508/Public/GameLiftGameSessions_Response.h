#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameSession_Response.h"
#include "GameLiftGameSessions_Response.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftGameSessions_Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nextToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftGameSession_Response> gameSessionList;
    
    ABP_200508_API FGameLiftGameSessions_Response();
};

