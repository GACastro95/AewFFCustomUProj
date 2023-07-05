#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSFeaberScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FSSFeaberScoreParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 FeaberCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeScore;
    
    ABP_200508_API FSSFeaberScoreParam();
};

