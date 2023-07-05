#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSStampedeRankParam.generated.h"

USTRUCT(BlueprintType)
struct FSSStampedeRankParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeRank;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedePoint;
    
    ABP_200508_API FSSStampedeRankParam();
};

