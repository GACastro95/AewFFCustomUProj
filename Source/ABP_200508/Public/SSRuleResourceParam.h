#pragma once
#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "SSRuleResourceParam.generated.h"

class UTexture2D;

USTRUCT(BlueprintType)
struct FSSRuleResourceParam : public FTableRowBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 ID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTexture2D* ImageL;
    
    ABP_200508_API FSSRuleResourceParam();
};

