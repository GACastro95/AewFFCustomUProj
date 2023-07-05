#pragma once
#include "CoreMinimal.h"
#include "GameLiftPlayerSession_Response.h"
#include "GameLiftPlayerSessions_Response.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftPlayerSessions_Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString nextToken;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftPlayerSession_Response> playerSessions;
    
    ABP_200508_API FGameLiftPlayerSessions_Response();
};

