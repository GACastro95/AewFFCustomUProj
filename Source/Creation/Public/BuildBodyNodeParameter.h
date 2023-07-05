#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "BuildBodyNodeTS.h"
#include "BuildBodyNodeParameter.generated.h"

USTRUCT(BlueprintType)
struct CREATION_API FBuildBodyNodeParameter {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float XOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DepthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float WidthScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Ratio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBuildBodyNodeTS Collision;
    
    FBuildBodyNodeParameter();
};

