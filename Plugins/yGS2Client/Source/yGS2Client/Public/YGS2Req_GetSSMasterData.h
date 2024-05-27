#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2SSMasterData.h"
#include "YGS2Req_GetSSMasterData.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_GetSSMasterData : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_GetSSMasterData();

    UFUNCTION(BlueprintCallable)
    void SetRequestParams(const FString& stage, const FString& app_ver, bool only_data_id);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2SSMasterData GetMasterData() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetElapsedTime() const;
    
};

