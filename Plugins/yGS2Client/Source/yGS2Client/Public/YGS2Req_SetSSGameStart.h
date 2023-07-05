#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2SSPlayerData.h"
#include "YGS2Req_SetSSGameStart.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_SetSSGameStart : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_SetSSGameStart();
    UFUNCTION(BlueprintCallable)
    void SetGameStartParam(const FString& gid, const FString& pid, const FString& Param);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FYGS2SSPlayerData GetPlayerData() const;
    
};

