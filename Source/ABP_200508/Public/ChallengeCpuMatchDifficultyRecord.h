#pragma once
#include "CoreMinimal.h"
#include "ChallengeCpuMatchRecord.h"
#include "ChallengeCpuMatchDifficultyRecord.generated.h"

USTRUCT(BlueprintType)
struct FChallengeCpuMatchDifficultyRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCpuMatchRecord RecordList[4];
    
    ABP_200508_API FChallengeCpuMatchDifficultyRecord();
};

