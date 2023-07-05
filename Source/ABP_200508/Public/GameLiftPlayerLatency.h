#pragma once
#include "CoreMinimal.h"
#include "GameLiftPlayerLatency.generated.h"

USTRUCT(BlueprintType)
struct FGameLiftPlayerLatency {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString playerId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString regionIdentifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float latencyInMilliseconds;
    
    ABP_200508_API FGameLiftPlayerLatency();
};

