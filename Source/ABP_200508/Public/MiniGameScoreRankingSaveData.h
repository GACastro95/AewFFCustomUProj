#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EMiniGameID.h"
#include "MatchScoreRankingWrestlerInfo.h"
#include "MiniGameScoreRankingSaveData.generated.h"

USTRUCT(BlueprintType)
struct FMiniGameScoreRankingSaveData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Score;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMiniGameID MiniGameId;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatchScoreRankingWrestlerInfo UsedWrestlerList[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDateTime DateTime;
    
    ABP_200508_API FMiniGameScoreRankingSaveData();
};

