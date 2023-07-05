#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMatchScoreRankingsType.h"
#include "MatchScoreRankingWrestlerInfo.h"
#include "MatchScoreRankingItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMatchScoreRankingItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMatchScoreRankingsType RankingType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchScoreRankingWrestlerInfo> UsedWrestlerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float StarNum;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OptionValue;
    
    ABP_200508_API FMatchScoreRankingItemInfo();
};

