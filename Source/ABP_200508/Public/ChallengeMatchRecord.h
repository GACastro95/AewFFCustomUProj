#pragma once
#include "CoreMinimal.h"
#include "ChallengeMatchRecord.generated.h"

USTRUCT(BlueprintType)
struct FChallengeMatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWins;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineTotalMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OnlineNumberOfWins;
    
    ABP_200508_API FChallengeMatchRecord();
};

