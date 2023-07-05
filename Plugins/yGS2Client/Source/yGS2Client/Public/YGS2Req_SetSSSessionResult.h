#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_SetSSSessionResult.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_SetSSSessionResult : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_SetSSSessionResult();
    UFUNCTION(BlueprintCallable)
    void SetSessionResult(const FString& sessionResult);
    
};

