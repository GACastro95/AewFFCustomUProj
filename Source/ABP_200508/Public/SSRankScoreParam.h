#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSRankScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FSSRankScoreParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    ABP_200508_API FSSRankScoreParam();
};

