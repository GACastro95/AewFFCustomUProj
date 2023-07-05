#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSAttentionRateParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAttentionRateParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 CheerPoint;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AttentionRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 AttentionIcon;
    
    ABP_200508_API FSSAttentionRateParam();
};

