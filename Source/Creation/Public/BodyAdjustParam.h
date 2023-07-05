#pragma once
#include "CoreMinimal.h"
#include "BodyAdjustParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBodyAdjustParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Height;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Muscle;
    
    FBodyAdjustParam();
};

