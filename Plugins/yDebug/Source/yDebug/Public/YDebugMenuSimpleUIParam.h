#pragma once
#include "CoreMinimal.h"
#include "YDebugMenuSimpleUIParamBase.h"
#include "YDebugMenuSimpleUIParam.generated.h"

class UYDebugMenuCallbackBase;

USTRUCT(BlueprintType)
struct YDEBUG_API FYDebugMenuSimpleUIParam : public FYDebugMenuSimpleUIParamBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UYDebugMenuCallbackBase* Callback;
    
    FYDebugMenuSimpleUIParam();
};

