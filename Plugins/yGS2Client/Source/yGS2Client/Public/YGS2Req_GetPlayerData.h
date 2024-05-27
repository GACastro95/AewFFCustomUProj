#pragma once
#include "CoreMinimal.h"
#include "YGS2RequestBase.h"
#include "YGS2Req_GetPlayerData.generated.h"

UCLASS(Blueprintable)
class YGS2CLIENT_API UYGS2Req_GetPlayerData : public UYGS2RequestBase {
    GENERATED_BODY()
public:
    UYGS2Req_GetPlayerData();

    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGoldTotal() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetAEWGold() const;
    
};

