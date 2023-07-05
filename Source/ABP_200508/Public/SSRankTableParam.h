#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSRankTableParam.generated.h"

USTRUCT(BlueprintType)
struct FSSRankTableParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Rank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 Exp;
    
    ABP_200508_API FSSRankTableParam();
};

