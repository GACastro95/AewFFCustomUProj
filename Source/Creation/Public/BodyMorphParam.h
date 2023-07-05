#pragma once
#include "CoreMinimal.h"
#include "BodyMorphParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBodyMorphParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Slim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Heavy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Muscular;
    
    FBodyMorphParam();
};

