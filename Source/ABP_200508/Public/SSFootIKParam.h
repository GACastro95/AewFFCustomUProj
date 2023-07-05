#pragma once
#include "CoreMinimal.h"
#include "SSFootIKParam.generated.h"

USTRUCT(BlueprintType)
struct FSSFootIKParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float HipHeightDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float LeftHeightDiff;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float RightHeightDiff;
    
    ABP_200508_API FSSFootIKParam();
};

