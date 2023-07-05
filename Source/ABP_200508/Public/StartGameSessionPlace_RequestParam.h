#pragma once
#include "CoreMinimal.h"
#include "GameLiftDesiredPlayerSession.h"
#include "GameLiftGameProperty.h"
#include "GameLiftPlayerLatency.h"
#include "StartGameSessionPlace_RequestParam.generated.h"

USTRUCT(BlueprintType)
struct FStartGameSessionPlace_RequestParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString PlacementId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionQueueName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 maximumPlayerSessionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftGameProperty> gameProperties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftPlayerLatency> playerLatencies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftDesiredPlayerSession> desiredPlayerSessions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionData;
    
    ABP_200508_API FStartGameSessionPlace_RequestParam();
};

