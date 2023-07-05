#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "ESSPlayerRankRange.h"
#include "SSPlayerRankRangeParam.generated.h"

USTRUCT(BlueprintType)
struct FSSPlayerRankRangeParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ESSPlayerRankRange PlayerRankRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MatchEntryCost;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ResultRankPointBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 DisconnectPenalty;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 IllegalPenalty;
    
    ABP_200508_API FSSPlayerRankRangeParam();
};

