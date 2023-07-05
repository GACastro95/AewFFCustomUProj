#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameSession_Response.h"
#include "GameLiftGameSessions_Response.h"
#include "GameLiftPlayerSession_Response.h"
#include "MatchMakeSystemData.generated.h"

USTRUCT(BlueprintType)
struct FMatchMakeSystemData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftGameSession_Response JoinGameSession;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftGameSessions_Response searchGameSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftPlayerSession_Response JoinPlayerSession;
    
    ABP_200508_API FMatchMakeSystemData();
};

