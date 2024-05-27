#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "MatchScoreRankingSaveDataArray.h"
#include "MiniGameScoreRankingSaveDataArray.h"
#include "ELScoreRankingManager.generated.h"

UCLASS(Blueprintable)
class ABP_200508_API UELScoreRankingManager : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchScoreRankingSaveDataArray> m_MatchScoreRankingDataList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMiniGameScoreRankingSaveDataArray> m_MiniGameScoreRankingDataList;
    
public:
    UELScoreRankingManager();

};

