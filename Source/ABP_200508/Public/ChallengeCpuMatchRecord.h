#pragma once
#include "CoreMinimal.h"
#include "ChallengeCpuMatchRecord.generated.h"

USTRUCT(BlueprintType)
struct FChallengeCpuMatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TotalMatchCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NumberOfWins;
    
    ABP_200508_API FChallengeCpuMatchRecord();
};

