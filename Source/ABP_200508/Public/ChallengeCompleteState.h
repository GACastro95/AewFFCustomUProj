#pragma once
#include "CoreMinimal.h"
#include "ChallengeCompleteState.generated.h"

USTRUCT(BlueprintType)
struct FChallengeCompleteState {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ChallengeId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool Completed;
    
    ABP_200508_API FChallengeCompleteState();
};

