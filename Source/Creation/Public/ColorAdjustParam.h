#pragma once
#include "CoreMinimal.h"
#include "ColorAdjustParam.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FColorAdjustParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Desaturation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Hue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Luminous;
    
    FColorAdjustParam();
};

