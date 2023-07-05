#pragma once
#include "CoreMinimal.h"
#include "GameLiftFilterConfiguration.h"
#include "GameLiftGameSessionQueueDestination.h"
#include "GameLiftPlacePlayerSession.h"
#include "GameLiftPriorityConfiguration.h"
#include "GameLiftGameSessionQueue_Response.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftGameSessionQueue_Response {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString gameSessionQueueArn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 timeoutInSeconds;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftPlacePlayerSession> playerLatencyPolicies;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGameLiftGameSessionQueueDestination> destinations;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftFilterConfiguration filterConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameLiftPriorityConfiguration priorityConfiguration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString customEventData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString notificationTarget;
    
    ABP_200508_API FGameLiftGameSessionQueue_Response();
};

