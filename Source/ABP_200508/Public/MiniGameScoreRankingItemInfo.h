#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMiniGameID.h"
#include "MatchScoreRankingWrestlerInfo.h"
#include "MiniGameScoreRankingItemInfo.generated.h"

USTRUCT(BlueprintType)
struct FMiniGameScoreRankingItemInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameID MiniGameId;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMatchScoreRankingWrestlerInfo> UsedWrestlerList;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateTime;
    
    ABP_200508_API FMiniGameScoreRankingItemInfo();
};

