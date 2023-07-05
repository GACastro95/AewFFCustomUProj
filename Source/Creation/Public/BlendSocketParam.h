#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BlendSocketParam.generated.h"

USTRUCT(BlueprintType)
struct FBlendSocketParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Slim;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Heavy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform Muscular;
    
    CREATION_API FBlendSocketParam();
};

