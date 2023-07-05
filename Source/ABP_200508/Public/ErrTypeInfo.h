#pragma once
#include "CoreMinimal.h"
#include "ErrTypeInfo.generated.h"

USTRUCT(BlueprintType)
struct FErrTypeInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString ErrTitle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool isScreenShot;
    
    ABP_200508_API FErrTypeInfo();
};

