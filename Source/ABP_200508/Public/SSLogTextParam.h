#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "SSLogTextParam.generated.h"

USTRUCT(BlueprintType)
struct FSSLogTextParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FLinearColor Color;
    
    ABP_200508_API FSSLogTextParam();
};

