#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "EGameLiftActivateStatus.h"
#include "OnDescribeGameSessionQueuesFailedDelegate.h"
#include "OnDescribeGameSessionQueuesSuccessDelegate.h"
#include "GLAPI_DescribeGameSessionQueues.generated.h"

class UGLAPI_DescribeGameSessionQueues;
class UGameLiftClientObject;

UCLASS(Blueprintable)
class ABP_200508_API UGLAPI_DescribeGameSessionQueues : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribeGameSessionQueuesSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnDescribeGameSessionQueuesFailed OnFailed;
    
    UGLAPI_DescribeGameSessionQueues();

    UFUNCTION(BlueprintCallable)
    static UGLAPI_DescribeGameSessionQueues* DescribeGameSessionQueues(UGameLiftClientObject* client, const FString& QueueName);
    
    UFUNCTION(BlueprintCallable)
    EGameLiftActivateStatus Activate();
    
};

