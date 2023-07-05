#pragma once
#include "CoreMinimal.h"
#include "ChallengeCpuMatchDifficultyRecord.h"
#include "ChallengeMatchRecord.h"
#include "ChallengeWrestlerMatchRecord.generated.h"

USTRUCT(BlueprintType)
struct FChallengeWrestlerMatchRecord {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeMatchRecord MatchRecordList[10];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FChallengeCpuMatchDifficultyRecord CpuMatchRecordList[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AEW_WorldChampionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TTN_WorldChampionCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Womens_Champion;
    
    ABP_200508_API FChallengeWrestlerMatchRecord();
};

