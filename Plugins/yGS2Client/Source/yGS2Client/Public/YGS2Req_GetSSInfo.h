#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_GetSSInfo.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_GetSSInfo : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_GetSSInfo();

    UFUNCTION(BlueprintCallable)
    void SetStage(const FString& stage);
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerMin();
    
    UFUNCTION(BlueprintCallable)
    int32 GetPlayerMax();
    
    UFUNCTION(BlueprintCallable)
    int32 GetLobbyTime();
    
};

