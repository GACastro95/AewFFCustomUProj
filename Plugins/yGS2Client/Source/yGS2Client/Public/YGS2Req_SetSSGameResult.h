#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2SSPlayerData.h"
#include "YGS2Req_SetSSGameResult.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_SetSSGameResult : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_SetSSGameResult();

    UFUNCTION(BlueprintCallable)
    void SetGameResult(const FString& gid, const FString& pid, const FString& gameResult);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FString GetPlayerSessionId() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2SSPlayerData GetPlayerData() const;
    
};

