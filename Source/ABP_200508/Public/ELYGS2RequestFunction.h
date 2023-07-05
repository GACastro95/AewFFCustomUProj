#pragma once
#include "CoreMinimal.h"
#include "EELYGS2RequestFunctionType.h"
#include "ELYGS2RequestFunction.generated.h"

class UYGS2RequestBase;

USTRUCT(BlueprintType)
struct FELYGS2RequestFunction {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYGS2RequestBase* RequestBase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EELYGS2RequestFunctionType FunctionType;
    
    ABP_200508_API FELYGS2RequestFunction();
};

