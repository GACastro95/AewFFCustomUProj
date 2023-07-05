#pragma once
#include "CoreMinimal.h"
#include "SSModeServerParam.generated.h"

USTRUCT(BlueprintType)
struct YGS2CLIENT_API FSSModeServerParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Name;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString URL;
    
    FSSModeServerParam();
};

