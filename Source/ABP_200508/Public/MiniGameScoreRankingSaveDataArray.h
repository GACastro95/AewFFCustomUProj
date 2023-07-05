#pragma once
#include "CoreMinimal.h"
#include "MiniGameScoreRankingSaveData.h"
#include "MiniGameScoreRankingSaveDataArray.generated.h"

USTRUCT(BlueprintType)
struct FMiniGameScoreRankingSaveDataArray {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniGameScoreRankingSaveData> m_Data;
    
    ABP_200508_API FMiniGameScoreRankingSaveDataArray();
};

