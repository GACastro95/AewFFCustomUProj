#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSAttentionScoreParam.generated.h"

USTRUCT(BlueprintType)
struct FSSAttentionScoreParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 UpperAttention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LowerAttention;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 StampedeScore;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PlayerScore;
    
    ABP_200508_API FSSAttentionScoreParam();
};

