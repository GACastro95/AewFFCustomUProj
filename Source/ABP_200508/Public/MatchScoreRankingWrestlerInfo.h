#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "EWrestlerID_N.h"
#include "MatchScoreRankingWrestlerInfo.generated.h"

USTRUCT(BlueprintType)
struct FMatchScoreRankingWrestlerInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EWrestlerID_N WrestlerID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid WrestlerUID;
    
    ABP_200508_API FMatchScoreRankingWrestlerInfo();
};

