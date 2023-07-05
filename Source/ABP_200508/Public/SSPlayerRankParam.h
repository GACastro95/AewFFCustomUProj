#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSPlayerRank.h"
#include "ESSPlayerRankRange.h"
#include "SSPlayerRankParam.generated.h"

USTRUCT(BlueprintType)
struct FSSPlayerRankParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerRankRange PlayerRankRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerRank PlayerRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PromotionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DemotionPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PromotionRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DemotionRank;
    
    ABP_200508_API FSSPlayerRankParam();
};

