#pragma once
#include "CoreMinimal.h"
#include "GameLiftGameSessionQueueDestination.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftGameSessionQueueDestination {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString destinationArn;
    
    ABP_200508_API FGameLiftGameSessionQueueDestination();
};

