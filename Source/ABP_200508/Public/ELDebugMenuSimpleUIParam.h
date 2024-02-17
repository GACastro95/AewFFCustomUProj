#pragma once
#include "CoreMinimal.h"
#include "ELDebugMenuSimpleUIParamBase.h"
#include "ELDebugMenuSimpleUIParam.generated.h"

class UELDebugMenuCallbackBase;

USTRUCT(BlueprintType)
struct ABP_200508_API FELDebugMenuSimpleUIParam : public FELDebugMenuSimpleUIParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UELDebugMenuCallbackBase> Callback;
    
    FELDebugMenuSimpleUIParam();
};

