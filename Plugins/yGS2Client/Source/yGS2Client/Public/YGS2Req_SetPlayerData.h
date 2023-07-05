#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_SetPlayerData.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_SetPlayerData : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_SetPlayerData();
    UFUNCTION(BlueprintCallable)
    void SetDebugGamerTag(const FString& _strGameTag);
    
    UFUNCTION(BlueprintCallable)
    void SetAEWGoldTolal(int32 _sAEWGoldTotal);
    
    UFUNCTION(BlueprintCallable)
    void SetAEWGold(int32 _sAEWGold);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGoldTolal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGold() const;
    
};

