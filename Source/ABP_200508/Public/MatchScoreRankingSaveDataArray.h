#pragma once
#include "CoreMinimal.h"
#include "MatchScoreRankingSaveData.h"
#include "MatchScoreRankingSaveDataArray.generated.h"

USTRUCT(BlueprintType)
struct FMatchScoreRankingSaveDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchScoreRankingSaveData> m_Data;
    
    ABP_200508_API FMatchScoreRankingSaveDataArray();
};

